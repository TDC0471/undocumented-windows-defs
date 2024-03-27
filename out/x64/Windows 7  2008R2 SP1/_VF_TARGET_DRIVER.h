#pragma once
/* ------------------ */

#include <_VF_AVL_TREE_NODE.h>
#include <_VF_TARGET_ALL_SHARED_EXPORT_THUNKS.h>
#include <_VF_TARGET_VERIFIED_DRIVER_DATA.h>

//0x30 bytes (sizeof)
struct _VF_TARGET_DRIVER
{
    struct _VF_AVL_TREE_NODE TreeNode;                                      //0x0
    union
    {
        struct _VF_TARGET_ALL_SHARED_EXPORT_THUNKS AllSharedExportThunks;   //0x10
        struct
        {
            ULONG SnapSharedExportsFailed:1;                                //0x10
            ULONG Spare:31;                                                 //0x10
        } Flags;                                                            //0x10
    } u1;                                                                   //0x10
    struct _VF_TARGET_VERIFIED_DRIVER_DATA* VerifiedData;                   //0x28
};
