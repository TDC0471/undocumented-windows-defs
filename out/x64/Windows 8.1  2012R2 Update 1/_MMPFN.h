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
        ULONGLONG Flink:36;                                                 //0x0
        ULONGLONG NodeFlinkHigh:28;                                         //0x0
        ULONGLONG WsIndex;                                                  //0x0
        struct _KEVENT* Event;                                              //0x0
        VOID* Next;                                                         //0x0
        VOID* volatile VolatileNext;                                        //0x0
        struct _KTHREAD* KernelStackOwner;                                  //0x0
        struct _SINGLE_LIST_ENTRY NextStackPfn;                             //0x0
    } u1;                                                                   //0x0
    union
    {
        ULONGLONG Blink:36;                                                 //0x8
        ULONGLONG NodeBlinkHigh:20;                                         //0x8
        ULONGLONG TbFlushStamp:4;                                           //0x8
        ULONGLONG SpareBlink:4;                                             //0x8
        struct _MMPTE* ImageProtoPte;                                       //0x8
        ULONGLONG ShareCount;                                               //0x8
    } u2;                                                                   //0x8
    union
    {
        struct _MMPTE* PteAddress;                                          //0x10
        VOID* volatile VolatilePteAddress;                                  //0x10
        volatile LONG Lock;                                                 //0x10
        ULONGLONG PteLong;                                                  //0x10
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
            union
            {
                USHORT ShortFlags;                                          //0x1a
                volatile USHORT VolatileShortFlags;                         //0x1a
            };
        } e2;                                                               //0x18
    } u3;                                                                   //0x18
    USHORT NodeBlinkLow;                                                    //0x1c
    UCHAR Unused:4;                                                         //0x1e
    UCHAR VaType:4;                                                         //0x1e
    union
    {
        UCHAR ViewCount;                                                    //0x1f
        UCHAR NodeFlinkLow;                                                 //0x1f
    };
    struct _MMPTE OriginalPte;                                              //0x20
    union
    {
        ULONGLONG PteFrame:36;                                              //0x28
        ULONGLONG Channel:2;                                                //0x28
        ULONGLONG Unused1:1;                                                //0x28
        ULONGLONG Unused2:1;                                                //0x28
        ULONGLONG Unused3:13;                                               //0x28
        ULONGLONG PfnExists:1;                                              //0x28
        ULONGLONG PageIdentity:3;                                           //0x28
        ULONGLONG PrototypePte:1;                                           //0x28
        ULONGLONG PageColor:6;                                              //0x28
        ULONGLONG EntireField;                                              //0x28
    } u4;                                                                   //0x28
};
/* Used in */
// _COLORED_PAGE_INFO
// _MMINPAGE_SUPPORT

