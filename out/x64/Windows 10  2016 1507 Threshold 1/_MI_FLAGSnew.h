#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
union _MI_FLAGS
{
    LONG EntireFlags;                                                       //0x0
    ULONG VerifierEnabled:1;                                                //0x0
    ULONG KernelVerifierEnabled:1;                                          //0x0
    ULONG LargePageKernel:1;                                                //0x0
    ULONG StopOn4d:1;                                                       //0x0
    ULONG InitializationPhase:2;                                            //0x0
    ULONG PageKernelStacks:1;                                               //0x0
    ULONG CheckZeroPages:1;                                                 //0x0
    ULONG ProcessorPrewalks:1;                                              //0x0
    ULONG ProcessorPostwalks:1;                                             //0x0
    ULONG CoverageBuild:1;                                                  //0x0
    ULONG AccessBitReplacementDisabled:1;                                   //0x0
    ULONG CheckExecute:1;                                                   //0x0
    ULONG ZeroNonCachedByConverting:1;                                      //0x0
    ULONG ZeroWriteCombinedByConverting:1;                                  //0x0
    ULONG ProtectedPagesEnabled:1;                                          //0x0
    ULONG StrongCodeGuarantees:2;                                           //0x0
    ULONG HardCodeGuarantees:1;                                             //0x0
    ULONG StrongPageIdentity:1;                                             //0x0
    ULONG SecureRelocations:1;                                              //0x0
};
