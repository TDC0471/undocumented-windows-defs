#pragma once
/* ------------------ */

#include <_KEVENT.h>
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
        LONG ReadStatus;                                                    //0x0
        struct _SINGLE_LIST_ENTRY NextStackPfn;                             //0x0
    } u1;                                                                   //0x0
    struct _MMPTE* PteAddress;                                              //0x8
    union
    {
        ULONGLONG Blink;                                                    //0x10
        ULONGLONG ShareCount;                                               //0x10
    } u2;                                                                   //0x10
    union
    {
        struct
        {
            USHORT ReferenceCount;                                          //0x18
            struct _MMPFNENTRY e1;                                          //0x1a
        };
        struct
        {
            USHORT ReferenceCount;                                          //0x18
            USHORT ShortFlags;                                              //0x1a
        } e2;                                                               //0x18
    } u3;                                                                   //0x18
    ULONG UsedPageTableEntries;                                             //0x1c
    union
    {
        struct _MMPTE OriginalPte;                                          //0x20
        LONG AweReferenceCount;                                             //0x20
    };
    union
    {
        ULONGLONG EntireFrame;                                              //0x28
        ULONGLONG PteFrame:57;                                              //0x28
        ULONGLONG InPageError:1;                                            //0x28
        ULONGLONG VerifierAllocation:1;                                     //0x28
        ULONGLONG AweAllocation:1;                                          //0x28
        ULONGLONG Priority:3;                                               //0x28
        ULONGLONG MustBeCached:1;                                           //0x28
    } u4;                                                                   //0x28
};
