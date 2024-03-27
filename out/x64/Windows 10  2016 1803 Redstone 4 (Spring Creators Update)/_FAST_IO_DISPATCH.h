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

//0xe0 bytes (sizeof)
struct _FAST_IO_DISPATCH
{
    ULONG SizeOfFastIoDispatch;                                             //0x0
    UCHAR (*FastIoCheckIfPossible)(struct _FILE_OBJECT* arg1, union _LARGE_INTEGER* arg2, ULONG arg3, UCHAR arg4, ULONG arg5, UCHAR arg6, struct _IO_STATUS_BLOCK* arg7, struct _DEVICE_OBJECT* arg8); //0x8
    UCHAR (*FastIoRead)(struct _FILE_OBJECT* arg1, union _LARGE_INTEGER* arg2, ULONG arg3, UCHAR arg4, ULONG arg5, VOID* arg6, struct _IO_STATUS_BLOCK* arg7, struct _DEVICE_OBJECT* arg8); //0x10
    UCHAR (*FastIoWrite)(struct _FILE_OBJECT* arg1, union _LARGE_INTEGER* arg2, ULONG arg3, UCHAR arg4, ULONG arg5, VOID* arg6, struct _IO_STATUS_BLOCK* arg7, struct _DEVICE_OBJECT* arg8); //0x18
    UCHAR (*FastIoQueryBasicInfo)(struct _FILE_OBJECT* arg1, UCHAR arg2, struct _FILE_BASIC_INFORMATION* arg3, struct _IO_STATUS_BLOCK* arg4, struct _DEVICE_OBJECT* arg5); //0x20
    UCHAR (*FastIoQueryStandardInfo)(struct _FILE_OBJECT* arg1, UCHAR arg2, struct _FILE_STANDARD_INFORMATION* arg3, struct _IO_STATUS_BLOCK* arg4, struct _DEVICE_OBJECT* arg5); //0x28
    UCHAR (*FastIoLock)(struct _FILE_OBJECT* arg1, union _LARGE_INTEGER* arg2, union _LARGE_INTEGER* arg3, struct _EPROCESS* arg4, ULONG arg5, UCHAR arg6, UCHAR arg7, struct _IO_STATUS_BLOCK* arg8, struct _DEVICE_OBJECT* arg9); //0x30
    UCHAR (*FastIoUnlockSingle)(struct _FILE_OBJECT* arg1, union _LARGE_INTEGER* arg2, union _LARGE_INTEGER* arg3, struct _EPROCESS* arg4, ULONG arg5, struct _IO_STATUS_BLOCK* arg6, struct _DEVICE_OBJECT* arg7); //0x38
    UCHAR (*FastIoUnlockAll)(struct _FILE_OBJECT* arg1, struct _EPROCESS* arg2, struct _IO_STATUS_BLOCK* arg3, struct _DEVICE_OBJECT* arg4); //0x40
    UCHAR (*FastIoUnlockAllByKey)(struct _FILE_OBJECT* arg1, VOID* arg2, ULONG arg3, struct _IO_STATUS_BLOCK* arg4, struct _DEVICE_OBJECT* arg5); //0x48
    UCHAR (*FastIoDeviceControl)(struct _FILE_OBJECT* arg1, UCHAR arg2, VOID* arg3, ULONG arg4, VOID* arg5, ULONG arg6, ULONG arg7, struct _IO_STATUS_BLOCK* arg8, struct _DEVICE_OBJECT* arg9); //0x50
    VOID (*AcquireFileForNtCreateSection)(struct _FILE_OBJECT* arg1);       //0x58
    VOID (*ReleaseFileForNtCreateSection)(struct _FILE_OBJECT* arg1);       //0x60
    VOID (*FastIoDetachDevice)(struct _DEVICE_OBJECT* arg1, struct _DEVICE_OBJECT* arg2); //0x68
    UCHAR (*FastIoQueryNetworkOpenInfo)(struct _FILE_OBJECT* arg1, UCHAR arg2, struct _FILE_NETWORK_OPEN_INFORMATION* arg3, struct _IO_STATUS_BLOCK* arg4, struct _DEVICE_OBJECT* arg5); //0x70
    LONG (*AcquireForModWrite)(struct _FILE_OBJECT* arg1, union _LARGE_INTEGER* arg2, struct _ERESOURCE** arg3, struct _DEVICE_OBJECT* arg4); //0x78
    UCHAR (*MdlRead)(struct _FILE_OBJECT* arg1, union _LARGE_INTEGER* arg2, ULONG arg3, ULONG arg4, struct _MDL** arg5, struct _IO_STATUS_BLOCK* arg6, struct _DEVICE_OBJECT* arg7); //0x80
    UCHAR (*MdlReadComplete)(struct _FILE_OBJECT* arg1, struct _MDL* arg2, struct _DEVICE_OBJECT* arg3); //0x88
    UCHAR (*PrepareMdlWrite)(struct _FILE_OBJECT* arg1, union _LARGE_INTEGER* arg2, ULONG arg3, ULONG arg4, struct _MDL** arg5, struct _IO_STATUS_BLOCK* arg6, struct _DEVICE_OBJECT* arg7); //0x90
    UCHAR (*MdlWriteComplete)(struct _FILE_OBJECT* arg1, union _LARGE_INTEGER* arg2, struct _MDL* arg3, struct _DEVICE_OBJECT* arg4); //0x98
    UCHAR (*FastIoReadCompressed)(struct _FILE_OBJECT* arg1, union _LARGE_INTEGER* arg2, ULONG arg3, ULONG arg4, VOID* arg5, struct _MDL** arg6, struct _IO_STATUS_BLOCK* arg7, struct _COMPRESSED_DATA_INFO* arg8, ULONG arg9, struct _DEVICE_OBJECT* arg10); //0xa0
    UCHAR (*FastIoWriteCompressed)(struct _FILE_OBJECT* arg1, union _LARGE_INTEGER* arg2, ULONG arg3, ULONG arg4, VOID* arg5, struct _MDL** arg6, struct _IO_STATUS_BLOCK* arg7, struct _COMPRESSED_DATA_INFO* arg8, ULONG arg9, struct _DEVICE_OBJECT* arg10); //0xa8
    UCHAR (*MdlReadCompleteCompressed)(struct _FILE_OBJECT* arg1, struct _MDL* arg2, struct _DEVICE_OBJECT* arg3); //0xb0
    UCHAR (*MdlWriteCompleteCompressed)(struct _FILE_OBJECT* arg1, union _LARGE_INTEGER* arg2, struct _MDL* arg3, struct _DEVICE_OBJECT* arg4); //0xb8
    UCHAR (*FastIoQueryOpen)(struct _IRP* arg1, struct _FILE_NETWORK_OPEN_INFORMATION* arg2, struct _DEVICE_OBJECT* arg3); //0xc0
    LONG (*ReleaseForModWrite)(struct _FILE_OBJECT* arg1, struct _ERESOURCE* arg2, struct _DEVICE_OBJECT* arg3); //0xc8
    LONG (*AcquireForCcFlush)(struct _FILE_OBJECT* arg1, struct _DEVICE_OBJECT* arg2); //0xd0
    LONG (*ReleaseForCcFlush)(struct _FILE_OBJECT* arg1, struct _DEVICE_OBJECT* arg2); //0xd8
};
/* Used in */
// _DRIVER_OBJECT

