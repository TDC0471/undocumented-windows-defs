#pragma once
/* ------------------ */

#include <_DEVICE_OBJECT.h>
#include <_VPB.h>
#include <_SECTION_OBJECT_POINTERS.h>
#include <_FILE_OBJECT.h>
#include <_UNICODE_STRING.h>
#include <_LARGE_INTEGER.h>
#include <_KEVENT.h>
#include <_IO_COMPLETION_CONTEXT.h>
#include <_LIST_ENTRY.h>

//0xd8 bytes (sizeof)
struct _FILE_OBJECT
{
    SHORT Type;                                                             //0x0
    SHORT Size;                                                             //0x2
    struct _DEVICE_OBJECT* DeviceObject;                                    //0x8
    struct _VPB* Vpb;                                                       //0x10
    VOID* FsContext;                                                        //0x18
    VOID* FsContext2;                                                       //0x20
    struct _SECTION_OBJECT_POINTERS* SectionObjectPointer;                  //0x28
    VOID* PrivateCacheMap;                                                  //0x30
    LONG FinalStatus;                                                       //0x38
    struct _FILE_OBJECT* RelatedFileObject;                                 //0x40
    UCHAR LockOperation;                                                    //0x48
    UCHAR DeletePending;                                                    //0x49
    UCHAR ReadAccess;                                                       //0x4a
    UCHAR WriteAccess;                                                      //0x4b
    UCHAR DeleteAccess;                                                     //0x4c
    UCHAR SharedRead;                                                       //0x4d
    UCHAR SharedWrite;                                                      //0x4e
    UCHAR SharedDelete;                                                     //0x4f
    ULONG Flags;                                                            //0x50
    struct _UNICODE_STRING FileName;                                        //0x58
    union _LARGE_INTEGER CurrentByteOffset;                                 //0x68
    ULONG Waiters;                                                          //0x70
    ULONG Busy;                                                             //0x74
    VOID* LastLock;                                                         //0x78
    struct _KEVENT Lock;                                                    //0x80
    struct _KEVENT Event;                                                   //0x98
    struct _IO_COMPLETION_CONTEXT* CompletionContext;                       //0xb0
    ULONGLONG IrpListLock;                                                  //0xb8
    struct _LIST_ENTRY IrpList;                                             //0xc0
    VOID* FileObjectExtension;                                              //0xd0
};
/* Used in */
// _DEFERRED_WRITE
// _DELAY_ACK_FO
// _FAST_IO_DISPATCH
// _FILE_OBJECT
// _FS_FILTER_CALLBACK_DATA
// _IO_STACK_LOCATION
// _IRP
// _KTM
// _LOG_HANDLE_CONTEXT
// _MMINPAGE_SUPPORT
// _MMMOD_WRITER_MDL_ENTRY
// _MMPAGING_FILE
// _NONOPAQUE_OPLOCK
// _OPEN_PACKET
// _PRIVATE_CACHE_MAP
// _RH_OP_CONTEXT
// _WORK_QUEUE_ENTRY

