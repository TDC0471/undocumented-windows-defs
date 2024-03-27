#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _MI_FLAGS
{
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
    ULONG CheckExecute:1;                                                   //0x0
    ULONG ProtectedPagesEnabled:1;                                          //0x0
    ULONG SecureRelocations:1;                                              //0x0
    ULONG StrongPageIdentity:1;                                             //0x0
    ULONG StrongCodeGuarantees:1;                                           //0x0
    ULONG HardCodeGuarantees:1;                                             //0x0
    ULONG ExecutePagePrivilegeRequired:1;                                   //0x0
    ULONG SecureKernelCfgEnabled:1;                                         //0x0
    ULONG FullHvci:1;                                                       //0x0
    ULONG BootDebuggerActive:1;                                             //0x0
    ULONG ExceptionHandlingReady:1;                                         //0x0
    ULONG ShadowStacksSupported:1;                                          //0x0
    ULONG AccessBitFenceRequired:1;                                         //0x0
    ULONG AccessBitReplacementCapability:2;                                 //0x0
    ULONG PfnDatabaseExists:1;                                              //0x0
    ULONG PfnDatabaseGapsFilled:1;                                          //0x0
    ULONG SystemPtesReady:1;                                                //0x0
    ULONG BootImageUnprivilegedPagesUnregistered:1;                         //0x0
    ULONG ImageProtectedSlabExecutableOnly:1;                               //0x0
    ULONG SpecialReadOnlyProtectedSlabPages:1;                              //0x0
    ULONG SlabAllocatorsReady:1;                                            //0x4
    ULONG KasanEnabled:1;                                                   //0x4
};
/* Used in */
// _MI_TRIAGE_DUMP_DATA

