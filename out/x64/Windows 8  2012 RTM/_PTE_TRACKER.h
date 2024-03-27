#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_MDL.h>

//0x80 bytes (sizeof)
struct _PTE_TRACKER
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    struct _MDL* Mdl;                                                       //0x10
    ULONGLONG Count;                                                        //0x18
    VOID* SystemVa;                                                         //0x20
    VOID* StartVa;                                                          //0x28
    ULONG Offset;                                                           //0x30
    ULONG Length;                                                           //0x34
    ULONGLONG Page;                                                         //0x38
    ULONG IoMapping:1;                                                      //0x40
    ULONG Matched:1;                                                        //0x40
    ULONG CacheAttribute:2;                                                 //0x40
    ULONG Spare:28;                                                         //0x40
    VOID* StackTrace[7];                                                    //0x48
};
