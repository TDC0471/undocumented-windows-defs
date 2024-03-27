#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_ETHREAD.h>
#include <_KEVENT.h>
#include <_IO_STATUS_BLOCK.h>
#include <_LARGE_INTEGER.h>
#include <_MMPTE.h>
#include <_MMPFN.h>
#include <_MMINPAGE_FLAGS.h>
#include <_FILE_OBJECT.h>
#include <_CONTROL_AREA.h>
#include <_MDL.h>

//0x178 bytes (sizeof)
struct _MMINPAGE_SUPPORT
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    struct _ETHREAD* Thread;                                                //0x10
    struct _LIST_ENTRY ListHead;                                            //0x18
    struct _KEVENT Event;                                                   //0x28
    struct _KEVENT CollidedEvent;                                           //0x40
    struct _IO_STATUS_BLOCK IoStatus;                                       //0x58
    union _LARGE_INTEGER ReadOffset;                                        //0x68
    struct _MMPTE PteContents;                                              //0x70
    struct _MMPFN* LockedProtoPfn;                                          //0x78
    volatile LONG WaitCount;                                                //0x80
    ULONG ByteCount;                                                        //0x84
    union
    {
        ULONG ImagePteOffset;                                               //0x88
        ULONG TossPage;                                                     //0x88
    } u3;                                                                   //0x88
    union
    {
        struct _MMINPAGE_FLAGS e1;                                          //0x8c
        ULONG LongFlags;                                                    //0x8c
    } u1;                                                                   //0x8c
    struct _FILE_OBJECT* FilePointer;                                       //0x90
    struct _CONTROL_AREA* ControlArea;                                      //0x98
    VOID* FaultingAddress;                                                  //0xa0
    struct _MMPTE* PointerPte;                                              //0xa8
    struct _MMPTE* BasePte;                                                 //0xb0
    struct _MMPFN* Pfn;                                                     //0xb8
    struct _MDL* PrefetchMdl;                                               //0xc0
    struct _MDL Mdl;                                                        //0xc8
    ULONGLONG Page[16];                                                     //0xf8
};
/* Used in */
// _MI_VAD_EVENT_BLOCK

