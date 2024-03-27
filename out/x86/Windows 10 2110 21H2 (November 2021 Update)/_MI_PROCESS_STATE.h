#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>
#include <_LIST_ENTRY.h>
#include <_MMPTE.h>
#include <_PAE_ENTRY.h>
#include <_SLIST_HEADER.h>

//0x68 bytes (sizeof)
struct _MI_PROCESS_STATE
{
    VOID* SystemDllBase;                                                    //0x0
    ULONG ColorSeed;                                                        //0x4
    LONG RotatingUniprocessorNumber;                                        //0x8
    union _LARGE_INTEGER CriticalSectionTimeout;                            //0x10
    struct _LIST_ENTRY ProcessList;                                         //0x18
    struct _MMPTE* SharedUserDataPte[2];                                    //0x20
    VOID* HypervisorSharedVa;                                               //0x28
    ULONG VadSecureCookie;                                                  //0x2c
    ULONG PaeGroups;                                                        //0x30
    ULONG FreePaeEntries;                                                   //0x34
    struct _PAE_ENTRY FirstFreePae;                                         //0x38
    volatile LONG AllocatedPaePages;                                        //0x58
    ULONG PaeLock;                                                          //0x5c
    union _SLIST_HEADER PaeEntrySList;                                      //0x60
};
/* Used in */
// _MI_SYSTEM_INFORMATION

