#pragma once
/* ------------------ */

#include <_KEVENT.h>
#include <_SLIST_HEADER.h>
#include <_LARGE_INTEGER.h>
#include <_LIST_ENTRY.h>
#include <_MMPTE.h>
#include <_PAE_ENTRY.h>

//0x70 bytes (sizeof)
struct _MI_PROCESS_STATE
{
    ULONG ColorSeed;                                                        //0x0
    struct _KEVENT CloneDereferenceEvent;                                   //0x4
    union _SLIST_HEADER CloneProtosSListHead;                               //0x18
    VOID* SystemDllBase;                                                    //0x20
    LONG RotatingUniprocessorNumber;                                        //0x24
    union _LARGE_INTEGER CriticalSectionTimeout;                            //0x28
    struct _LIST_ENTRY ProcessList;                                         //0x30
    struct _MMPTE* SharedUserDataPte;                                       //0x38
    ULONG FreePaeEntries;                                                   //0x3c
    struct _PAE_ENTRY FirstFreePae;                                         //0x40
    volatile LONG AllocatedPaePages;                                        //0x60
    ULONG PaeLock;                                                          //0x64
    union _SLIST_HEADER PaeEntrySList;                                      //0x68
};
/* Used in */
// _MI_SYSTEM_INFORMATION

