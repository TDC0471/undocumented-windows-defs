#pragma once
/* ------------------ */

#include <_MMPFN.h>
#include <_MMPTE.h>

//0x98 bytes (sizeof)
struct _MI_COMMON_PAGE_STATE
{
    struct _MMPFN* PageOfOnesPfn;                                           //0x0
    ULONGLONG PageOfOnes;                                                   //0x8
    struct _MMPFN* DummyPagePfn;                                            //0x10
    ULONGLONG DummyPage;                                                    //0x18
    ULONGLONG PageOfZeroes;                                                 //0x20
    VOID* ZeroMapping;                                                      //0x28
    VOID* OnesMapping;                                                      //0x30
    ULONGLONG BitmapGapFrames[4];                                           //0x38
    ULONGLONG PfnGapFrames[4];                                              //0x58
    ULONGLONG PageTableOfZeroes;                                            //0x78
    struct _MMPTE PdeOfZeroes;                                              //0x80
    ULONGLONG PageTableOfOnes;                                              //0x88
    struct _MMPTE PdeOfOnes;                                                //0x90
};
/* Used in */
// _MI_SYSTEM_INFORMATION

