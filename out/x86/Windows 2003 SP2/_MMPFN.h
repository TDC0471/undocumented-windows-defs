#pragma once
/* ------------------ */

#include <_KEVENT.h>
#include <_SINGLE_LIST_ENTRY.h>
#include <_MMPTE.h>
#include <_MMPFNENTRY.h>

//0x18 bytes (sizeof)
struct _MMPFN
{
    union
    {
        ULONG Flink;                                                        //0x0
        ULONG WsIndex;                                                      //0x0
        struct _KEVENT* Event;                                              //0x0
        LONG ReadStatus;                                                    //0x0
        struct _SINGLE_LIST_ENTRY NextStackPfn;                             //0x0
    } u1;                                                                   //0x0
    struct _MMPTE* PteAddress;                                              //0x4
    union
    {
        ULONG Blink;                                                        //0x8
        ULONG ShareCount;                                                   //0x8
    } u2;                                                                   //0x8
    union
    {
        struct
        {
            USHORT ReferenceCount;                                          //0xc
            struct _MMPFNENTRY e1;                                          //0xe
        };
        struct
        {
            USHORT ReferenceCount;                                          //0xc
            USHORT ShortFlags;                                              //0xe
        } e2;                                                               //0xc
    } u3;                                                                   //0xc
    union
    {
        struct _MMPTE OriginalPte;                                          //0x10
        LONG AweReferenceCount;                                             //0x10
    };
    union
    {
        ULONG EntireFrame;                                                  //0x14
        ULONG PteFrame:25;                                                  //0x14
        ULONG InPageError:1;                                                //0x14
        ULONG VerifierAllocation:1;                                         //0x14
        ULONG AweAllocation:1;                                              //0x14
        ULONG Priority:3;                                                   //0x14
        ULONG MustBeCached:1;                                               //0x14
    } u4;                                                                   //0x14
};
