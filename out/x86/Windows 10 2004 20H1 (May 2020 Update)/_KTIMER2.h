#pragma once
/* ------------------ */

#include <_DISPATCHER_HEADER.h>
#include <_RTL_BALANCED_NODE.h>
#include <_LIST_ENTRY.h>
#include <_KTIMER2.h>

//0x58 bytes (sizeof)
struct _KTIMER2
{
    struct _DISPATCHER_HEADER Header;                                       //0x0
    union
    {
        struct _RTL_BALANCED_NODE RbNodes[2];                               //0x10
        struct _LIST_ENTRY ListEntry;                                       //0x10
    };
    ULONGLONG DueTime[2];                                                   //0x28
    LONGLONG Period;                                                        //0x38
    VOID (*Callback)(struct _KTIMER2* arg1, VOID* arg2);                    //0x40
    VOID* CallbackContext;                                                  //0x44
    VOID (*DisableCallback)(VOID* arg1);                                    //0x48
    VOID* DisableContext;                                                   //0x4c
    UCHAR AbsoluteSystemTime;                                               //0x50
    union
    {
        UCHAR TypeFlags;                                                    //0x51
        struct
        {
            UCHAR Unused:1;                                                 //0x51
            UCHAR IdleResilient:1;                                          //0x51
            UCHAR HighResolution:1;                                         //0x51
            UCHAR NoWake:1;                                                 //0x51
            UCHAR PseudoHighRes:1;                                          //0x51
            UCHAR Unused1:3;                                                //0x51
        };
    };
    UCHAR CollectionIndex[2];                                               //0x52
};
/* Used in */
// _EX_WORK_QUEUE_MANAGER
// _KTIMER2
// _POP_THERMAL_ZONE
