// University of Illinois/NCSA
// Open Source License
//
// Copyright (c) 2013, Advanced Micro Devices, Inc.
// All rights reserved.
//
// Developed by:
//
//     HSA Team
//
//     Advanced Micro Devices, Inc
//
//     www.amd.com
//
// Permission is hereby granted, free of charge, to any person obtaining a copy of
// this software and associated documentation files (the "Software"), to deal with
// the Software without restriction, including without limitation the rights to
// use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
// of the Software, and to permit persons to whom the Software is furnished to do
// so, subject to the following conditions:
//
//     * Redistributions of source code must retain the above copyright notice,
//       this list of conditions and the following disclaimers.
//
//     * Redistributions in binary form must reproduce the above copyright notice,
//       this list of conditions and the following disclaimers in the
//       documentation and/or other materials provided with the distribution.
//
//     * Neither the names of the LLVM Team, University of Illinois at
//       Urbana-Champaign, nor the names of its contributors may be used to
//       endorse or promote products derived from this Software without specific
//       prior written permission.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
// FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
// CONTRIBUTORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS WITH THE
// SOFTWARE.
static_assert(offsetof(Brig::BrigAluModifier, allBits) == 0, "bad alignment in Brig::BrigAluModifier");
static_assert(offsetof(Brig::BrigAluModifier, allBits)+sizeof(((Brig::BrigAluModifier*)0)->allBits) == sizeof(Brig::BrigAluModifier), "bad alignment in Brig::BrigAluModifier");



static_assert(offsetof(Brig::BrigDirectiveArgBlockEnd, base) == 0, "bad alignment in Brig::BrigDirectiveArgBlockEnd");
static_assert(offsetof(Brig::BrigDirectiveArgBlockEnd, base)+sizeof(((Brig::BrigDirectiveArgBlockEnd*)0)->base) == sizeof(Brig::BrigDirectiveArgBlockEnd), "bad alignment in Brig::BrigDirectiveArgBlockEnd");

static_assert(offsetof(Brig::BrigDirectiveArgBlockStart, base) == 0, "bad alignment in Brig::BrigDirectiveArgBlockStart");
static_assert(offsetof(Brig::BrigDirectiveArgBlockStart, base)+sizeof(((Brig::BrigDirectiveArgBlockStart*)0)->base) == sizeof(Brig::BrigDirectiveArgBlockStart), "bad alignment in Brig::BrigDirectiveArgBlockStart");

static_assert(offsetof(Brig::BrigDirectiveComment, base) == 0, "bad alignment in Brig::BrigDirectiveComment");
static_assert(offsetof(Brig::BrigDirectiveComment, name)+sizeof(((Brig::BrigDirectiveComment*)0)->name) == sizeof(Brig::BrigDirectiveComment), "bad alignment in Brig::BrigDirectiveComment");

static_assert(offsetof(Brig::BrigDirectiveControl, base) == 0, "bad alignment in Brig::BrigDirectiveControl");
static_assert(offsetof(Brig::BrigDirectiveControl, control)+sizeof(((Brig::BrigDirectiveControl*)0)->control) == offsetof(Brig::BrigDirectiveControl,reserved), "bad alignment in Brig::BrigDirectiveControl");
static_assert(offsetof(Brig::BrigDirectiveControl, reserved)+sizeof(((Brig::BrigDirectiveControl*)0)->reserved) == offsetof(Brig::BrigDirectiveControl,operands), "bad alignment in Brig::BrigDirectiveControl");
static_assert(offsetof(Brig::BrigDirectiveControl, operands)+sizeof(((Brig::BrigDirectiveControl*)0)->operands) == sizeof(Brig::BrigDirectiveControl), "bad alignment in Brig::BrigDirectiveControl");

static_assert(offsetof(Brig::BrigDirectiveExecutable, base) == 0, "bad alignment in Brig::BrigDirectiveExecutable");
static_assert(offsetof(Brig::BrigDirectiveExecutable, name)+sizeof(((Brig::BrigDirectiveExecutable*)0)->name) == offsetof(Brig::BrigDirectiveExecutable,outArgCount), "bad alignment in Brig::BrigDirectiveExecutable");
static_assert(offsetof(Brig::BrigDirectiveExecutable, outArgCount)+sizeof(((Brig::BrigDirectiveExecutable*)0)->outArgCount) == offsetof(Brig::BrigDirectiveExecutable,inArgCount), "bad alignment in Brig::BrigDirectiveExecutable");
static_assert(offsetof(Brig::BrigDirectiveExecutable, inArgCount)+sizeof(((Brig::BrigDirectiveExecutable*)0)->inArgCount) == offsetof(Brig::BrigDirectiveExecutable,firstInArg), "bad alignment in Brig::BrigDirectiveExecutable");
static_assert(offsetof(Brig::BrigDirectiveExecutable, firstInArg)+sizeof(((Brig::BrigDirectiveExecutable*)0)->firstInArg) == offsetof(Brig::BrigDirectiveExecutable,firstCodeBlockEntry), "bad alignment in Brig::BrigDirectiveExecutable");
static_assert(offsetof(Brig::BrigDirectiveExecutable, firstCodeBlockEntry)+sizeof(((Brig::BrigDirectiveExecutable*)0)->firstCodeBlockEntry) == offsetof(Brig::BrigDirectiveExecutable,nextModuleEntry), "bad alignment in Brig::BrigDirectiveExecutable");
static_assert(offsetof(Brig::BrigDirectiveExecutable, nextModuleEntry)+sizeof(((Brig::BrigDirectiveExecutable*)0)->nextModuleEntry) == offsetof(Brig::BrigDirectiveExecutable,codeBlockEntryCount), "bad alignment in Brig::BrigDirectiveExecutable");
static_assert(offsetof(Brig::BrigDirectiveExecutable, codeBlockEntryCount)+sizeof(((Brig::BrigDirectiveExecutable*)0)->codeBlockEntryCount) == offsetof(Brig::BrigDirectiveExecutable,modifier), "bad alignment in Brig::BrigDirectiveExecutable");
static_assert(offsetof(Brig::BrigDirectiveExecutable, modifier)+sizeof(((Brig::BrigDirectiveExecutable*)0)->modifier) == offsetof(Brig::BrigDirectiveExecutable,linkage), "bad alignment in Brig::BrigDirectiveExecutable");
static_assert(offsetof(Brig::BrigDirectiveExecutable, linkage)+sizeof(((Brig::BrigDirectiveExecutable*)0)->linkage) == offsetof(Brig::BrigDirectiveExecutable,reserved), "bad alignment in Brig::BrigDirectiveExecutable");
static_assert(offsetof(Brig::BrigDirectiveExecutable, reserved)+sizeof(((Brig::BrigDirectiveExecutable*)0)->reserved) == sizeof(Brig::BrigDirectiveExecutable), "bad alignment in Brig::BrigDirectiveExecutable");





static_assert(offsetof(Brig::BrigDirectiveExtension, base) == 0, "bad alignment in Brig::BrigDirectiveExtension");
static_assert(offsetof(Brig::BrigDirectiveExtension, name)+sizeof(((Brig::BrigDirectiveExtension*)0)->name) == sizeof(Brig::BrigDirectiveExtension), "bad alignment in Brig::BrigDirectiveExtension");

static_assert(offsetof(Brig::BrigDirectiveFbarrier, base) == 0, "bad alignment in Brig::BrigDirectiveFbarrier");
static_assert(offsetof(Brig::BrigDirectiveFbarrier, name)+sizeof(((Brig::BrigDirectiveFbarrier*)0)->name) == offsetof(Brig::BrigDirectiveFbarrier,modifier), "bad alignment in Brig::BrigDirectiveFbarrier");
static_assert(offsetof(Brig::BrigDirectiveFbarrier, modifier)+sizeof(((Brig::BrigDirectiveFbarrier*)0)->modifier) == offsetof(Brig::BrigDirectiveFbarrier,linkage), "bad alignment in Brig::BrigDirectiveFbarrier");
static_assert(offsetof(Brig::BrigDirectiveFbarrier, linkage)+sizeof(((Brig::BrigDirectiveFbarrier*)0)->linkage) == offsetof(Brig::BrigDirectiveFbarrier,reserved), "bad alignment in Brig::BrigDirectiveFbarrier");
static_assert(offsetof(Brig::BrigDirectiveFbarrier, reserved)+sizeof(((Brig::BrigDirectiveFbarrier*)0)->reserved) == sizeof(Brig::BrigDirectiveFbarrier), "bad alignment in Brig::BrigDirectiveFbarrier");

static_assert(offsetof(Brig::BrigDirectiveLabel, base) == 0, "bad alignment in Brig::BrigDirectiveLabel");
static_assert(offsetof(Brig::BrigDirectiveLabel, name)+sizeof(((Brig::BrigDirectiveLabel*)0)->name) == sizeof(Brig::BrigDirectiveLabel), "bad alignment in Brig::BrigDirectiveLabel");

static_assert(offsetof(Brig::BrigDirectiveLoc, base) == 0, "bad alignment in Brig::BrigDirectiveLoc");
static_assert(offsetof(Brig::BrigDirectiveLoc, filename)+sizeof(((Brig::BrigDirectiveLoc*)0)->filename) == offsetof(Brig::BrigDirectiveLoc,line), "bad alignment in Brig::BrigDirectiveLoc");
static_assert(offsetof(Brig::BrigDirectiveLoc, line)+sizeof(((Brig::BrigDirectiveLoc*)0)->line) == offsetof(Brig::BrigDirectiveLoc,column), "bad alignment in Brig::BrigDirectiveLoc");
static_assert(offsetof(Brig::BrigDirectiveLoc, column)+sizeof(((Brig::BrigDirectiveLoc*)0)->column) == sizeof(Brig::BrigDirectiveLoc), "bad alignment in Brig::BrigDirectiveLoc");

static_assert(offsetof(Brig::BrigDirectiveNone, base) == 0, "bad alignment in Brig::BrigDirectiveNone");
static_assert(offsetof(Brig::BrigDirectiveNone, base)+sizeof(((Brig::BrigDirectiveNone*)0)->base) == sizeof(Brig::BrigDirectiveNone), "bad alignment in Brig::BrigDirectiveNone");

static_assert(offsetof(Brig::BrigDirectivePragma, base) == 0, "bad alignment in Brig::BrigDirectivePragma");
static_assert(offsetof(Brig::BrigDirectivePragma, operands)+sizeof(((Brig::BrigDirectivePragma*)0)->operands) == sizeof(Brig::BrigDirectivePragma), "bad alignment in Brig::BrigDirectivePragma");

static_assert(offsetof(Brig::BrigDirectiveVariable, base) == 0, "bad alignment in Brig::BrigDirectiveVariable");
static_assert(offsetof(Brig::BrigDirectiveVariable, name)+sizeof(((Brig::BrigDirectiveVariable*)0)->name) == offsetof(Brig::BrigDirectiveVariable,init), "bad alignment in Brig::BrigDirectiveVariable");
static_assert(offsetof(Brig::BrigDirectiveVariable, init)+sizeof(((Brig::BrigDirectiveVariable*)0)->init) == offsetof(Brig::BrigDirectiveVariable,type), "bad alignment in Brig::BrigDirectiveVariable");
static_assert(offsetof(Brig::BrigDirectiveVariable, type)+sizeof(((Brig::BrigDirectiveVariable*)0)->type) == offsetof(Brig::BrigDirectiveVariable,segment), "bad alignment in Brig::BrigDirectiveVariable");
static_assert(offsetof(Brig::BrigDirectiveVariable, segment)+sizeof(((Brig::BrigDirectiveVariable*)0)->segment) == offsetof(Brig::BrigDirectiveVariable,align), "bad alignment in Brig::BrigDirectiveVariable");
static_assert(offsetof(Brig::BrigDirectiveVariable, align)+sizeof(((Brig::BrigDirectiveVariable*)0)->align) == offsetof(Brig::BrigDirectiveVariable,dim), "bad alignment in Brig::BrigDirectiveVariable");
static_assert(offsetof(Brig::BrigDirectiveVariable, dim)+sizeof(((Brig::BrigDirectiveVariable*)0)->dim) == offsetof(Brig::BrigDirectiveVariable,modifier), "bad alignment in Brig::BrigDirectiveVariable");
static_assert(offsetof(Brig::BrigDirectiveVariable, modifier)+sizeof(((Brig::BrigDirectiveVariable*)0)->modifier) == offsetof(Brig::BrigDirectiveVariable,linkage), "bad alignment in Brig::BrigDirectiveVariable");
static_assert(offsetof(Brig::BrigDirectiveVariable, linkage)+sizeof(((Brig::BrigDirectiveVariable*)0)->linkage) == offsetof(Brig::BrigDirectiveVariable,allocation), "bad alignment in Brig::BrigDirectiveVariable");
static_assert(offsetof(Brig::BrigDirectiveVariable, allocation)+sizeof(((Brig::BrigDirectiveVariable*)0)->allocation) == offsetof(Brig::BrigDirectiveVariable,reserved), "bad alignment in Brig::BrigDirectiveVariable");
static_assert(offsetof(Brig::BrigDirectiveVariable, reserved)+sizeof(((Brig::BrigDirectiveVariable*)0)->reserved) == sizeof(Brig::BrigDirectiveVariable), "bad alignment in Brig::BrigDirectiveVariable");

static_assert(offsetof(Brig::BrigDirectiveVersion, base) == 0, "bad alignment in Brig::BrigDirectiveVersion");
static_assert(offsetof(Brig::BrigDirectiveVersion, hsailMajor)+sizeof(((Brig::BrigDirectiveVersion*)0)->hsailMajor) == offsetof(Brig::BrigDirectiveVersion,hsailMinor), "bad alignment in Brig::BrigDirectiveVersion");
static_assert(offsetof(Brig::BrigDirectiveVersion, hsailMinor)+sizeof(((Brig::BrigDirectiveVersion*)0)->hsailMinor) == offsetof(Brig::BrigDirectiveVersion,brigMajor), "bad alignment in Brig::BrigDirectiveVersion");
static_assert(offsetof(Brig::BrigDirectiveVersion, brigMajor)+sizeof(((Brig::BrigDirectiveVersion*)0)->brigMajor) == offsetof(Brig::BrigDirectiveVersion,brigMinor), "bad alignment in Brig::BrigDirectiveVersion");
static_assert(offsetof(Brig::BrigDirectiveVersion, brigMinor)+sizeof(((Brig::BrigDirectiveVersion*)0)->brigMinor) == offsetof(Brig::BrigDirectiveVersion,profile), "bad alignment in Brig::BrigDirectiveVersion");
static_assert(offsetof(Brig::BrigDirectiveVersion, profile)+sizeof(((Brig::BrigDirectiveVersion*)0)->profile) == offsetof(Brig::BrigDirectiveVersion,machineModel), "bad alignment in Brig::BrigDirectiveVersion");
static_assert(offsetof(Brig::BrigDirectiveVersion, machineModel)+sizeof(((Brig::BrigDirectiveVersion*)0)->machineModel) == offsetof(Brig::BrigDirectiveVersion,reserved), "bad alignment in Brig::BrigDirectiveVersion");
static_assert(offsetof(Brig::BrigDirectiveVersion, reserved)+sizeof(((Brig::BrigDirectiveVersion*)0)->reserved) == sizeof(Brig::BrigDirectiveVersion), "bad alignment in Brig::BrigDirectiveVersion");

static_assert(offsetof(Brig::BrigInstBase, base) == 0, "bad alignment in Brig::BrigInstBase");
static_assert(offsetof(Brig::BrigInstBase, opcode)+sizeof(((Brig::BrigInstBase*)0)->opcode) == offsetof(Brig::BrigInstBase,type), "bad alignment in Brig::BrigInstBase");
static_assert(offsetof(Brig::BrigInstBase, type)+sizeof(((Brig::BrigInstBase*)0)->type) == offsetof(Brig::BrigInstBase,operands), "bad alignment in Brig::BrigInstBase");
static_assert(offsetof(Brig::BrigInstBase, operands)+sizeof(((Brig::BrigInstBase*)0)->operands) == sizeof(Brig::BrigInstBase), "bad alignment in Brig::BrigInstBase");

static_assert(offsetof(Brig::BrigInstAddr, base) == 0, "bad alignment in Brig::BrigInstAddr");
static_assert(offsetof(Brig::BrigInstAddr, segment)+sizeof(((Brig::BrigInstAddr*)0)->segment) == offsetof(Brig::BrigInstAddr,reserved), "bad alignment in Brig::BrigInstAddr");
static_assert(offsetof(Brig::BrigInstAddr, reserved)+sizeof(((Brig::BrigInstAddr*)0)->reserved) == sizeof(Brig::BrigInstAddr), "bad alignment in Brig::BrigInstAddr");

static_assert(offsetof(Brig::BrigInstAtomic, base) == 0, "bad alignment in Brig::BrigInstAtomic");
static_assert(offsetof(Brig::BrigInstAtomic, segment)+sizeof(((Brig::BrigInstAtomic*)0)->segment) == offsetof(Brig::BrigInstAtomic,memoryOrder), "bad alignment in Brig::BrigInstAtomic");
static_assert(offsetof(Brig::BrigInstAtomic, memoryOrder)+sizeof(((Brig::BrigInstAtomic*)0)->memoryOrder) == offsetof(Brig::BrigInstAtomic,memoryScope), "bad alignment in Brig::BrigInstAtomic");
static_assert(offsetof(Brig::BrigInstAtomic, memoryScope)+sizeof(((Brig::BrigInstAtomic*)0)->memoryScope) == offsetof(Brig::BrigInstAtomic,atomicOperation), "bad alignment in Brig::BrigInstAtomic");
static_assert(offsetof(Brig::BrigInstAtomic, atomicOperation)+sizeof(((Brig::BrigInstAtomic*)0)->atomicOperation) == offsetof(Brig::BrigInstAtomic,equivClass), "bad alignment in Brig::BrigInstAtomic");
static_assert(offsetof(Brig::BrigInstAtomic, equivClass)+sizeof(((Brig::BrigInstAtomic*)0)->equivClass) == offsetof(Brig::BrigInstAtomic,reserved), "bad alignment in Brig::BrigInstAtomic");
static_assert(offsetof(Brig::BrigInstAtomic, reserved)+sizeof(((Brig::BrigInstAtomic*)0)->reserved) == sizeof(Brig::BrigInstAtomic), "bad alignment in Brig::BrigInstAtomic");

static_assert(offsetof(Brig::BrigInstBasic, base) == 0, "bad alignment in Brig::BrigInstBasic");
static_assert(offsetof(Brig::BrigInstBasic, base)+sizeof(((Brig::BrigInstBasic*)0)->base) == sizeof(Brig::BrigInstBasic), "bad alignment in Brig::BrigInstBasic");

static_assert(offsetof(Brig::BrigInstBr, base) == 0, "bad alignment in Brig::BrigInstBr");
static_assert(offsetof(Brig::BrigInstBr, width)+sizeof(((Brig::BrigInstBr*)0)->width) == offsetof(Brig::BrigInstBr,reserved), "bad alignment in Brig::BrigInstBr");
static_assert(offsetof(Brig::BrigInstBr, reserved)+sizeof(((Brig::BrigInstBr*)0)->reserved) == sizeof(Brig::BrigInstBr), "bad alignment in Brig::BrigInstBr");

static_assert(offsetof(Brig::BrigInstCmp, base) == 0, "bad alignment in Brig::BrigInstCmp");
static_assert(offsetof(Brig::BrigInstCmp, sourceType)+sizeof(((Brig::BrigInstCmp*)0)->sourceType) == offsetof(Brig::BrigInstCmp,modifier), "bad alignment in Brig::BrigInstCmp");
static_assert(offsetof(Brig::BrigInstCmp, modifier)+sizeof(((Brig::BrigInstCmp*)0)->modifier) == offsetof(Brig::BrigInstCmp,compare), "bad alignment in Brig::BrigInstCmp");
static_assert(offsetof(Brig::BrigInstCmp, compare)+sizeof(((Brig::BrigInstCmp*)0)->compare) == offsetof(Brig::BrigInstCmp,pack), "bad alignment in Brig::BrigInstCmp");
static_assert(offsetof(Brig::BrigInstCmp, pack)+sizeof(((Brig::BrigInstCmp*)0)->pack) == offsetof(Brig::BrigInstCmp,reserved), "bad alignment in Brig::BrigInstCmp");
static_assert(offsetof(Brig::BrigInstCmp, reserved)+sizeof(((Brig::BrigInstCmp*)0)->reserved) == sizeof(Brig::BrigInstCmp), "bad alignment in Brig::BrigInstCmp");

static_assert(offsetof(Brig::BrigInstCvt, base) == 0, "bad alignment in Brig::BrigInstCvt");
static_assert(offsetof(Brig::BrigInstCvt, sourceType)+sizeof(((Brig::BrigInstCvt*)0)->sourceType) == offsetof(Brig::BrigInstCvt,modifier), "bad alignment in Brig::BrigInstCvt");
static_assert(offsetof(Brig::BrigInstCvt, modifier)+sizeof(((Brig::BrigInstCvt*)0)->modifier) == sizeof(Brig::BrigInstCvt), "bad alignment in Brig::BrigInstCvt");

static_assert(offsetof(Brig::BrigInstImage, base) == 0, "bad alignment in Brig::BrigInstImage");
static_assert(offsetof(Brig::BrigInstImage, imageType)+sizeof(((Brig::BrigInstImage*)0)->imageType) == offsetof(Brig::BrigInstImage,coordType), "bad alignment in Brig::BrigInstImage");
static_assert(offsetof(Brig::BrigInstImage, coordType)+sizeof(((Brig::BrigInstImage*)0)->coordType) == offsetof(Brig::BrigInstImage,geometry), "bad alignment in Brig::BrigInstImage");
static_assert(offsetof(Brig::BrigInstImage, geometry)+sizeof(((Brig::BrigInstImage*)0)->geometry) == offsetof(Brig::BrigInstImage,equivClass), "bad alignment in Brig::BrigInstImage");
static_assert(offsetof(Brig::BrigInstImage, equivClass)+sizeof(((Brig::BrigInstImage*)0)->equivClass) == offsetof(Brig::BrigInstImage,reserved), "bad alignment in Brig::BrigInstImage");
static_assert(offsetof(Brig::BrigInstImage, reserved)+sizeof(((Brig::BrigInstImage*)0)->reserved) == sizeof(Brig::BrigInstImage), "bad alignment in Brig::BrigInstImage");

static_assert(offsetof(Brig::BrigInstLane, base) == 0, "bad alignment in Brig::BrigInstLane");
static_assert(offsetof(Brig::BrigInstLane, sourceType)+sizeof(((Brig::BrigInstLane*)0)->sourceType) == offsetof(Brig::BrigInstLane,width), "bad alignment in Brig::BrigInstLane");
static_assert(offsetof(Brig::BrigInstLane, width)+sizeof(((Brig::BrigInstLane*)0)->width) == offsetof(Brig::BrigInstLane,reserved), "bad alignment in Brig::BrigInstLane");
static_assert(offsetof(Brig::BrigInstLane, reserved)+sizeof(((Brig::BrigInstLane*)0)->reserved) == sizeof(Brig::BrigInstLane), "bad alignment in Brig::BrigInstLane");

static_assert(offsetof(Brig::BrigInstMem, base) == 0, "bad alignment in Brig::BrigInstMem");
static_assert(offsetof(Brig::BrigInstMem, segment)+sizeof(((Brig::BrigInstMem*)0)->segment) == offsetof(Brig::BrigInstMem,align), "bad alignment in Brig::BrigInstMem");
static_assert(offsetof(Brig::BrigInstMem, align)+sizeof(((Brig::BrigInstMem*)0)->align) == offsetof(Brig::BrigInstMem,equivClass), "bad alignment in Brig::BrigInstMem");
static_assert(offsetof(Brig::BrigInstMem, equivClass)+sizeof(((Brig::BrigInstMem*)0)->equivClass) == offsetof(Brig::BrigInstMem,width), "bad alignment in Brig::BrigInstMem");
static_assert(offsetof(Brig::BrigInstMem, width)+sizeof(((Brig::BrigInstMem*)0)->width) == offsetof(Brig::BrigInstMem,modifier), "bad alignment in Brig::BrigInstMem");
static_assert(offsetof(Brig::BrigInstMem, modifier)+sizeof(((Brig::BrigInstMem*)0)->modifier) == offsetof(Brig::BrigInstMem,reserved), "bad alignment in Brig::BrigInstMem");
static_assert(offsetof(Brig::BrigInstMem, reserved)+sizeof(((Brig::BrigInstMem*)0)->reserved) == sizeof(Brig::BrigInstMem), "bad alignment in Brig::BrigInstMem");

static_assert(offsetof(Brig::BrigInstMemFence, base) == 0, "bad alignment in Brig::BrigInstMemFence");
static_assert(offsetof(Brig::BrigInstMemFence, memoryOrder)+sizeof(((Brig::BrigInstMemFence*)0)->memoryOrder) == offsetof(Brig::BrigInstMemFence,globalSegmentMemoryScope), "bad alignment in Brig::BrigInstMemFence");
static_assert(offsetof(Brig::BrigInstMemFence, globalSegmentMemoryScope)+sizeof(((Brig::BrigInstMemFence*)0)->globalSegmentMemoryScope) == offsetof(Brig::BrigInstMemFence,groupSegmentMemoryScope), "bad alignment in Brig::BrigInstMemFence");
static_assert(offsetof(Brig::BrigInstMemFence, groupSegmentMemoryScope)+sizeof(((Brig::BrigInstMemFence*)0)->groupSegmentMemoryScope) == offsetof(Brig::BrigInstMemFence,imageSegmentMemoryScope), "bad alignment in Brig::BrigInstMemFence");
static_assert(offsetof(Brig::BrigInstMemFence, imageSegmentMemoryScope)+sizeof(((Brig::BrigInstMemFence*)0)->imageSegmentMemoryScope) == sizeof(Brig::BrigInstMemFence), "bad alignment in Brig::BrigInstMemFence");

static_assert(offsetof(Brig::BrigInstMod, base) == 0, "bad alignment in Brig::BrigInstMod");
static_assert(offsetof(Brig::BrigInstMod, modifier)+sizeof(((Brig::BrigInstMod*)0)->modifier) == offsetof(Brig::BrigInstMod,pack), "bad alignment in Brig::BrigInstMod");
static_assert(offsetof(Brig::BrigInstMod, pack)+sizeof(((Brig::BrigInstMod*)0)->pack) == offsetof(Brig::BrigInstMod,reserved), "bad alignment in Brig::BrigInstMod");
static_assert(offsetof(Brig::BrigInstMod, reserved)+sizeof(((Brig::BrigInstMod*)0)->reserved) == sizeof(Brig::BrigInstMod), "bad alignment in Brig::BrigInstMod");

static_assert(offsetof(Brig::BrigInstQueryImage, base) == 0, "bad alignment in Brig::BrigInstQueryImage");
static_assert(offsetof(Brig::BrigInstQueryImage, imageType)+sizeof(((Brig::BrigInstQueryImage*)0)->imageType) == offsetof(Brig::BrigInstQueryImage,geometry), "bad alignment in Brig::BrigInstQueryImage");
static_assert(offsetof(Brig::BrigInstQueryImage, geometry)+sizeof(((Brig::BrigInstQueryImage*)0)->geometry) == offsetof(Brig::BrigInstQueryImage,imageQuery), "bad alignment in Brig::BrigInstQueryImage");
static_assert(offsetof(Brig::BrigInstQueryImage, imageQuery)+sizeof(((Brig::BrigInstQueryImage*)0)->imageQuery) == sizeof(Brig::BrigInstQueryImage), "bad alignment in Brig::BrigInstQueryImage");

static_assert(offsetof(Brig::BrigInstQuerySampler, base) == 0, "bad alignment in Brig::BrigInstQuerySampler");
static_assert(offsetof(Brig::BrigInstQuerySampler, samplerQuery)+sizeof(((Brig::BrigInstQuerySampler*)0)->samplerQuery) == offsetof(Brig::BrigInstQuerySampler,reserved), "bad alignment in Brig::BrigInstQuerySampler");
static_assert(offsetof(Brig::BrigInstQuerySampler, reserved)+sizeof(((Brig::BrigInstQuerySampler*)0)->reserved) == sizeof(Brig::BrigInstQuerySampler), "bad alignment in Brig::BrigInstQuerySampler");

static_assert(offsetof(Brig::BrigInstQueue, base) == 0, "bad alignment in Brig::BrigInstQueue");
static_assert(offsetof(Brig::BrigInstQueue, segment)+sizeof(((Brig::BrigInstQueue*)0)->segment) == offsetof(Brig::BrigInstQueue,memoryOrder), "bad alignment in Brig::BrigInstQueue");
static_assert(offsetof(Brig::BrigInstQueue, memoryOrder)+sizeof(((Brig::BrigInstQueue*)0)->memoryOrder) == offsetof(Brig::BrigInstQueue,reserved), "bad alignment in Brig::BrigInstQueue");
static_assert(offsetof(Brig::BrigInstQueue, reserved)+sizeof(((Brig::BrigInstQueue*)0)->reserved) == sizeof(Brig::BrigInstQueue), "bad alignment in Brig::BrigInstQueue");

static_assert(offsetof(Brig::BrigInstSeg, base) == 0, "bad alignment in Brig::BrigInstSeg");
static_assert(offsetof(Brig::BrigInstSeg, segment)+sizeof(((Brig::BrigInstSeg*)0)->segment) == offsetof(Brig::BrigInstSeg,reserved), "bad alignment in Brig::BrigInstSeg");
static_assert(offsetof(Brig::BrigInstSeg, reserved)+sizeof(((Brig::BrigInstSeg*)0)->reserved) == sizeof(Brig::BrigInstSeg), "bad alignment in Brig::BrigInstSeg");

static_assert(offsetof(Brig::BrigInstSegCvt, base) == 0, "bad alignment in Brig::BrigInstSegCvt");
static_assert(offsetof(Brig::BrigInstSegCvt, sourceType)+sizeof(((Brig::BrigInstSegCvt*)0)->sourceType) == offsetof(Brig::BrigInstSegCvt,segment), "bad alignment in Brig::BrigInstSegCvt");
static_assert(offsetof(Brig::BrigInstSegCvt, segment)+sizeof(((Brig::BrigInstSegCvt*)0)->segment) == offsetof(Brig::BrigInstSegCvt,modifier), "bad alignment in Brig::BrigInstSegCvt");
static_assert(offsetof(Brig::BrigInstSegCvt, modifier)+sizeof(((Brig::BrigInstSegCvt*)0)->modifier) == sizeof(Brig::BrigInstSegCvt), "bad alignment in Brig::BrigInstSegCvt");

static_assert(offsetof(Brig::BrigInstSignal, base) == 0, "bad alignment in Brig::BrigInstSignal");
static_assert(offsetof(Brig::BrigInstSignal, signalType)+sizeof(((Brig::BrigInstSignal*)0)->signalType) == offsetof(Brig::BrigInstSignal,memoryOrder), "bad alignment in Brig::BrigInstSignal");
static_assert(offsetof(Brig::BrigInstSignal, memoryOrder)+sizeof(((Brig::BrigInstSignal*)0)->memoryOrder) == offsetof(Brig::BrigInstSignal,signalOperation), "bad alignment in Brig::BrigInstSignal");
static_assert(offsetof(Brig::BrigInstSignal, signalOperation)+sizeof(((Brig::BrigInstSignal*)0)->signalOperation) == sizeof(Brig::BrigInstSignal), "bad alignment in Brig::BrigInstSignal");

static_assert(offsetof(Brig::BrigInstSourceType, base) == 0, "bad alignment in Brig::BrigInstSourceType");
static_assert(offsetof(Brig::BrigInstSourceType, sourceType)+sizeof(((Brig::BrigInstSourceType*)0)->sourceType) == offsetof(Brig::BrigInstSourceType,reserved), "bad alignment in Brig::BrigInstSourceType");
static_assert(offsetof(Brig::BrigInstSourceType, reserved)+sizeof(((Brig::BrigInstSourceType*)0)->reserved) == sizeof(Brig::BrigInstSourceType), "bad alignment in Brig::BrigInstSourceType");

static_assert(offsetof(Brig::BrigExecutableModifier, allBits) == 0, "bad alignment in Brig::BrigExecutableModifier");
static_assert(offsetof(Brig::BrigExecutableModifier, allBits)+sizeof(((Brig::BrigExecutableModifier*)0)->allBits) == sizeof(Brig::BrigExecutableModifier), "bad alignment in Brig::BrigExecutableModifier");

static_assert(offsetof(Brig::BrigMemoryModifier, allBits) == 0, "bad alignment in Brig::BrigMemoryModifier");
static_assert(offsetof(Brig::BrigMemoryModifier, allBits)+sizeof(((Brig::BrigMemoryModifier*)0)->allBits) == sizeof(Brig::BrigMemoryModifier), "bad alignment in Brig::BrigMemoryModifier");


static_assert(offsetof(Brig::BrigOperandAddress, base) == 0, "bad alignment in Brig::BrigOperandAddress");
static_assert(offsetof(Brig::BrigOperandAddress, symbol)+sizeof(((Brig::BrigOperandAddress*)0)->symbol) == offsetof(Brig::BrigOperandAddress,reg), "bad alignment in Brig::BrigOperandAddress");
static_assert(offsetof(Brig::BrigOperandAddress, reg)+sizeof(((Brig::BrigOperandAddress*)0)->reg) == offsetof(Brig::BrigOperandAddress,offset), "bad alignment in Brig::BrigOperandAddress");
static_assert(offsetof(Brig::BrigOperandAddress, offset)+sizeof(((Brig::BrigOperandAddress*)0)->offset) == sizeof(Brig::BrigOperandAddress), "bad alignment in Brig::BrigOperandAddress");

static_assert(offsetof(Brig::BrigOperandCodeList, base) == 0, "bad alignment in Brig::BrigOperandCodeList");
static_assert(offsetof(Brig::BrigOperandCodeList, elements)+sizeof(((Brig::BrigOperandCodeList*)0)->elements) == sizeof(Brig::BrigOperandCodeList), "bad alignment in Brig::BrigOperandCodeList");

static_assert(offsetof(Brig::BrigOperandCodeRef, base) == 0, "bad alignment in Brig::BrigOperandCodeRef");
static_assert(offsetof(Brig::BrigOperandCodeRef, ref)+sizeof(((Brig::BrigOperandCodeRef*)0)->ref) == sizeof(Brig::BrigOperandCodeRef), "bad alignment in Brig::BrigOperandCodeRef");

static_assert(offsetof(Brig::BrigOperandData, base) == 0, "bad alignment in Brig::BrigOperandData");
static_assert(offsetof(Brig::BrigOperandData, data)+sizeof(((Brig::BrigOperandData*)0)->data) == sizeof(Brig::BrigOperandData), "bad alignment in Brig::BrigOperandData");

static_assert(offsetof(Brig::BrigOperandImageProperties, base) == 0, "bad alignment in Brig::BrigOperandImageProperties");
static_assert(offsetof(Brig::BrigOperandImageProperties, width)+sizeof(((Brig::BrigOperandImageProperties*)0)->width) == offsetof(Brig::BrigOperandImageProperties,height), "bad alignment in Brig::BrigOperandImageProperties");
static_assert(offsetof(Brig::BrigOperandImageProperties, height)+sizeof(((Brig::BrigOperandImageProperties*)0)->height) == offsetof(Brig::BrigOperandImageProperties,depth), "bad alignment in Brig::BrigOperandImageProperties");
static_assert(offsetof(Brig::BrigOperandImageProperties, depth)+sizeof(((Brig::BrigOperandImageProperties*)0)->depth) == offsetof(Brig::BrigOperandImageProperties,array), "bad alignment in Brig::BrigOperandImageProperties");
static_assert(offsetof(Brig::BrigOperandImageProperties, array)+sizeof(((Brig::BrigOperandImageProperties*)0)->array) == offsetof(Brig::BrigOperandImageProperties,geometry), "bad alignment in Brig::BrigOperandImageProperties");
static_assert(offsetof(Brig::BrigOperandImageProperties, geometry)+sizeof(((Brig::BrigOperandImageProperties*)0)->geometry) == offsetof(Brig::BrigOperandImageProperties,channelOrder), "bad alignment in Brig::BrigOperandImageProperties");
static_assert(offsetof(Brig::BrigOperandImageProperties, channelOrder)+sizeof(((Brig::BrigOperandImageProperties*)0)->channelOrder) == offsetof(Brig::BrigOperandImageProperties,channelType), "bad alignment in Brig::BrigOperandImageProperties");
static_assert(offsetof(Brig::BrigOperandImageProperties, channelType)+sizeof(((Brig::BrigOperandImageProperties*)0)->channelType) == offsetof(Brig::BrigOperandImageProperties,reserved), "bad alignment in Brig::BrigOperandImageProperties");
static_assert(offsetof(Brig::BrigOperandImageProperties, reserved)+sizeof(((Brig::BrigOperandImageProperties*)0)->reserved) == sizeof(Brig::BrigOperandImageProperties), "bad alignment in Brig::BrigOperandImageProperties");

static_assert(offsetof(Brig::BrigOperandOperandList, base) == 0, "bad alignment in Brig::BrigOperandOperandList");
static_assert(offsetof(Brig::BrigOperandOperandList, elements)+sizeof(((Brig::BrigOperandOperandList*)0)->elements) == sizeof(Brig::BrigOperandOperandList), "bad alignment in Brig::BrigOperandOperandList");

static_assert(offsetof(Brig::BrigOperandReg, base) == 0, "bad alignment in Brig::BrigOperandReg");
static_assert(offsetof(Brig::BrigOperandReg, regKind)+sizeof(((Brig::BrigOperandReg*)0)->regKind) == offsetof(Brig::BrigOperandReg,regNum), "bad alignment in Brig::BrigOperandReg");
static_assert(offsetof(Brig::BrigOperandReg, regNum)+sizeof(((Brig::BrigOperandReg*)0)->regNum) == sizeof(Brig::BrigOperandReg), "bad alignment in Brig::BrigOperandReg");

static_assert(offsetof(Brig::BrigOperandSamplerProperties, base) == 0, "bad alignment in Brig::BrigOperandSamplerProperties");
static_assert(offsetof(Brig::BrigOperandSamplerProperties, coord)+sizeof(((Brig::BrigOperandSamplerProperties*)0)->coord) == offsetof(Brig::BrigOperandSamplerProperties,filter), "bad alignment in Brig::BrigOperandSamplerProperties");
static_assert(offsetof(Brig::BrigOperandSamplerProperties, filter)+sizeof(((Brig::BrigOperandSamplerProperties*)0)->filter) == offsetof(Brig::BrigOperandSamplerProperties,addressing), "bad alignment in Brig::BrigOperandSamplerProperties");
static_assert(offsetof(Brig::BrigOperandSamplerProperties, addressing)+sizeof(((Brig::BrigOperandSamplerProperties*)0)->addressing) == offsetof(Brig::BrigOperandSamplerProperties,reserved), "bad alignment in Brig::BrigOperandSamplerProperties");
static_assert(offsetof(Brig::BrigOperandSamplerProperties, reserved)+sizeof(((Brig::BrigOperandSamplerProperties*)0)->reserved) == sizeof(Brig::BrigOperandSamplerProperties), "bad alignment in Brig::BrigOperandSamplerProperties");

static_assert(offsetof(Brig::BrigOperandString, base) == 0, "bad alignment in Brig::BrigOperandString");
static_assert(offsetof(Brig::BrigOperandString, string)+sizeof(((Brig::BrigOperandString*)0)->string) == sizeof(Brig::BrigOperandString), "bad alignment in Brig::BrigOperandString");

static_assert(offsetof(Brig::BrigOperandWavesize, base) == 0, "bad alignment in Brig::BrigOperandWavesize");
static_assert(offsetof(Brig::BrigOperandWavesize, base)+sizeof(((Brig::BrigOperandWavesize*)0)->base) == sizeof(Brig::BrigOperandWavesize), "bad alignment in Brig::BrigOperandWavesize");

static_assert(offsetof(Brig::BrigSegCvtModifier, allBits) == 0, "bad alignment in Brig::BrigSegCvtModifier");
static_assert(offsetof(Brig::BrigSegCvtModifier, allBits)+sizeof(((Brig::BrigSegCvtModifier*)0)->allBits) == sizeof(Brig::BrigSegCvtModifier), "bad alignment in Brig::BrigSegCvtModifier");

static_assert(offsetof(Brig::BrigUInt64, lo) == 0, "bad alignment in Brig::BrigUInt64");
static_assert(offsetof(Brig::BrigUInt64, hi)+sizeof(((Brig::BrigUInt64*)0)->hi) == sizeof(Brig::BrigUInt64), "bad alignment in Brig::BrigUInt64");

static_assert(offsetof(Brig::BrigVariableModifier, allBits) == 0, "bad alignment in Brig::BrigVariableModifier");
static_assert(offsetof(Brig::BrigVariableModifier, allBits)+sizeof(((Brig::BrigVariableModifier*)0)->allBits) == sizeof(Brig::BrigVariableModifier), "bad alignment in Brig::BrigVariableModifier");

