#pragma once
/* ------------------ */

#include <_DISPATCHER_HEADER.h>
#include <_RTL_BALANCED_NODE.h>
#include <_LIST_ENTRY.h>
#include <_KTIMER2.h>

//0x88 bytes (sizeof)
struct _KTIMER2
{
    struct _DISPATCHER_HEADER Header;                                       //0x0
    union
    {
        struct _RTL_BALANCED_NODE RbNodes[2];                               //0x18
        struct _LIST_ENTRY ListEntry;                                       //0x18
    };
    ULONGLONG DueTime[2];                                                   //0x48
    LONGLONG Period;                                                        //0x58
    VOID (*Callback)(struct _KTIMER2* arg1, VOID* arg2);                    //0x60
    VOID* CallbackContext;                                                  //0x68
    VOID (*DisableCallback)(VOID* arg1);                                    //0x70
    VOID* DisableContext;                                                   //0x78
    UCHAR AbsoluteSystemTime;                                               //0x80
    union
    {
        UCHAR TypeFlags;                                                    //0x81
        struct
        {
            UCHAR Unused:1;                                                 //0x81
            UCHAR IdleResilient:1;                                          //0x81
            UCHAR HighResolution:1;                                         //0x81
            UCHAR NoWake:1;                                                 //0x81
            UCHAR Unused1:4;                                                //0x81
        };
    };
    UCHAR CollectionIndex[2];                                               //0x82
};
/* Used in */
// _KTIMER2

