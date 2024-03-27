#pragma once
/* ------------------ */

#include <_KGUARDED_MUTEX.h>
#include <_MMVIEW.h>
#include <_RTL_BITMAP.h>

//0x68 bytes (sizeof)
struct _MMSESSION
{
    struct _KGUARDED_MUTEX SystemSpaceViewLock;                             //0x0
    struct _KGUARDED_MUTEX* SystemSpaceViewLockPointer;                     //0x38
    CHAR* SystemSpaceViewStart;                                             //0x40
    struct _MMVIEW* SystemSpaceViewTable;                                   //0x48
    ULONG SystemSpaceHashSize;                                              //0x50
    ULONG SystemSpaceHashEntries;                                           //0x54
    ULONG SystemSpaceHashKey;                                               //0x58
    ULONG BitmapFailures;                                                   //0x5c
    struct _RTL_BITMAP* SystemSpaceBitMap;                                  //0x60
};
/* Used in */
// _MM_SESSION_SPACE

