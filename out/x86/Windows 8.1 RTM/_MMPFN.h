#pragma once
/* ------------------ */

#include <_KEVENT.h>
#include <_KTHREAD.h>
#include <_SINGLE_LIST_ENTRY.h>
#include <_MMPTE.h>
#include <_MMPFNENTRY.h>

//0x1c bytes (sizeof)
struct _MMPFN
{
    union
    {
        ULONG Flink;                                                        //0x0
        ULONG WsIndex;                                                      //0x0
        struct _KEVENT* Event;                                              //0x0
        VOID* Next;                                                         //0x0
        VOID* volatile VolatileNext;                                        //0x0
        struct _KTHREAD* KernelStackOwner;                                  //0x0
        struct _SINGLE_LIST_ENTRY NextStackPfn;                             //0x0
    } u1;                                                                   //0x0
    union
    {
        ULONG Blink:24;                                                     //0x4
        ULONG TbFlushStamp:4;                                               //0x4
        ULONG SpareBlink:3;                                                 //0x4
        struct _MMPTE* ImageProtoPte;                                       //0x4
        ULONG ShareCount;                                                   //0x4
    } u2;                                                                   //0x4
    union
    {
        struct _MMPTE* PteAddress;                                          //0x8
        VOID* volatile VolatilePteAddress;                                  //0x8
        volatile LONG Lock;                                                 //0x8
        ULONG PteLong;                                                      //0x8
    };
    union
    {
        struct
        {
            USHORT ReferenceCount;                                          //0xc
            struct _MMPFNENTRY e1;                                          //0xe
        };
        struct
        {
            union
            {
                USHORT ReferenceCount;                                      //0xc
                volatile SHORT VolatileReferenceCount;                      //0xc
            };
            union
            {
                USHORT ShortFlags;                                          //0xe
                volatile USHORT VolatileShortFlags;                         //0xe
            };
        } e2;                                                               //0xc
    } u3;                                                                   //0xc
    struct _MMPTE OriginalPte;                                              //0x10
    union
    {
        ULONG PteFrame:24;                                                  //0x18
        ULONG PageIdentity:3;                                               //0x18
        ULONG PrototypePte:1;                                               //0x18
        ULONG PageColor:4;                                                  //0x18
        ULONG EntireField;                                                  //0x18
    } u4;                                                                   //0x18
};
/* Used in */
// _COLORED_PAGE_INFO
// _MMINPAGE_SUPPORT

