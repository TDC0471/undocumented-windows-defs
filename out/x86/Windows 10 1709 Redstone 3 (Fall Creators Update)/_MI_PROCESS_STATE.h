#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>
#include <_LIST_ENTRY.h>
#include <_MMPTE.h>
#include <_PAE_ENTRY.h>
#include <_SLIST_HEADER.h>

//0x60 bytes (sizeof)
struct _MI_PROCESS_STATE
{
    VOID* SystemDllBase;                                                    //0x0
    ULONG ColorSeed;                                                        //0x4
    LONG RotatingUniprocessorNumber;                                        //0x8
    union _LARGE_INTEGER CriticalSectionTimeout;                            //0x10
    struct _LIST_ENTRY ProcessList;                                         //0x18
    struct _MMPTE* SharedUserDataPte;                                       //0x20
    ULONG VadSecureCookie;                                                  //0x24
    ULONG FreePaeEntries;                                                   //0x28
    struct _PAE_ENTRY FirstFreePae;                                         //0x30
    volatile LONG AllocatedPaePages;                                        //0x50
    ULONG PaeLock;                                                          //0x54
    union _SLIST_HEADER PaeEntrySList;                                      //0x58
};
/* Used in */
// _MI_SYSTEM_INFORMATION

