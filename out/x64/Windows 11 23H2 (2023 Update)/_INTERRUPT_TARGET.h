#pragma once
/* ------------------ */

#include <_INTERRUPT_TARGET_TYPE.h>

//0x18 bytes (sizeof)
struct _INTERRUPT_TARGET
{
    enum _INTERRUPT_TARGET_TYPE Target;                                     //0x0
    union
    {
        ULONG PhysicalTarget;                                               //0x8
        ULONG LogicalFlatTarget;                                            //0x8
        ULONG RemapIndex;                                                   //0x8
        struct
        {
            ULONG ClusterId;                                                //0x8
            ULONG ClusterMask;                                              //0xc
        };
        struct
        {
            ULONG Low32;                                                    //0x8
            ULONG High32;                                                   //0xc
            ULONGLONG InterruptData;                                        //0x10
        } HypervisorTarget;                                                 //0x8
    };
};
/* Used in */
// _INTERRUPT_FUNCTION_TABLE
// _INTERRUPT_LINE_STATE

