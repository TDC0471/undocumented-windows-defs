#pragma once
/* ------------------ */

#include <_KGUARDED_MUTEX.h>
#include <_MMVIEW.h>

//0x38 bytes (sizeof)
struct _MMSESSION
{
    struct _KGUARDED_MUTEX SystemSpaceViewLock;                             //0x0
    struct _KGUARDED_MUTEX* SystemSpaceViewLockPointer;                     //0x20
    struct _MMVIEW* SystemSpaceViewTable;                                   //0x24
    ULONG SystemSpaceHashSize;                                              //0x28
    ULONG SystemSpaceHashEntries;                                           //0x2c
    ULONG SystemSpaceHashKey;                                               //0x30
    ULONG BitmapFailures;                                                   //0x34
};
/* Used in */
// _MM_SESSION_SPACE

