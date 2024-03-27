#pragma once
/* ------------------ */

#include <_RTL_AVL_TREE.h>
#include <_EX_PUSH_LOCK.h>
#include <_MI_HOT_PATCH_PROCESS_CONTEXT.h>
#include <_KLDR_DATA_TABLE_ENTRY.h>

//0x60 bytes (sizeof)
struct _MI_HOT_PATCH_STATE
{
    struct _RTL_AVL_TREE UserSidPatchLists;                                 //0x0
    struct _RTL_AVL_TREE GlobalHotPatchList;                                //0x8
    struct _RTL_AVL_TREE PreviouslyRegisteredHotPatchList;                  //0x10
    struct _RTL_AVL_TREE SecureImageActivePatches;                          //0x18
    struct _EX_PUSH_LOCK HotPatchListLock;                                  //0x20
    struct _MI_HOT_PATCH_PROCESS_CONTEXT HotPatchProcessContext;            //0x28
    struct _KLDR_DATA_TABLE_ENTRY* InProgressPatchTableEntry;               //0x40
    struct _KLDR_DATA_TABLE_ENTRY* InProgressBaseTableEntry;                //0x48
    volatile CHAR ReadyForPatchOperations;                                  //0x50
    ULONG HotPatchReserveSize;                                              //0x54
    ULONG HotPatchingEnabled:1;                                             //0x58
    ULONG EnforcePatchSequenceNumbers:1;                                    //0x58
    ULONG HotPatchTestExecuted:1;                                           //0x58
    ULONG Spare:29;                                                         //0x58
};
/* Used in */
// _MI_SYSTEM_INFORMATION

