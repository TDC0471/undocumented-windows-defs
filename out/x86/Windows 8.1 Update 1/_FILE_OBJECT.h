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

//0x80 bytes (sizeof)
struct _FILE_OBJECT
{
    SHORT Type;                                                             //0x0
    SHORT Size;                                                             //0x2
    struct _DEVICE_OBJECT* DeviceObject;                                    //0x4
    struct _VPB* Vpb;                                                       //0x8
    VOID* FsContext;                                                        //0xc
    VOID* FsContext2;                                                       //0x10
    struct _SECTION_OBJECT_POINTERS* SectionObjectPointer;                  //0x14
    VOID* PrivateCacheMap;                                                  //0x18
    LONG FinalStatus;                                                       //0x1c
    struct _FILE_OBJECT* RelatedFileObject;                                 //0x20
    UCHAR LockOperation;                                                    //0x24
    UCHAR DeletePending;                                                    //0x25
    UCHAR ReadAccess;                                                       //0x26
    UCHAR WriteAccess;                                                      //0x27
    UCHAR DeleteAccess;                                                     //0x28
    UCHAR SharedRead;                                                       //0x29
    UCHAR SharedWrite;                                                      //0x2a
    UCHAR SharedDelete;                                                     //0x2b
    ULONG Flags;                                                            //0x2c
    struct _UNICODE_STRING FileName;                                        //0x30
    union _LARGE_INTEGER CurrentByteOffset;                                 //0x38
    ULONG Waiters;                                                          //0x40
    ULONG Busy;                                                             //0x44
    VOID* LastLock;                                                         //0x48
    struct _KEVENT Lock;                                                    //0x4c
    struct _KEVENT Event;                                                   //0x5c
    struct _IO_COMPLETION_CONTEXT* CompletionContext;                       //0x6c
    ULONG IrpListLock;                                                      //0x70
    struct _LIST_ENTRY IrpList;                                             //0x74
    VOID* FileObjectExtension;                                              //0x7c
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

