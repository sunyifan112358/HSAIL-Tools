#
# see README for information on building libHSAIL
#

all: libhsail hsailasm

ifeq ($(OS),Windows_NT)
_WINDOWS = 1
else
_GCC = 1
endif

LIBS :=
LIBPATHS :=
ARFLAGS =

ifdef _WINDOWS
# windows (msvc or mingw)
MKDIR = cmd.exe /c "(md $(subst /,\,$(@D)) || echo whatever) >NUL 2>NUL"
CLEAN_BUILD_DIR=cmd.exe /c del /s /q $(subst /,\,$(BUILD_DIR))
EXE_SUFFIX := .exe
ifdef _GCC # & _WINDOWS
# windows, mingw
CONFIG := mingw
LIBS += dbghelp psapi
else # !_GCC & _WINDOWS
# windows, msvc
CONFIG := msvc
endif
else # !_WINDOWS
# linux
MKDIR = mkdir -p $(@D)
WITH_LIBBRIGDWARF=1
CXXFLAGS += -fPIC -fno-rtti
LIBS +=  dl pthread
CONFIG := linux
EXE_SUFFIX :=
endif

ifdef _M64
ifdef _M32
$(error conflict between _M64 and _M32)
endif
endif

ifndef _GCC

# MSVC only

OBJ_SUFFIX = .obj
LIB_SUFFIX = .lib
LIB_PREFIX =

CXXFLAGS += -nologo -c -EHsc

CXXFLAGS += -D_CRT_SECURE_NO_WARNINGS -D_SCL_SECURE_NO_WARNINGS -D_SCL_SECURE_NO_DEPRECATE -D_CRT_NONSTDC_NO_DEPRECATE

ifdef _OPT
CXXFLAGS += -DNDEBUG -O2
LLVM_SUBDIR = Release
CONFIG := $(CONFIG)_opt
else
LLVM_SUBDIR = Debug
endif

ifdef _DBG
CONFIG := $(CONFIG)_dbg
CXXFLAGS += -Z7 -Od -D_DEBUG -MDd
else
CXXFLAGS += -MD
endif

ifdef _M64
VSFLAVOR := x64
else
VSFLAVOR := x86
endif

# MSVC auto-configuration via vshelper.bat

SHELL:=cmd.exe
.SHELLFLAGS:=/c
VSHELPER_OUT:=$(shell vshelper.bat $(VSFLAVOR))
include vsvars.inc

ifeq (,$(findstring Optimizing Compiler,$(VSHELPER_OUT)))
$(error MSVC version mismatch - $(VSHELPER_OUT))
endif

ifneq (,$(findstring for x86,$(VSHELPER_OUT))$(findstring for 80x86,$(VSHELPER_OUT)))
ifdef _M64
$(error MSVC version mismatch - $(VSHELPER_OUT))
else
_M32:=1
VSFLAVOR := x86
endif
endif

ifneq (,$(findstring for x64,$(VSHELPER_OUT)))
ifdef _M32
$(error MSVC version mismatch - $(VSHELPER_OUT))
else
_M64:=1
VSFLAVOR := x64
endif
endif

# end of MSVC auto-configuration

CONFIG := $(CONFIG)_$(VSFLAVOR)

LLVM_LIBDIR ?= $(LLVM_BUILD)/lib/$(LLVM_SUBDIR)

LIBS += shell32 advapi32

CXX = cl.exe
CXXFLAGS += /Fo$@
AR = lib.exe
ARFLAGS += /nologo /out:"$@"
LD = link.exe
LDFLAGS += /nologo /out:"$@" /debug /ignore:4098

LDFLAGS += $(LIBPATHS:%=/LIBPATH:%)
LDFLAGS_LIBS = $(LIBS:%=%.lib)

else # _GCC
# this applies to both linux and mingw

OBJ_SUFFIX = .o
LIB_SUFFIX = .a
LIB_PREFIX = lib

ifdef _OPT
CXXFLAGS += -O3 -DNDEBUG
CONFIG := $(CONFIG)_opt
endif

ifdef _DBG
CXXFLAGS += -g -D_DEBUG
CONFIG := $(CONFIG)_dbg
else
LDFLAGS += -s
endif

ifdef _M64
CXXFLAGS += -m64
LDFLAGS += -m64
CONFIG := $(CONFIG)_m64
endif

ifdef _M32
CXXFLAGS += -m32
LDFLAGS += -m32
CONFIG := $(CONFIG)_m32
endif

LLVM_LIBDIR = $(LLVM_BUILD)/lib

#CXXFLAGS +=  -Wall -Wno-reorder -Wno-unused -Wno-deprecated -Werror -pipe  -fmerge-all-constants -fno-tree-vectorize -fno-strict-aliasing
CXXFLAGS +=  -Wno-reorder -Wno-unused -Wno-deprecated -fno-strict-aliasing

CXX ?= g++
CXXFLAGS += -c -o $@
AR ?= ar
ARFLAGS += rv $@
LD = $(CXX)
LDFLAGS += -o $@ $(LIBPATHS:%=-L%)
LDFLAGS_LIBS = $(LIBS:%=-l%)

endif # _GCC

BUILD_DIR ?= build_$(CONFIG)

INCLUDES = -I$(LIBHSAIL_DIR) $(LLVM_INCFLAGS) -D__STDC_LIMIT_MACROS -D__STDC_CONSTANT_MACROS

ifdef LLVM_CONFIG
LLVM_INCFLAGS = -I$(shell $(LLVM_CONFIG) --includedir)
LLVM_LIBDIR = $(shell $(LLVM_CONFIG) --libdir)
endif

ifdef BUILD_OWN_LLVM_LIBS

# this will not invoke cmake so it still needs LLVM_BUILD pointing to a pre-configured build dir

LLVM_LIB = $(BUILD_DIR)/$(LIB_PREFIX)llvm$(LIB_SUFFIX)
LLVM_DIR = $(LLVM_SRC)/lib/Support $(LLVM_SRC)/lib/Object
LLVM_SRCS = $(wildcard $(LLVM_DIR:%=%/*.cpp))
LLVM_OBJS = $(LLVM_SRCS:$(LLVM_SRC)/lib/%.cpp=$(BUILD_DIR)/o_%$(OBJ_SUFFIX))
LIBS := llvm $(LIBS)
VPATH = $(LLVM_SRC)/lib

$(LLVM_OBJS) : | $(BUILD_DIR)/o_Support/.dummy $(BUILD_DIR)/o_Object/.dummy

$(LLVM_LIB): $(LLVM_OBJS)
	$(AR) $(ARFLAGS) $^

else

# pre-built llvm

$(info LLVM_LIBDIR=$(LLVM_LIBDIR))
LLVM_LIB = $(LLVM_LIBDIR)/$(LIB_PREFIX)LLVMSupport$(LIB_SUFFIX) $(LLVM_LIBDIR)/$(LIB_PREFIX)LLVMObject$(LIB_SUFFIX)
LIBPATHS += $(LLVM_LIBDIR)
LIBS := LLVMSupport LLVMObject $(LIBS)
endif

LLVM_INCFLAGS ?= -I$(LLVM_SRC)/include -I$(LLVM_BUILD)/include

LIBS := hsail $(LIBS)
LIBPATHS += $(BUILD_DIR)

llvm: $(LLVM_LIB)

###########################

LIBHSAIL_DIR  = libHSAIL
LIBHSAIL_LIB  = $(BUILD_DIR)/$(LIB_PREFIX)hsail$(LIB_SUFFIX)
LIBHSAIL_SRCS = $(wildcard $(LIBHSAIL_DIR)/*.cpp)
LIBHSAIL_OBJS = $(LIBHSAIL_SRCS:%.cpp=$(BUILD_DIR)/o_%$(OBJ_SUFFIX))

$(LIBHSAIL_OBJS) : | $(BUILD_DIR)/o_$(LIBHSAIL_DIR)/.dummy

$(LIBHSAIL_LIB): $(LIBHSAIL_OBJS)
	$(AR) $(ARFLAGS) $^

libhsail: $(LIBHSAIL_LIB)

###########################

ifdef WITH_LIBBRIGDWARF

CXXFLAGS += -DWITH_LIBBRIGDWARF
LIBS := brigdwarf dwarf elf $(LIBS)
INCLUDES += -I$(LIBBRIGDWARF_DIR)

LIBBRIGDWARF_DIR  = libBRIGdwarf
LIBBRIGDWARF_LIB  = $(BUILD_DIR)/$(LIB_PREFIX)brigdwarf$(LIB_SUFFIX)
LIBBRIGDWARF_SRCS = $(wildcard $(LIBBRIGDWARF_DIR)/*.cpp)
LIBBRIGDWARF_OBJS = $(LIBBRIGDWARF_SRCS:%.cpp=$(BUILD_DIR)/o_%$(OBJ_SUFFIX))

$(LIBBRIGDWARF_OBJS) : | $(BUILD_DIR)/o_$(LIBBRIGDWARF_DIR)/.dummy

$(LIBBRIGDWARF_LIB): $(LIBBRIGDWARF_OBJS)
	$(AR) $(ARFLAGS) $^

libbrigdwarf: $(LIBBRIGDWARF_LIB)
.PHONY: libbrigdwarf

else
LIBBRIGDWARF_LIB =
endif

###########################

HSAILASM_DIR  = HSAILasm
HSAILASM_EXE  = $(BUILD_DIR)/hsailasm$(EXE_SUFFIX)
HSAILASM_SRCS = $(wildcard $(HSAILASM_DIR)/*.cpp)
HSAILASM_OBJS = $(HSAILASM_SRCS:%.cpp=$(BUILD_DIR)/o_%$(OBJ_SUFFIX))

$(HSAILASM_OBJS) : | $(BUILD_DIR)/o_$(HSAILASM_DIR)/.dummy

$(HSAILASM_EXE): $(HSAILASM_OBJS) $(LLVM_LIB) $(LIBHSAIL_LIB) $(LIBBRIGDWARF_LIB)
	$(LD) $(LDFLAGS) $(HSAILASM_OBJS) $(LDFLAGS_LIBS)

hsailasm: $(HSAILASM_EXE)


#############################################
# universal rule for object files
$(BUILD_DIR)/o_%$(OBJ_SUFFIX) : %.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) $<

# universal rule for object file dirs
$(BUILD_DIR)/%/.dummy :
	@$(MKDIR)
	@echo . >$@

clean:
	@$(CLEAN_BUILD_DIR)

.PHONY: clean all hsailasm libhsail llvm

.SUFFIXES: