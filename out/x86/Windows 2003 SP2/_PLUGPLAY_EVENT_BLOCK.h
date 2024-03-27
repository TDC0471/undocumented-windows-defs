#pragma once
/* ------------------ */

#include <_GUID.h>
#include <_PLUGPLAY_EVENT_CATEGORY.h>
#include <_PNP_VETO_TYPE.h>

//0x38 bytes (sizeof)
struct _PLUGPLAY_EVENT_BLOCK
{
    struct _GUID EventGuid;                                                 //0x0
    enum _PLUGPLAY_EVENT_CATEGORY EventCategory;                            //0x10
    ULONG* Result;                                                          //0x14
    ULONG Flags;                                                            //0x18
    ULONG TotalSize;                                                        //0x1c
    VOID* DeviceObject;                                                     //0x20
    union
    {
        struct
        {
            struct _GUID ClassGuid;                                         //0x24
            USHORT SymbolicLinkName[1];                                     //0x34
        } DeviceClass;                                                      //0x24
        struct
        {
            USHORT DeviceIds[1];                                            //0x24
        } TargetDevice;                                                     //0x24
        struct
        {
            USHORT DeviceId[1];                                             //0x24
        } InstallDevice;                                                    //0x24
        struct
        {
            VOID* NotificationStructure;                                    //0x24
            USHORT DeviceIds[1];                                            //0x28
        } CustomNotification;                                               //0x24
        struct
        {
            VOID* Notification;                                             //0x24
        } ProfileNotification;                                              //0x24
        struct
        {
            ULONG NotificationCode;                                         //0x24
            ULONG NotificationData;                                         //0x28
        } PowerNotification;                                                //0x24
        struct
        {
            enum _PNP_VETO_TYPE VetoType;                                   //0x24
            USHORT DeviceIdVetoNameBuffer[1];                               //0x28
        } VetoNotification;                                                 //0x24
        struct
        {
            struct _GUID BlockedDriverGuid;                                 //0x24
        } BlockedDriverNotification;                                        //0x24
        struct
        {
            USHORT ParentId[1];                                             //0x24
        } InvalidIDNotification;                                            //0x24
    } u;                                                                    //0x24
};
/* Used in */
// _PNP_DEVICE_EVENT_ENTRY

