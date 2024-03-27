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

//0xe0 bytes (sizeof)
struct _MMINPAGE_SUPPORT
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    struct _ETHREAD* Thread;                                                //0x8
    struct _LIST_ENTRY ListHead;                                            //0xc
    struct _KEVENT Event;                                                   //0x18
    struct _KEVENT CollidedEvent;                                           //0x28
    struct _IO_STATUS_BLOCK IoStatus;                                       //0x38
    union _LARGE_INTEGER ReadOffset;                                        //0x40
    struct _MMPTE PteContents;                                              //0x48
    struct _MMPFN* LockedProtoPfn;                                          //0x50
    volatile LONG WaitCount;                                                //0x54
    ULONG ByteCount;                                                        //0x58
    union
    {
        ULONG ImagePteOffset;                                               //0x5c
        ULONG TossPage;                                                     //0x5c
    } u3;                                                                   //0x5c
    union
    {
        struct _MMINPAGE_FLAGS e1;                                          //0x60
        ULONG LongFlags;                                                    //0x60
    } u1;                                                                   //0x60
    struct _FILE_OBJECT* FilePointer;                                       //0x64
    struct _CONTROL_AREA* ControlArea;                                      //0x68
    VOID* FaultingAddress;                                                  //0x6c
    struct _MMPTE* PointerPte;                                              //0x70
    struct _MMPTE* BasePte;                                                 //0x74
    struct _MMPFN* Pfn;                                                     //0x78
    struct _MDL* PrefetchMdl;                                               //0x7c
    struct _MDL Mdl;                                                        //0x80
    ULONG Page[16];                                                         //0x9c
};
/* Used in */
// _MI_VAD_EVENT_BLOCK

