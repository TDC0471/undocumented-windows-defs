#pragma once
/* ------------------ */

#include <_KGUARDED_MUTEX.h>
#include <_MMVIEW.h>

//0x58 bytes (sizeof)
struct _MMSESSION
{
    struct _KGUARDED_MUTEX SystemSpaceViewLock;                             //0x0
    struct _KGUARDED_MUTEX* SystemSpaceViewLockPointer;                     //0x38
    struct _MMVIEW* SystemSpaceViewTable;                                   //0x40
    ULONG SystemSpaceHashSize;                                              //0x48
    ULONG SystemSpaceHashEntries;                                           //0x4c
    ULONG SystemSpaceHashKey;                                               //0x50
    ULONG BitmapFailures;                                                   //0x54
};
/* Used in */
// _MM_SESSION_SPACE

