#pragma once
/* ------------------ */

#include <_RTL_AVL_TREE.h>
#include <_EX_PUSH_LOCK.h>
#include <_MI_HOT_PATCH_PROCESS_CONTEXT.h>

//0x48 bytes (sizeof)
struct _MI_HOT_PATCH_STATE
{
    ULONG UserHotPatchReserveSize;                                          //0x0
    struct _RTL_AVL_TREE UserSidPatchLists;                                 //0x8
    struct _RTL_AVL_TREE GlobalHotPatchList;                                //0x10
    struct _RTL_AVL_TREE SecureImageActivePatches;                          //0x18
    struct _EX_PUSH_LOCK HotPatchListLock;                                  //0x20
    struct _MI_HOT_PATCH_PROCESS_CONTEXT HotPatchProcessContext;            //0x28
    volatile CHAR ReadyForPatchOperations;                                  //0x40
    ULONG HotPatchingEnabled:1;                                             //0x44
    ULONG EnforcePatchSequenceNumbers:1;                                    //0x44
    ULONG Spare:30;                                                         //0x44
};
/* Used in */
// _MI_SYSTEM_INFORMATION

