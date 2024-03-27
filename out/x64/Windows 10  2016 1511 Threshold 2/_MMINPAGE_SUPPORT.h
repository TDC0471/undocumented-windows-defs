#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_KEVENT.h>
#include <_IO_STATUS_BLOCK.h>
#include <_LARGE_INTEGER.h>
#include <_KAPC_STATE.h>
#include <_ETHREAD.h>
#include <_MMPFN.h>
#include <_MMPTE.h>
#include <_MMINPAGE_FLAGS.h>
#include <_FILE_OBJECT.h>
#include <_CONTROL_AREA.h>
#include <_SUBSECTION.h>
#include <_MDL.h>
#include <_MMINPAGE_SUPPORT_FLOW_THROUGH.h>

//0x1b0 bytes (sizeof)
struct _MMINPAGE_SUPPORT
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    struct _LIST_ENTRY ListHead;                                            //0x10
    struct _KEVENT Event;                                                   //0x20
    struct _KEVENT CollidedEvent;                                           //0x38
    struct _IO_STATUS_BLOCK IoStatus;                                       //0x50
    union _LARGE_INTEGER ReadOffset;                                        //0x60
    struct _KAPC_STATE ApcState;                                            //0x68
    struct _ETHREAD* Thread;                                                //0x98
    struct _MMPFN* LockedProtoPfn;                                          //0xa0
    struct _MMPTE PteContents;                                              //0xa8
    volatile LONG WaitCount;                                                //0xb0
    ULONG ByteCount;                                                        //0xb4
    union
    {
        ULONG ImagePteOffset;                                               //0xb8
        ULONG TossPage;                                                     //0xb8
    } u3;                                                                   //0xb8
    union
    {
        struct _MMINPAGE_FLAGS e1;                                          //0xbc
        ULONG LongFlags;                                                    //0xbc
    } u1;                                                                   //0xbc
    struct _FILE_OBJECT* FilePointer;                                       //0xc0
    union
    {
        struct _CONTROL_AREA* ControlArea;                                  //0xc8
        struct _SUBSECTION* Subsection;                                     //0xc8
    };
    VOID* Autoboost;                                                        //0xd0
    VOID* FaultingAddress;                                                  //0xd8
    struct _MMPTE* PointerPte;                                              //0xe0
    struct _MMPTE* BasePte;                                                 //0xe8
    struct _MMPFN* Pfn;                                                     //0xf0
    struct _MDL* PrefetchMdl;                                               //0xf8
    struct _MDL Mdl;                                                        //0x100
    union
    {
        ULONGLONG Page[16];                                                 //0x130
        struct _MMINPAGE_SUPPORT_FLOW_THROUGH FlowThrough;                  //0x130
    };
};
/* Used in */
// _MI_VAD_EVENT_BLOCK
// _MMINPAGE_SUPPORT_FLOW_THROUGH

