#pragma once
/* ------------------ */

#include <_VF_AVL_TREE_NODE_EX.h>
#include <_VF_TARGET_ALL_SHARED_EXPORT_THUNKS.h>
#include <_VF_TARGET_VERIFIED_DRIVER_DATA.h>

//0x20 bytes (sizeof)
struct _VF_TARGET_DRIVER
{
    struct _VF_AVL_TREE_NODE_EX TreeNode;                                   //0x0
    union
    {
        struct _VF_TARGET_ALL_SHARED_EXPORT_THUNKS AllSharedExportThunks;   //0xc
        struct
        {
            ULONG SnapSharedExportsFailed:1;                                //0xc
            ULONG Spare:31;                                                 //0xc
        } Flags;                                                            //0xc
    } u1;                                                                   //0xc
    struct _VF_TARGET_VERIFIED_DRIVER_DATA* VerifiedData;                   //0x1c
};
