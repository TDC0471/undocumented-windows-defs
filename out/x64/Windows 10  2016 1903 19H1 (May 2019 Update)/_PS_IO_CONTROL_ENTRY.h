#pragma once
/* ------------------ */

#include <_RTL_BALANCED_NODE.h>
#include <_LIST_ENTRY.h>
#include <_EX_RUNDOWN_REF.h>

//0x38 bytes (sizeof)
struct _PS_IO_CONTROL_ENTRY
{
    union
    {
        struct _RTL_BALANCED_NODE VolumeTreeNode;                           //0x0
        struct
        {
            struct _LIST_ENTRY FreeListEntry;                               //0x0
            ULONGLONG ReservedForParentValue;                               //0x10
        };
    };
    ULONGLONG VolumeKey;                                                    //0x18
    struct _EX_RUNDOWN_REF Rundown;                                         //0x20
    VOID* IoControl;                                                        //0x28
    VOID* VolumeIoAttribution;                                              //0x30
};
/* Used in */
// _EJOB

