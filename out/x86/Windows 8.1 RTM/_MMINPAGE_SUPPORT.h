#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_KEVENT.h>
#include <_IO_STATUS_BLOCK.h>
#include <_LARGE_INTEGER.h>
#include <_MMPTE.h>
#include <_ETHREAD.h>
#include <_MMPFN.h>
#include <_MMINPAGE_FLAGS.h>
#include <_FILE_OBJECT.h>
#include <_CONTROL_AREA.h>
#include <_MDL.h>

//0xe0 bytes (sizeof)
struct _MMINPAGE_SUPPORT
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    struct _LIST_ENTRY ListHead;                                            //0x8
    struct _KEVENT Event;                                                   //0x10
    struct _KEVENT CollidedEvent;                                           //0x20
    struct _IO_STATUS_BLOCK IoStatus;                                       //0x30
    union _LARGE_INTEGER ReadOffset;                                        //0x38
    struct _MMPTE PteContents;                                              //0x40
    struct _ETHREAD* Thread;                                                //0x48
    struct _MMPFN* LockedProtoPfn;                                          //0x4c
    volatile LONG WaitCount;                                                //0x50
    ULONG ByteCount;                                                        //0x54
    union
    {
        ULONG ImagePteOffset;                                               //0x58
        ULONG TossPage;                                                     //0x58
    } u3;                                                                   //0x58
    union
    {
        struct _MMINPAGE_FLAGS e1;                                          //0x5c
        ULONG LongFlags;                                                    //0x5c
    } u1;                                                                   //0x5c
    struct _FILE_OBJECT* FilePointer;                                       //0x60
    struct _CONTROL_AREA* ControlArea;                                      //0x64
    VOID* Autoboost;                                                        //0x68
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

