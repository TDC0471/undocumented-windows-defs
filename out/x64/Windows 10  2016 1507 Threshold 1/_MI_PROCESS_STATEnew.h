#pragma once
/* ------------------ */

#include <_KEVENT.h>
#include <_SLIST_HEADER.h>
#include <_LARGE_INTEGER.h>
#include <_LIST_ENTRY.h>
#include <_MMPTE.h>

//0x60 bytes (sizeof)
struct _MI_PROCESS_STATE
{
    ULONG ColorSeed;                                                        //0x0
    struct _KEVENT CloneDereferenceEvent;                                   //0x8
    union _SLIST_HEADER CloneProtosSListHead;                               //0x20
    VOID* SystemDllBase;                                                    //0x30
    LONG RotatingUniprocessorNumber;                                        //0x38
    union _LARGE_INTEGER CriticalSectionTimeout;                            //0x40
    struct _LIST_ENTRY ProcessList;                                         //0x48
    struct _MMPTE* SharedUserDataPte;                                       //0x58
};
/* Used in */
// _MI_SYSTEM_INFORMATION

