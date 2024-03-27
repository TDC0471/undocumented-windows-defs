#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x28 bytes (sizeof)
struct _PEB_LDR_DATA
{
    ULONG Length;                                                           //0x0
    UCHAR Initialized;                                                      //0x4
    VOID* SsHandle;                                                         //0x8
    struct _LIST_ENTRY InLoadOrderModuleList;                               //0xc
    struct _LIST_ENTRY InMemoryOrderModuleList;                             //0x14
    struct _LIST_ENTRY InInitializationOrderModuleList;                     //0x1c
    VOID* EntryInProgress;                                                  //0x24
};
/* Used in */
// _PEB

