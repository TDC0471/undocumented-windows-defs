#pragma once
/* ------------------ */

#include <_FILE_OBJECT.h>
#include <_DEVICE_OBJECT.h>
#include <_OBJECT_ATTRIBUTES.h>
#include <_LARGE_INTEGER.h>
#include <_FILE_BASIC_INFORMATION.h>
#include <_FILE_NETWORK_OPEN_INFORMATION.h>
#include <_CREATE_FILE_TYPE.h>
#include <_DUMMY_FILE_OBJECT.h>
#include <_IO_DRIVER_CREATE_CONTEXT.h>

//0x70 bytes (sizeof)
struct _OPEN_PACKET
{
    SHORT Type;                                                             //0x0
    SHORT Size;                                                             //0x2
    struct _FILE_OBJECT* FileObject;                                        //0x4
    LONG FinalStatus;                                                       //0x8
    ULONG Information;                                                      //0xc
    ULONG ParseCheck;                                                       //0x10
    union
    {
        struct _FILE_OBJECT* RelatedFileObject;                             //0x14
        struct _DEVICE_OBJECT* ReferencedDeviceObject;                      //0x14
    };
    struct _OBJECT_ATTRIBUTES* OriginalAttributes;                          //0x18
    union _LARGE_INTEGER AllocationSize;                                    //0x20
    ULONG CreateOptions;                                                    //0x28
    USHORT FileAttributes;                                                  //0x2c
    USHORT ShareAccess;                                                     //0x2e
    VOID* EaBuffer;                                                         //0x30
    ULONG EaLength;                                                         //0x34
    ULONG Options;                                                          //0x38
    ULONG Disposition;                                                      //0x3c
    struct _FILE_BASIC_INFORMATION* BasicInformation;                       //0x40
    struct _FILE_NETWORK_OPEN_INFORMATION* NetworkInformation;              //0x44
    enum _CREATE_FILE_TYPE CreateFileType;                                  //0x48
    VOID* MailslotOrPipeParameters;                                         //0x4c
    UCHAR Override;                                                         //0x50
    UCHAR QueryOnly;                                                        //0x51
    UCHAR DeleteOnly;                                                       //0x52
    UCHAR FullAttributes;                                                   //0x53
    struct _DUMMY_FILE_OBJECT* LocalFileObject;                             //0x54
    ULONG InternalFlags;                                                    //0x58
    CHAR AccessMode;                                                        //0x5c
    struct _IO_DRIVER_CREATE_CONTEXT DriverCreateContext;                   //0x60
};
