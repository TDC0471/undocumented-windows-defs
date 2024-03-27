#pragma once
/* ------------------ */

#include <_KGUARDED_MUTEX.h>
#include <_MMVIEW.h>
#include <_RTL_BITMAP.h>

//0x40 bytes (sizeof)
struct _MMSESSION
{
    struct _KGUARDED_MUTEX SystemSpaceViewLock;                             //0x0
    struct _KGUARDED_MUTEX* SystemSpaceViewLockPointer;                     //0x20
    CHAR* SystemSpaceViewStart;                                             //0x24
    struct _MMVIEW* SystemSpaceViewTable;                                   //0x28
    ULONG SystemSpaceHashSize;                                              //0x2c
    ULONG SystemSpaceHashEntries;                                           //0x30
    ULONG SystemSpaceHashKey;                                               //0x34
    ULONG BitmapFailures;                                                   //0x38
    struct _RTL_BITMAP* SystemSpaceBitMap;                                  //0x3c
};
/* Used in */
// _MM_SESSION_SPACE

