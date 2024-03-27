#pragma once
/* ------------------ */

#include <_IO_SECURITY_CONTEXT.h>
#include <_NAMED_PIPE_CREATE_PARAMETERS.h>
#include <_MAILSLOT_CREATE_PARAMETERS.h>
#include <_LARGE_INTEGER.h>
#include <_UNICODE_STRING.h>
#include <_FILE_INFORMATION_CLASS.h>
#include <_DIRECTORY_NOTIFY_INFORMATION_CLASS.h>
#include <_FILE_OBJECT.h>
#include <_FSINFOCLASS.h>
#include <_VPB.h>
#include <_DEVICE_OBJECT.h>
#include <_SCSI_REQUEST_BLOCK.h>
#include <_FILE_GET_QUOTA_INFORMATION.h>
#include <_DEVICE_RELATION_TYPE.h>
#include <_GUID.h>
#include <_INTERFACE.h>
#include <_DEVICE_CAPABILITIES.h>
#include <_IO_RESOURCE_REQUIREMENTS_LIST.h>
#include <BUS_QUERY_ID_TYPE.h>
#include <DEVICE_TEXT_TYPE.h>
#include <_DEVICE_USAGE_NOTIFICATION_TYPE.h>
#include <_SYSTEM_POWER_STATE.h>
#include <_POWER_SEQUENCE.h>
#include <_SYSTEM_POWER_STATE_CONTEXT.h>
#include <_POWER_STATE_TYPE.h>
#include <_POWER_STATE.h>
#include <POWER_ACTION.h>
#include <_CM_RESOURCE_LIST.h>
#include <_IRP.h>

//0x24 bytes (sizeof)
struct _IO_STACK_LOCATION
{
    UCHAR MajorFunction;                                                    //0x0
    UCHAR MinorFunction;                                                    //0x1
    UCHAR Flags;                                                            //0x2
    UCHAR Control;                                                          //0x3
    union
    {
        struct
        {
            struct _IO_SECURITY_CONTEXT* SecurityContext;                   //0x4
            ULONG Options;                                                  //0x8
            USHORT FileAttributes;                                          //0xc
            USHORT ShareAccess;                                             //0xe
            ULONG EaLength;                                                 //0x10
        } Create;                                                           //0x4
        struct
        {
            struct _IO_SECURITY_CONTEXT* SecurityContext;                   //0x4
            ULONG Options;                                                  //0x8
            USHORT Reserved;                                                //0xc
            USHORT ShareAccess;                                             //0xe
            struct _NAMED_PIPE_CREATE_PARAMETERS* Parameters;               //0x10
        } CreatePipe;                                                       //0x4
        struct
        {
            struct _IO_SECURITY_CONTEXT* SecurityContext;                   //0x4
            ULONG Options;                                                  //0x8
            USHORT Reserved;                                                //0xc
            USHORT ShareAccess;                                             //0xe
            struct _MAILSLOT_CREATE_PARAMETERS* Parameters;                 //0x10
        } CreateMailslot;                                                   //0x4
        struct
        {
            ULONG Length;                                                   //0x4
            ULONG Key;                                                      //0x8
            union _LARGE_INTEGER ByteOffset;                                //0xc
        } Read;                                                             //0x4
        struct
        {
            ULONG Length;                                                   //0x4
            ULONG Key;                                                      //0x8
            union _LARGE_INTEGER ByteOffset;                                //0xc
        } Write;                                                            //0x4
        struct
        {
            ULONG Length;                                                   //0x4
            struct _UNICODE_STRING* FileName;                               //0x8
            enum _FILE_INFORMATION_CLASS FileInformationClass;              //0xc
            ULONG FileIndex;                                                //0x10
        } QueryDirectory;                                                   //0x4
        struct
        {
            ULONG Length;                                                   //0x4
            ULONG CompletionFilter;                                         //0x8
        } NotifyDirectory;                                                  //0x4
        struct
        {
            ULONG Length;                                                   //0x4
            ULONG CompletionFilter;                                         //0x8
            enum _DIRECTORY_NOTIFY_INFORMATION_CLASS DirectoryNotifyInformationClass; //0xc
        } NotifyDirectoryEx;                                                //0x4
        struct
        {
            ULONG Length;                                                   //0x4
            enum _FILE_INFORMATION_CLASS FileInformationClass;              //0x8
        } QueryFile;                                                        //0x4
        struct
        {
            ULONG Length;                                                   //0x4
            enum _FILE_INFORMATION_CLASS FileInformationClass;              //0x8
            struct _FILE_OBJECT* FileObject;                                //0xc
            union
            {
                struct
                {
                    UCHAR ReplaceIfExists;                                  //0x10
                    UCHAR AdvanceOnly;                                      //0x11
                };
                ULONG ClusterCount;                                         //0x10
                VOID* DeleteHandle;                                         //0x10
            };
        } SetFile;                                                          //0x4
        struct
        {
            ULONG Length;                                                   //0x4
            VOID* EaList;                                                   //0x8
            ULONG EaListLength;                                             //0xc
            ULONG EaIndex;                                                  //0x10
        } QueryEa;                                                          //0x4
        struct
        {
            ULONG Length;                                                   //0x4
        } SetEa;                                                            //0x4
        struct
        {
            ULONG Length;                                                   //0x4
            enum _FSINFOCLASS FsInformationClass;                           //0x8
        } QueryVolume;                                                      //0x4
        struct
        {
            ULONG Length;                                                   //0x4
            enum _FSINFOCLASS FsInformationClass;                           //0x8
        } SetVolume;                                                        //0x4
        struct
        {
            ULONG OutputBufferLength;                                       //0x4
            ULONG InputBufferLength;                                        //0x8
            ULONG FsControlCode;                                            //0xc
            VOID* Type3InputBuffer;                                         //0x10
        } FileSystemControl;                                                //0x4
        struct
        {
            union _LARGE_INTEGER* Length;                                   //0x4
            ULONG Key;                                                      //0x8
            union _LARGE_INTEGER ByteOffset;                                //0xc
        } LockControl;                                                      //0x4
        struct
        {
            ULONG OutputBufferLength;                                       //0x4
            ULONG InputBufferLength;                                        //0x8
            ULONG IoControlCode;                                            //0xc
            VOID* Type3InputBuffer;                                         //0x10
        } DeviceIoControl;                                                  //0x4
        struct
        {
            ULONG SecurityInformation;                                      //0x4
            ULONG Length;                                                   //0x8
        } QuerySecurity;                                                    //0x4
        struct
        {
            ULONG SecurityInformation;                                      //0x4
            VOID* SecurityDescriptor;                                       //0x8
        } SetSecurity;                                                      //0x4
        struct
        {
            struct _VPB* Vpb;                                               //0x4
            struct _DEVICE_OBJECT* DeviceObject;                            //0x8
        } MountVolume;                                                      //0x4
        struct
        {
            struct _VPB* Vpb;                                               //0x4
            struct _DEVICE_OBJECT* DeviceObject;                            //0x8
        } VerifyVolume;                                                     //0x4
        struct
        {
            struct _SCSI_REQUEST_BLOCK* Srb;                                //0x4
        } Scsi;                                                             //0x4
        struct
        {
            ULONG Length;                                                   //0x4
            VOID* StartSid;                                                 //0x8
            struct _FILE_GET_QUOTA_INFORMATION* SidList;                    //0xc
            ULONG SidListLength;                                            //0x10
        } QueryQuota;                                                       //0x4
        struct
        {
            ULONG Length;                                                   //0x4
        } SetQuota;                                                         //0x4
        struct
        {
            enum _DEVICE_RELATION_TYPE Type;                                //0x4
        } QueryDeviceRelations;                                             //0x4
        struct
        {
            struct _GUID* InterfaceType;                                    //0x4
            USHORT Size;                                                    //0x8
            USHORT Version;                                                 //0xa
            struct _INTERFACE* Interface;                                   //0xc
            VOID* InterfaceSpecificData;                                    //0x10
        } QueryInterface;                                                   //0x4
        struct
        {
            struct _DEVICE_CAPABILITIES* Capabilities;                      //0x4
        } DeviceCapabilities;                                               //0x4
        struct
        {
            struct _IO_RESOURCE_REQUIREMENTS_LIST* IoResourceRequirementList; //0x4
        } FilterResourceRequirements;                                       //0x4
        struct
        {
            ULONG WhichSpace;                                               //0x4
            VOID* Buffer;                                                   //0x8
            ULONG Offset;                                                   //0xc
            ULONG Length;                                                   //0x10
        } ReadWriteConfig;                                                  //0x4
        struct
        {
            UCHAR Lock;                                                     //0x4
        } SetLock;                                                          //0x4
        struct
        {
            enum BUS_QUERY_ID_TYPE IdType;                                  //0x4
        } QueryId;                                                          //0x4
        struct
        {
            enum DEVICE_TEXT_TYPE DeviceTextType;                           //0x4
            ULONG LocaleId;                                                 //0x8
        } QueryDeviceText;                                                  //0x4
        struct
        {
            UCHAR InPath;                                                   //0x4
            UCHAR Reserved[3];                                              //0x5
            enum _DEVICE_USAGE_NOTIFICATION_TYPE Type;                      //0x8
        } UsageNotification;                                                //0x4
        struct
        {
            enum _SYSTEM_POWER_STATE PowerState;                            //0x4
        } WaitWake;                                                         //0x4
        struct
        {
            struct _POWER_SEQUENCE* PowerSequence;                          //0x4
        } PowerSequence;                                                    //0x4
        struct
        {
            union
            {
                ULONG SystemContext;                                        //0x4
                struct _SYSTEM_POWER_STATE_CONTEXT SystemPowerStateContext; //0x4
            };
            enum _POWER_STATE_TYPE Type;                                    //0x8
            union _POWER_STATE State;                                       //0xc
            enum POWER_ACTION ShutdownType;                                 //0x10
        } Power;                                                            //0x4
        struct
        {
            struct _CM_RESOURCE_LIST* AllocatedResources;                   //0x4
            struct _CM_RESOURCE_LIST* AllocatedResourcesTranslated;         //0x8
        } StartDevice;                                                      //0x4
        struct
        {
            ULONG ProviderId;                                               //0x4
            VOID* DataPath;                                                 //0x8
            ULONG BufferSize;                                               //0xc
            VOID* Buffer;                                                   //0x10
        } WMI;                                                              //0x4
        struct
        {
            VOID* Argument1;                                                //0x4
            VOID* Argument2;                                                //0x8
            VOID* Argument3;                                                //0xc
            VOID* Argument4;                                                //0x10
        } Others;                                                           //0x4
    } Parameters;                                                           //0x4
    struct _DEVICE_OBJECT* DeviceObject;                                    //0x14
    struct _FILE_OBJECT* FileObject;                                        //0x18
    LONG (*CompletionRoutine)(struct _DEVICE_OBJECT* arg1, struct _IRP* arg2, VOID* arg3); //0x1c
    VOID* Context;                                                          //0x20
};
/* Used in */
// _IRP

