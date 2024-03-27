#pragma once
/* ------------------ */

#include <_MMPFN.h>

//0x40 bytes (sizeof)
struct _MI_COMMON_PAGE_STATE
{
    struct _MMPFN* PageOfOnesPfn;                                           //0x0
    ULONG PageOfOnes;                                                       //0x4
    struct _MMPFN* DummyPagePfn;                                            //0x8
    ULONG DummyPage;                                                        //0xc
    ULONG PageOfZeroes;                                                     //0x10
    VOID* ZeroMapping;                                                      //0x14
    VOID* OnesMapping;                                                      //0x18
    ULONGLONG ZeroCrc;                                                      //0x20
    ULONGLONG OnesCrc;                                                      //0x28
    ULONG BitmapGapFrames[2];                                               //0x30
    ULONG PfnGapFrames[2];                                                  //0x38
};
/* Used in */
// _MI_SYSTEM_INFORMATION

