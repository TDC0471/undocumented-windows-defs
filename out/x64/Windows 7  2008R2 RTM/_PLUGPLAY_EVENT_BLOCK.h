#pragma once
/* ------------------ */

#include <_GUID.h>
#include <_PLUGPLAY_EVENT_CATEGORY.h>
#include <_PNP_VETO_TYPE.h>

//0x50 bytes (sizeof)
struct _PLUGPLAY_EVENT_BLOCK
{
    struct _GUID EventGuid;                                                 //0x0
    enum _PLUGPLAY_EVENT_CATEGORY EventCategory;                            //0x10
    ULONG* Result;                                                          //0x18
    ULONG Flags;                                                            //0x20
    ULONG TotalSize;                                                        //0x24
    VOID* DeviceObject;                                                     //0x28
    union
    {
        struct
        {
            struct _GUID ClassGuid;                                         //0x30
            WCHAR SymbolicLinkName[1];                                      //0x40
        } DeviceClass;                                                      //0x30
        struct
        {
            WCHAR DeviceIds[1];                                             //0x30
        } TargetDevice;                                                     //0x30
        struct
        {
            WCHAR DeviceId[1];                                              //0x30
        } InstallDevice;                                                    //0x30
        struct
        {
            VOID* NotificationStructure;                                    //0x30
            WCHAR DeviceIds[1];                                             //0x38
        } CustomNotification;                                               //0x30
        struct
        {
            VOID* Notification;                                             //0x30
        } ProfileNotification;                                              //0x30
        struct
        {
            ULONG NotificationCode;                                         //0x30
            ULONG NotificationData;                                         //0x34
        } PowerNotification;                                                //0x30
        struct
        {
            enum _PNP_VETO_TYPE VetoType;                                   //0x30
            WCHAR DeviceIdVetoNameBuffer[1];                                //0x34
        } VetoNotification;                                                 //0x30
        struct
        {
            struct _GUID BlockedDriverGuid;                                 //0x30
        } BlockedDriverNotification;                                        //0x30
        struct
        {
            WCHAR ParentId[1];                                              //0x30
        } InvalidIDNotification;                                            //0x30
        struct
        {
            struct _GUID PowerSettingGuid;                                  //0x30
            ULONG Flags;                                                    //0x40
            ULONG SessionId;                                                //0x44
            ULONG DataLength;                                               //0x48
            UCHAR Data[1];                                                  //0x4c
        } PowerSettingNotification;                                         //0x30
        struct
        {
            WCHAR DeviceId[1];                                              //0x30
        } PropertyChangeNotification;                                       //0x30
    } u;                                                                    //0x30
};
/* Used in */
// _PNP_DEVICE_EVENT_ENTRY

