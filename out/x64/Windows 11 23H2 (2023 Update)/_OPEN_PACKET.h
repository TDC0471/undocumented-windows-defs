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
#include <_FILE_INFORMATION_CLASS.h>

//0xe0 bytes (sizeof)
struct _OPEN_PACKET
{
    SHORT Type;                                                             //0x0
    SHORT Size;                                                             //0x2
    struct _FILE_OBJECT* FileObject;                                        //0x8
    LONG FinalStatus;                                                       //0x10
    ULONGLONG Information;                                                  //0x18
    ULONG ParseCheck;                                                       //0x20
    union
    {
        struct _FILE_OBJECT* RelatedFileObject;                             //0x28
        struct _DEVICE_OBJECT* ReferencedDeviceObject;                      //0x28
    };
    struct _OBJECT_ATTRIBUTES* OriginalAttributes;                          //0x30
    union _LARGE_INTEGER AllocationSize;                                    //0x38
    ULONG CreateOptions;                                                    //0x40
    USHORT FileAttributes;                                                  //0x44
    USHORT ShareAccess;                                                     //0x46
    VOID* EaBuffer;                                                         //0x48
    ULONG EaLength;                                                         //0x50
    ULONG Options;                                                          //0x54
    ULONG Disposition;                                                      //0x58
    struct _FILE_BASIC_INFORMATION* BasicInformation;                       //0x60
    struct _FILE_NETWORK_OPEN_INFORMATION* NetworkInformation;              //0x68
    VOID* FileInformation;                                                  //0x70
    enum _CREATE_FILE_TYPE CreateFileType;                                  //0x78
    VOID* MailslotOrPipeParameters;                                         //0x80
    UCHAR Override;                                                         //0x88
    UCHAR QueryOnly;                                                        //0x89
    UCHAR DeleteOnly;                                                       //0x8a
    UCHAR FullAttributes;                                                   //0x8b
    struct _DUMMY_FILE_OBJECT* LocalFileObject;                             //0x90
    ULONG InternalFlags;                                                    //0x98
    CHAR AccessMode;                                                        //0x9c
    struct _IO_DRIVER_CREATE_CONTEXT DriverCreateContext;                   //0xa0
    enum _FILE_INFORMATION_CLASS FileInformationClass;                      //0xc8
    ULONG FileInformationLength;                                            //0xcc
    UCHAR FilterQuery;                                                      //0xd0
    LONGLONG ExtendedCreateFlags;                                           //0xd8
};
