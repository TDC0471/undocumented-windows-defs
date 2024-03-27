#pragma once
/* ------------------ */

#include <_FAST_MUTEX.h>
#include <_MMVIEW.h>
#include <_RTL_BITMAP.h>

//0x3c bytes (sizeof)
struct _MMSESSION
{
    struct _FAST_MUTEX SystemSpaceViewLock;                                 //0x0
    struct _FAST_MUTEX* SystemSpaceViewLockPointer;                         //0x20
    CHAR* SystemSpaceViewStart;                                             //0x24
    struct _MMVIEW* SystemSpaceViewTable;                                   //0x28
    ULONG SystemSpaceHashSize;                                              //0x2c
    ULONG SystemSpaceHashEntries;                                           //0x30
    ULONG SystemSpaceHashKey;                                               //0x34
    struct _RTL_BITMAP* SystemSpaceBitMap;                                  //0x38
};
/* Used in */
// _MM_SESSION_SPACE

