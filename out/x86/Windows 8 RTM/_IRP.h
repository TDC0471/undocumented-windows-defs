#pragma once
/* ------------------ */

#include <_MDL.h>
#include <_IRP.h>
#include <_LIST_ENTRY.h>
#include <_IO_STATUS_BLOCK.h>
#include <_KEVENT.h>
#include <_LARGE_INTEGER.h>
#include <_DEVICE_OBJECT.h>
#include <_KDEVICE_QUEUE_ENTRY.h>
#include <_ETHREAD.h>
#include <_IO_STACK_LOCATION.h>
#include <_FILE_OBJECT.h>
#include <_KAPC.h>

//0x70 bytes (sizeof)
struct _IRP
{
    SHORT Type;                                                             //0x0
    USHORT Size;                                                            //0x2
    struct _MDL* MdlAddress;                                                //0x4
    ULONG Flags;                                                            //0x8
    union
    {
        struct _IRP* MasterIrp;                                             //0xc
        LONG IrpCount;                                                      //0xc
        VOID* SystemBuffer;                                                 //0xc
    } AssociatedIrp;                                                        //0xc
    struct _LIST_ENTRY ThreadListEntry;                                     //0x10
    struct _IO_STATUS_BLOCK IoStatus;                                       //0x18
    CHAR RequestorMode;                                                     //0x20
    UCHAR PendingReturned;                                                  //0x21
    CHAR StackCount;                                                        //0x22
    CHAR CurrentLocation;                                                   //0x23
    UCHAR Cancel;                                                           //0x24
    UCHAR CancelIrql;                                                       //0x25
    CHAR ApcEnvironment;                                                    //0x26
    UCHAR AllocationFlags;                                                  //0x27
    struct _IO_STATUS_BLOCK* UserIosb;                                      //0x28
    struct _KEVENT* UserEvent;                                              //0x2c
    union
    {
        struct
        {
            union
            {
                VOID (*UserApcRoutine)(VOID* arg1, struct _IO_STATUS_BLOCK* arg2, ULONG arg3); //0x30
                VOID* IssuingProcess;                                       //0x30
            };
            VOID* UserApcContext;                                           //0x34
        } AsynchronousParameters;                                           //0x30
        union _LARGE_INTEGER AllocationSize;                                //0x30
    } Overlay;                                                              //0x30
    VOID (*CancelRoutine)(struct _DEVICE_OBJECT* arg1, struct _IRP* arg2);  //0x38
    VOID* UserBuffer;                                                       //0x3c
    union
    {
        struct
        {
            union
            {
                struct _KDEVICE_QUEUE_ENTRY DeviceQueueEntry;               //0x40
                VOID* DriverContext[4];                                     //0x40
            };
            struct _ETHREAD* Thread;                                        //0x50
            CHAR* AuxiliaryBuffer;                                          //0x54
            struct _LIST_ENTRY ListEntry;                                   //0x58
            union
            {
                struct _IO_STACK_LOCATION* CurrentStackLocation;            //0x60
                ULONG PacketType;                                           //0x60
            };
            struct _FILE_OBJECT* OriginalFileObject;                        //0x64
            VOID* IrpExtension;                                             //0x68
        } Overlay;                                                          //0x40
        struct _KAPC Apc;                                                   //0x40
        VOID* CompletionKey;                                                //0x40
    } Tail;                                                                 //0x40
};
/* Used in */
// _DEVICE_NODE
// _DEVICE_OBJECT
// _DRIVER_OBJECT
// _FAST_IO_DISPATCH
// _IOV_FORCED_PENDING_TRACE
// _IOV_IRP_TRACE
// _IO_STACK_LOCATION
// _IRP
// _MMMOD_WRITER_MDL_ENTRY
// _NONOPAQUE_OPLOCK
// _PENDING_RELATIONS_LIST_ENTRY
// _POP_FX_DEVICE
// _POP_IRP_DATA
// _POP_IRP_WORKER_ENTRY
// _POP_THERMAL_ZONE
// _PO_IRP_QUEUE
// _VF_WATCHDOG_IRP
// _WAIT_CONTEXT_BLOCK

