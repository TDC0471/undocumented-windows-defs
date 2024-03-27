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

//0xf8 bytes (sizeof)
struct _MMINPAGE_SUPPORT
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    struct _LIST_ENTRY ListHead;                                            //0x8
    struct _KEVENT Event;                                                   //0x10
    struct _KEVENT CollidedEvent;                                           //0x20
    struct _IO_STATUS_BLOCK IoStatus;                                       //0x30
    union _LARGE_INTEGER ReadOffset;                                        //0x38
    struct _KAPC_STATE ApcState;                                            //0x40
    struct _ETHREAD* Thread;                                                //0x58
    struct _MMPFN* LockedProtoPfn;                                          //0x5c
    struct _MMPTE PteContents;                                              //0x60
    volatile LONG WaitCount;                                                //0x68
    ULONG ByteCount;                                                        //0x6c
    union
    {
        ULONG ImagePteOffset;                                               //0x70
        ULONG TossPage;                                                     //0x70
    } u3;                                                                   //0x70
    union
    {
        struct _MMINPAGE_FLAGS e1;                                          //0x74
        ULONG LongFlags;                                                    //0x74
    } u1;                                                                   //0x74
    struct _FILE_OBJECT* FilePointer;                                       //0x78
    union
    {
        struct _CONTROL_AREA* ControlArea;                                  //0x7c
        struct _SUBSECTION* Subsection;                                     //0x7c
    };
    VOID* Autoboost;                                                        //0x80
    VOID* FaultingAddress;                                                  //0x84
    struct _MMPTE* PointerPte;                                              //0x88
    struct _MMPTE* BasePte;                                                 //0x8c
    struct _MMPFN* Pfn;                                                     //0x90
    struct _MDL* PrefetchMdl;                                               //0x94
    struct _MDL Mdl;                                                        //0x98
    union
    {
        ULONG Page[16];                                                     //0xb4
        struct _MMINPAGE_SUPPORT_FLOW_THROUGH FlowThrough;                  //0xb4
    };
};
/* Used in */
// _MI_VAD_EVENT_BLOCK
// _MMINPAGE_SUPPORT_FLOW_THROUGH

