#pragma once
/* ------------------ */

#include <_RTL_BALANCED_NODE.h>
#include <_LIST_ENTRY.h>
#include <_EX_RUNDOWN_REF.h>

//0x1c bytes (sizeof)
struct _PS_IO_CONTROL_ENTRY
{
    union
    {
        struct _RTL_BALANCED_NODE VolumeTreeNode;                           //0x0
        struct
        {
            struct _LIST_ENTRY FreeListEntry;                               //0x0
            ULONG ReservedForParentValue;                                   //0x8
        };
    };
    ULONG VolumeKey;                                                        //0xc
    struct _EX_RUNDOWN_REF Rundown;                                         //0x10
    VOID* IoControl;                                                        //0x14
    VOID* VolumeIoAttribution;                                              //0x18
};
/* Used in */
// _EJOB

