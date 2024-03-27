#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_MDL.h>

//0x30 bytes (sizeof)
struct _PTE_TRACKER
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    struct _MDL* Mdl;                                                       //0x8
    ULONG Count;                                                            //0xc
    VOID* SystemVa;                                                         //0x10
    VOID* StartVa;                                                          //0x14
    ULONG Offset;                                                           //0x18
    ULONG Length;                                                           //0x1c
    ULONG Page;                                                             //0x20
    ULONG IoMapping:1;                                                      //0x24
    ULONG Matched:1;                                                        //0x24
    ULONG CacheAttribute:2;                                                 //0x24
    ULONG Spare:28;                                                         //0x24
    VOID* CallingAddress;                                                   //0x28
    VOID* CallersCaller;                                                    //0x2c
};
