#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_KEVENT.h>
#include <_IO_STATUS_BLOCK.h>
#include <_LARGE_INTEGER.h>
#include <_KAPC_STATE.h>
#include <_MI_HARD_FAULT_STATE.h>
#include <_ETHREAD.h>
#include <_MMPFN.h>
#include <_MMPTE.h>
#include <_MMINPAGE_FLAGS.h>
#include <_FILE_OBJECT.h>
#include <_CONTROL_AREA.h>
#include <_SUBSECTION.h>
#include <_MDL.h>
#include <_MMINPAGE_SUPPORT_FLOW_THROUGH.h>

//0x108 bytes (sizeof)
struct _MMINPAGE_SUPPORT
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    struct _LIST_ENTRY ListHead;                                            //0x8
    struct _KEVENT Event;                                                   //0x10
    struct _KEVENT CollidedEvent;                                           //0x20
    struct _IO_STATUS_BLOCK IoStatus;                                       //0x30
    union _LARGE_INTEGER ReadOffset;                                        //0x38
    union
    {
        struct _KAPC_STATE ApcState;                                        //0x40
        struct _MI_HARD_FAULT_STATE HardFaultState;                         //0x40
    } u2;                                                                   //0x40
    struct _ETHREAD* Thread;                                                //0x58
    struct _MMPFN* LockedProtoPfn;                                          //0x5c
    struct _MMPTE PteContents;                                              //0x60
    volatile LONG WaitCount;                                                //0x68
    volatile LONG InjectRetry;                                              //0x6c
    ULONG ByteCount;                                                        //0x70
    union
    {
        ULONG ImagePteOffset;                                               //0x74
        ULONG TossPage;                                                     //0x74
    } u3;                                                                   //0x74
    union
    {
        struct _MMINPAGE_FLAGS e1;                                          //0x78
        ULONG LongFlags;                                                    //0x78
    } u1;                                                                   //0x78
    struct _FILE_OBJECT* FilePointer;                                       //0x7c
    union
    {
        struct _CONTROL_AREA* ControlArea;                                  //0x80
        struct _SUBSECTION* Subsection;                                     //0x80
    };
    VOID* Autoboost;                                                        //0x84
    VOID* FaultingAddress;                                                  //0x88
    struct _MMPTE* PointerPte;                                              //0x8c
    struct _MMPTE* BasePte;                                                 //0x90
    struct _MMPFN* Pfn;                                                     //0x94
    struct _MDL* PrefetchMdl;                                               //0x98
    volatile LONGLONG ProbeCount;                                           //0xa0
    struct _MDL Mdl;                                                        //0xa8
    union
    {
        ULONG Page[16];                                                     //0xc4
        struct _MMINPAGE_SUPPORT_FLOW_THROUGH FlowThrough;                  //0xc4
    };
};
/* Used in */
// _MI_VAD_EVENT_BLOCK
// _MMINPAGE_SUPPORT_FLOW_THROUGH

