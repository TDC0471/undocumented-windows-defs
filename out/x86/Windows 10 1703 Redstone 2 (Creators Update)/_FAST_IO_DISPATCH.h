#pragma once
/* ------------------ */

#include <_FILE_OBJECT.h>
#include <_LARGE_INTEGER.h>
#include <_IO_STATUS_BLOCK.h>
#include <_DEVICE_OBJECT.h>
#include <_FILE_BASIC_INFORMATION.h>
#include <_FILE_STANDARD_INFORMATION.h>
#include <_EPROCESS.h>
#include <_FILE_NETWORK_OPEN_INFORMATION.h>
#include <_ERESOURCE.h>
#include <_MDL.h>
#include <_COMPRESSED_DATA_INFO.h>
#include <_IRP.h>

//0x70 bytes (sizeof)
struct _FAST_IO_DISPATCH
{
    ULONG SizeOfFastIoDispatch;                                             //0x0
    UCHAR (*FastIoCheckIfPossible)(struct _FILE_OBJECT* arg1, union _LARGE_INTEGER* arg2, ULONG arg3, UCHAR arg4, ULONG arg5, UCHAR arg6, struct _IO_STATUS_BLOCK* arg7, struct _DEVICE_OBJECT* arg8); //0x4
    UCHAR (*FastIoRead)(struct _FILE_OBJECT* arg1, union _LARGE_INTEGER* arg2, ULONG arg3, UCHAR arg4, ULONG arg5, VOID* arg6, struct _IO_STATUS_BLOCK* arg7, struct _DEVICE_OBJECT* arg8); //0x8
    UCHAR (*FastIoWrite)(struct _FILE_OBJECT* arg1, union _LARGE_INTEGER* arg2, ULONG arg3, UCHAR arg4, ULONG arg5, VOID* arg6, struct _IO_STATUS_BLOCK* arg7, struct _DEVICE_OBJECT* arg8); //0xc
    UCHAR (*FastIoQueryBasicInfo)(struct _FILE_OBJECT* arg1, UCHAR arg2, struct _FILE_BASIC_INFORMATION* arg3, struct _IO_STATUS_BLOCK* arg4, struct _DEVICE_OBJECT* arg5); //0x10
    UCHAR (*FastIoQueryStandardInfo)(struct _FILE_OBJECT* arg1, UCHAR arg2, struct _FILE_STANDARD_INFORMATION* arg3, struct _IO_STATUS_BLOCK* arg4, struct _DEVICE_OBJECT* arg5); //0x14
    UCHAR (*FastIoLock)(struct _FILE_OBJECT* arg1, union _LARGE_INTEGER* arg2, union _LARGE_INTEGER* arg3, struct _EPROCESS* arg4, ULONG arg5, UCHAR arg6, UCHAR arg7, struct _IO_STATUS_BLOCK* arg8, struct _DEVICE_OBJECT* arg9); //0x18
    UCHAR (*FastIoUnlockSingle)(struct _FILE_OBJECT* arg1, union _LARGE_INTEGER* arg2, union _LARGE_INTEGER* arg3, struct _EPROCESS* arg4, ULONG arg5, struct _IO_STATUS_BLOCK* arg6, struct _DEVICE_OBJECT* arg7); //0x1c
    UCHAR (*FastIoUnlockAll)(struct _FILE_OBJECT* arg1, struct _EPROCESS* arg2, struct _IO_STATUS_BLOCK* arg3, struct _DEVICE_OBJECT* arg4); //0x20
    UCHAR (*FastIoUnlockAllByKey)(struct _FILE_OBJECT* arg1, VOID* arg2, ULONG arg3, struct _IO_STATUS_BLOCK* arg4, struct _DEVICE_OBJECT* arg5); //0x24
    UCHAR (*FastIoDeviceControl)(struct _FILE_OBJECT* arg1, UCHAR arg2, VOID* arg3, ULONG arg4, VOID* arg5, ULONG arg6, ULONG arg7, struct _IO_STATUS_BLOCK* arg8, struct _DEVICE_OBJECT* arg9); //0x28
    VOID (*AcquireFileForNtCreateSection)(struct _FILE_OBJECT* arg1);       //0x2c
    VOID (*ReleaseFileForNtCreateSection)(struct _FILE_OBJECT* arg1);       //0x30
    VOID (*FastIoDetachDevice)(struct _DEVICE_OBJECT* arg1, struct _DEVICE_OBJECT* arg2); //0x34
    UCHAR (*FastIoQueryNetworkOpenInfo)(struct _FILE_OBJECT* arg1, UCHAR arg2, struct _FILE_NETWORK_OPEN_INFORMATION* arg3, struct _IO_STATUS_BLOCK* arg4, struct _DEVICE_OBJECT* arg5); //0x38
    LONG (*AcquireForModWrite)(struct _FILE_OBJECT* arg1, union _LARGE_INTEGER* arg2, struct _ERESOURCE** arg3, struct _DEVICE_OBJECT* arg4); //0x3c
    UCHAR (*MdlRead)(struct _FILE_OBJECT* arg1, union _LARGE_INTEGER* arg2, ULONG arg3, ULONG arg4, struct _MDL** arg5, struct _IO_STATUS_BLOCK* arg6, struct _DEVICE_OBJECT* arg7); //0x40
    UCHAR (*MdlReadComplete)(struct _FILE_OBJECT* arg1, struct _MDL* arg2, struct _DEVICE_OBJECT* arg3); //0x44
    UCHAR (*PrepareMdlWrite)(struct _FILE_OBJECT* arg1, union _LARGE_INTEGER* arg2, ULONG arg3, ULONG arg4, struct _MDL** arg5, struct _IO_STATUS_BLOCK* arg6, struct _DEVICE_OBJECT* arg7); //0x48
    UCHAR (*MdlWriteComplete)(struct _FILE_OBJECT* arg1, union _LARGE_INTEGER* arg2, struct _MDL* arg3, struct _DEVICE_OBJECT* arg4); //0x4c
    UCHAR (*FastIoReadCompressed)(struct _FILE_OBJECT* arg1, union _LARGE_INTEGER* arg2, ULONG arg3, ULONG arg4, VOID* arg5, struct _MDL** arg6, struct _IO_STATUS_BLOCK* arg7, struct _COMPRESSED_DATA_INFO* arg8, ULONG arg9, struct _DEVICE_OBJECT* arg10); //0x50
    UCHAR (*FastIoWriteCompressed)(struct _FILE_OBJECT* arg1, union _LARGE_INTEGER* arg2, ULONG arg3, ULONG arg4, VOID* arg5, struct _MDL** arg6, struct _IO_STATUS_BLOCK* arg7, struct _COMPRESSED_DATA_INFO* arg8, ULONG arg9, struct _DEVICE_OBJECT* arg10); //0x54
    UCHAR (*MdlReadCompleteCompressed)(struct _FILE_OBJECT* arg1, struct _MDL* arg2, struct _DEVICE_OBJECT* arg3); //0x58
    UCHAR (*MdlWriteCompleteCompressed)(struct _FILE_OBJECT* arg1, union _LARGE_INTEGER* arg2, struct _MDL* arg3, struct _DEVICE_OBJECT* arg4); //0x5c
    UCHAR (*FastIoQueryOpen)(struct _IRP* arg1, struct _FILE_NETWORK_OPEN_INFORMATION* arg2, struct _DEVICE_OBJECT* arg3); //0x60
    LONG (*ReleaseForModWrite)(struct _FILE_OBJECT* arg1, struct _ERESOURCE* arg2, struct _DEVICE_OBJECT* arg3); //0x64
    LONG (*AcquireForCcFlush)(struct _FILE_OBJECT* arg1, struct _DEVICE_OBJECT* arg2); //0x68
    LONG (*ReleaseForCcFlush)(struct _FILE_OBJECT* arg1, struct _DEVICE_OBJECT* arg2); //0x6c
};
/* Used in */
// _DRIVER_OBJECT

