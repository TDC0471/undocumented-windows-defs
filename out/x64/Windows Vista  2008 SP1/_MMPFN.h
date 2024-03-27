#pragma once
/* ------------------ */

#include <_KEVENT.h>
#include <_KTHREAD.h>
#include <_SINGLE_LIST_ENTRY.h>
#include <_MMPTE.h>
#include <_MMPFNENTRY.h>

//0x30 bytes (sizeof)
struct _MMPFN
{
    union
    {
        ULONGLONG Flink;                                                    //0x0
        ULONG WsIndex;                                                      //0x0
        struct _KEVENT* Event;                                              //0x0
        VOID* Next;                                                         //0x0
        VOID* volatile VolatileNext;                                        //0x0
        struct _KTHREAD* KernelStackOwner;                                  //0x0
        struct _SINGLE_LIST_ENTRY NextStackPfn;                             //0x0
    } u1;                                                                   //0x0
    union
    {
        ULONGLONG Blink;                                                    //0x8
        struct _MMPTE* ImageProtoPte;                                       //0x8
        ULONGLONG ShareCount;                                               //0x8
    } u2;                                                                   //0x8
    union
    {
        struct _MMPTE* PteAddress;                                          //0x10
        VOID* volatile VolatilePteAddress;                                  //0x10
    };
    union
    {
        struct
        {
            USHORT ReferenceCount;                                          //0x18
            struct _MMPFNENTRY e1;                                          //0x1a
        };
        struct
        {
            union
            {
                USHORT ReferenceCount;                                      //0x18
                volatile SHORT VolatileReferenceCount;                      //0x18
            };
            USHORT ShortFlags;                                              //0x1a
        } e2;                                                               //0x18
        struct
        {
            USHORT ReferenceCount;                                          //0x18
            UCHAR ByteFlags;                                                //0x1a
            UCHAR InterlockedByteFlags;                                     //0x1b
        } e3;                                                               //0x18
    } u3;                                                                   //0x18
    USHORT UsedPageTableEntries;                                            //0x1c
    UCHAR VaType;                                                           //0x1e
    UCHAR ViewCount;                                                        //0x1f
    union
    {
        struct _MMPTE OriginalPte;                                          //0x20
        volatile LONG AweReferenceCount;                                    //0x20
    };
    union
    {
        ULONGLONG PteFrame:52;                                              //0x28
        ULONGLONG Unused:3;                                                 //0x28
        ULONGLONG PfnImageVerified:1;                                       //0x28
        ULONGLONG AweAllocation:1;                                          //0x28
        ULONGLONG PrototypePte:1;                                           //0x28
        ULONGLONG PageColor:6;                                              //0x28
    } u4;                                                                   //0x28
};
