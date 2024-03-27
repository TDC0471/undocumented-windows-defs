#pragma once
/* ------------------ */

#include <_ETW_NOTIFICATION_TYPE.h>
#include <_GUID.h>

//0x48 bytes (sizeof)
struct _ETWP_NOTIFICATION_HEADER
{
    enum _ETW_NOTIFICATION_TYPE NotificationType;                           //0x0
    ULONG NotificationSize;                                                 //0x4
    LONG RefCount;                                                          //0x8
    UCHAR ReplyRequested;                                                   //0xc
    union
    {
        ULONG ReplyIndex;                                                   //0x10
        ULONG Timeout;                                                      //0x10
    };
    union
    {
        ULONG ReplyCount;                                                   //0x14
        ULONG NotifyeeCount;                                                //0x14
    };
    union
    {
        ULONGLONG ReplyHandle;                                              //0x18
        VOID* ReplyObject;                                                  //0x18
        ULONG RegIndex;                                                     //0x18
    };
    ULONG TargetPID;                                                        //0x20
    ULONG SourcePID;                                                        //0x24
    struct _GUID DestinationGuid;                                           //0x28
    struct _GUID SourceGuid;                                                //0x38
};
/* Used in */
// _ETW_QUEUE_ENTRY

