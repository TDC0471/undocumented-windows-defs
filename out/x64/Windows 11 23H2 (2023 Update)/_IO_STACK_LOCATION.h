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

//0x48 bytes (sizeof)
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
            struct _IO_SECURITY_CONTEXT* SecurityContext;                   //0x8
            ULONG Options;                                                  //0x10
            USHORT FileAttributes;                                          //0x18
            USHORT ShareAccess;                                             //0x1a
            ULONG EaLength;                                                 //0x20
        } Create;                                                           //0x8
        struct
        {
            struct _IO_SECURITY_CONTEXT* SecurityContext;                   //0x8
            ULONG Options;                                                  //0x10
            USHORT Reserved;                                                //0x18
            USHORT ShareAccess;                                             //0x1a
            struct _NAMED_PIPE_CREATE_PARAMETERS* Parameters;               //0x20
        } CreatePipe;                                                       //0x8
        struct
        {
            struct _IO_SECURITY_CONTEXT* SecurityContext;                   //0x8
            ULONG Options;                                                  //0x10
            USHORT Reserved;                                                //0x18
            USHORT ShareAccess;                                             //0x1a
            struct _MAILSLOT_CREATE_PARAMETERS* Parameters;                 //0x20
        } CreateMailslot;                                                   //0x8
        struct
        {
            ULONG Length;                                                   //0x8
            ULONG Key;                                                      //0x10
            ULONG Flags;                                                    //0x14
            union _LARGE_INTEGER ByteOffset;                                //0x18
        } Read;                                                             //0x8
        struct
        {
            ULONG Length;                                                   //0x8
            ULONG Key;                                                      //0x10
            ULONG Flags;                                                    //0x14
            union _LARGE_INTEGER ByteOffset;                                //0x18
        } Write;                                                            //0x8
        struct
        {
            ULONG Length;                                                   //0x8
            struct _UNICODE_STRING* FileName;                               //0x10
            enum _FILE_INFORMATION_CLASS FileInformationClass;              //0x18
            ULONG FileIndex;                                                //0x20
        } QueryDirectory;                                                   //0x8
        struct
        {
            ULONG Length;                                                   //0x8
            ULONG CompletionFilter;                                         //0x10
        } NotifyDirectory;                                                  //0x8
        struct
        {
            ULONG Length;                                                   //0x8
            ULONG CompletionFilter;                                         //0x10
            enum _DIRECTORY_NOTIFY_INFORMATION_CLASS DirectoryNotifyInformationClass; //0x18
        } NotifyDirectoryEx;                                                //0x8
        struct
        {
            ULONG Length;                                                   //0x8
            enum _FILE_INFORMATION_CLASS FileInformationClass;              //0x10
        } QueryFile;                                                        //0x8
        struct
        {
            ULONG Length;                                                   //0x8
            enum _FILE_INFORMATION_CLASS FileInformationClass;              //0x10
            struct _FILE_OBJECT* FileObject;                                //0x18
            union
            {
                struct
                {
                    UCHAR ReplaceIfExists;                                  //0x20
                    UCHAR AdvanceOnly;                                      //0x21
                };
                ULONG ClusterCount;                                         //0x20
                VOID* DeleteHandle;                                         //0x20
            };
        } SetFile;                                                          //0x8
        struct
        {
            ULONG Length;                                                   //0x8
            VOID* EaList;                                                   //0x10
            ULONG EaListLength;                                             //0x18
            ULONG EaIndex;                                                  //0x20
        } QueryEa;                                                          //0x8
        struct
        {
            ULONG Length;                                                   //0x8
        } SetEa;                                                            //0x8
        struct
        {
            ULONG Length;                                                   //0x8
            enum _FSINFOCLASS FsInformationClass;                           //0x10
        } QueryVolume;                                                      //0x8
        struct
        {
            ULONG Length;                                                   //0x8
            enum _FSINFOCLASS FsInformationClass;                           //0x10
        } SetVolume;                                                        //0x8
        struct
        {
            ULONG OutputBufferLength;                                       //0x8
            ULONG InputBufferLength;                                        //0x10
            ULONG FsControlCode;                                            //0x18
            VOID* Type3InputBuffer;                                         //0x20
        } FileSystemControl;                                                //0x8
        struct
        {
            union _LARGE_INTEGER* Length;                                   //0x8
            ULONG Key;                                                      //0x10
            union _LARGE_INTEGER ByteOffset;                                //0x18
        } LockControl;                                                      //0x8
        struct
        {
            ULONG OutputBufferLength;                                       //0x8
            ULONG InputBufferLength;                                        //0x10
            ULONG IoControlCode;                                            //0x18
            VOID* Type3InputBuffer;                                         //0x20
        } DeviceIoControl;                                                  //0x8
        struct
        {
            ULONG SecurityInformation;                                      //0x8
            ULONG Length;                                                   //0x10
        } QuerySecurity;                                                    //0x8
        struct
        {
            ULONG SecurityInformation;                                      //0x8
            VOID* SecurityDescriptor;                                       //0x10
        } SetSecurity;                                                      //0x8
        struct
        {
            struct _VPB* Vpb;                                               //0x8
            struct _DEVICE_OBJECT* DeviceObject;                            //0x10
            ULONG OutputBufferLength;                                       //0x18
        } MountVolume;                                                      //0x8
        struct
        {
            struct _VPB* Vpb;                                               //0x8
            struct _DEVICE_OBJECT* DeviceObject;                            //0x10
        } VerifyVolume;                                                     //0x8
        struct
        {
            struct _SCSI_REQUEST_BLOCK* Srb;                                //0x8
        } Scsi;                                                             //0x8
        struct
        {
            ULONG Length;                                                   //0x8
            VOID* StartSid;                                                 //0x10
            struct _FILE_GET_QUOTA_INFORMATION* SidList;                    //0x18
            ULONG SidListLength;                                            //0x20
        } QueryQuota;                                                       //0x8
        struct
        {
            ULONG Length;                                                   //0x8
        } SetQuota;                                                         //0x8
        struct
        {
            enum _DEVICE_RELATION_TYPE Type;                                //0x8
        } QueryDeviceRelations;                                             //0x8
        struct
        {
            struct _GUID* InterfaceType;                                    //0x8
            USHORT Size;                                                    //0x10
            USHORT Version;                                                 //0x12
            struct _INTERFACE* Interface;                                   //0x18
            VOID* InterfaceSpecificData;                                    //0x20
        } QueryInterface;                                                   //0x8
        struct
        {
            struct _DEVICE_CAPABILITIES* Capabilities;                      //0x8
        } DeviceCapabilities;                                               //0x8
        struct
        {
            struct _IO_RESOURCE_REQUIREMENTS_LIST* IoResourceRequirementList; //0x8
        } FilterResourceRequirements;                                       //0x8
        struct
        {
            ULONG WhichSpace;                                               //0x8
            VOID* Buffer;                                                   //0x10
            ULONG Offset;                                                   //0x18
            ULONG Length;                                                   //0x20
        } ReadWriteConfig;                                                  //0x8
        struct
        {
            UCHAR Lock;                                                     //0x8
        } SetLock;                                                          //0x8
        struct
        {
            enum BUS_QUERY_ID_TYPE IdType;                                  //0x8
        } QueryId;                                                          //0x8
        struct
        {
            enum DEVICE_TEXT_TYPE DeviceTextType;                           //0x8
            ULONG LocaleId;                                                 //0x10
        } QueryDeviceText;                                                  //0x8
        struct
        {
            UCHAR InPath;                                                   //0x8
            UCHAR Reserved[3];                                              //0x9
            enum _DEVICE_USAGE_NOTIFICATION_TYPE Type;                      //0x10
        } UsageNotification;                                                //0x8
        struct
        {
            enum _SYSTEM_POWER_STATE PowerState;                            //0x8
        } WaitWake;                                                         //0x8
        struct
        {
            struct _POWER_SEQUENCE* PowerSequence;                          //0x8
        } PowerSequence;                                                    //0x8
        struct
        {
            union
            {
                ULONG SystemContext;                                        //0x8
                struct _SYSTEM_POWER_STATE_CONTEXT SystemPowerStateContext; //0x8
            };
            enum _POWER_STATE_TYPE Type;                                    //0x10
            union _POWER_STATE State;                                       //0x18
            enum POWER_ACTION ShutdownType;                                 //0x20
        } Power;                                                            //0x8
        struct
        {
            struct _CM_RESOURCE_LIST* AllocatedResources;                   //0x8
            struct _CM_RESOURCE_LIST* AllocatedResourcesTranslated;         //0x10
        } StartDevice;                                                      //0x8
        struct
        {
            ULONGLONG ProviderId;                                           //0x8
            VOID* DataPath;                                                 //0x10
            ULONG BufferSize;                                               //0x18
            VOID* Buffer;                                                   //0x20
        } WMI;                                                              //0x8
        struct
        {
            VOID* Argument1;                                                //0x8
            VOID* Argument2;                                                //0x10
            VOID* Argument3;                                                //0x18
            VOID* Argument4;                                                //0x20
        } Others;                                                           //0x8
    } Parameters;                                                           //0x8
    struct _DEVICE_OBJECT* DeviceObject;                                    //0x28
    struct _FILE_OBJECT* FileObject;                                        //0x30
    LONG (*CompletionRoutine)(struct _DEVICE_OBJECT* arg1, struct _IRP* arg2, VOID* arg3); //0x38
    VOID* Context;                                                          //0x40
};
/* Used in */
// _IRP

