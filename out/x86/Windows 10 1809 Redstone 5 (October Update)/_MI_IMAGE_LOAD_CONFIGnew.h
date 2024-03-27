#pragma once
/* ------------------ */

#include <_RTL_RVA_LIST.h>
#include <_MI_RETPOLINE_RELOCATION_INFORMATION.h>

//0x10 bytes (sizeof)
struct _MI_IMAGE_LOAD_CONFIG
{
    ULONG Flags;                                                            //0x0
    ULONG CfgAlignmentBias;                                                 //0x4
    struct _RTL_RVA_LIST* RvaList;                                          //0x8
    struct _MI_RETPOLINE_RELOCATION_INFORMATION* RetpolineRelocations;      //0xc
};
