#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_EX_PUSH_LOCK.h>
#include <_ETHREAD.h>
#include <_KLDR_DATA_TABLE_ENTRY.h>
#include <_RTL_BITMAP_EX.h>
#include <_MI_DRIVER_VA.h>
#include <_MM_SYSTEM_PAGE_COUNTS.h>
#include <_RTL_AVL_TREE.h>
#include <_RTL_FUNCTION_OVERRIDE_CAPABILITIES.h>

//0x110 bytes (sizeof)
struct _MI_SYSTEM_IMAGE_STATE
{
    struct _LIST_ENTRY FixupList;                                           //0x0
    struct _EX_PUSH_LOCK LoadLock;                                          //0x10
    struct _ETHREAD* LoadLockOwner;                                         //0x18
    ULONG LoadLockCount;                                                    //0x20
    volatile LONG FixupLock;                                                //0x24
    struct _EX_PUSH_LOCK EncodeDecodeLock;                                  //0x28
    ULONG EncodeDecodeDepth;                                                //0x30
    UCHAR FirstLoadEver;                                                    //0x34
    UCHAR LargePageAll;                                                     //0x35
    UCHAR SystemImagesLoaded;                                               //0x36
    struct _LIST_ENTRY LargePageList;                                       //0x38
    struct _LIST_ENTRY StrongCodeLoadFailureList;                           //0x48
    struct _KLDR_DATA_TABLE_ENTRY* SystemBase[1];                           //0x58
    struct _RTL_BITMAP_EX BaseImageDiscardedBitmaps[1];                     //0x60
    struct _KLDR_DATA_TABLE_ENTRY* BeingDeleted;                            //0x70
    struct _EX_PUSH_LOCK MappingRangesPushLock;                             //0x78
    struct _MI_DRIVER_VA* MappingRanges[2];                                 //0x80
    struct _MM_SYSTEM_PAGE_COUNTS PageCounts;                               //0x90
    struct _EX_PUSH_LOCK CollidedLock;                                      //0xa0
    struct _RTL_AVL_TREE ImageTree;                                         //0xa8
    struct _KLDR_DATA_TABLE_ENTRY* LoadInProgress;                          //0xb0
    ULONGLONG ImportEntriesReplaced;                                        //0xb8
    struct _RTL_FUNCTION_OVERRIDE_CAPABILITIES FunctionOverrideCapabilities; //0xc0
};
/* Used in */
// _MI_SYSTEM_INFORMATION

