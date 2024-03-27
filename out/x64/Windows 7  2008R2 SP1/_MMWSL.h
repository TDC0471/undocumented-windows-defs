#pragma once
/* ------------------ */

#include <_MMWSLE.h>
#include <_MMWSLE_NONDIRECT_HASH.h>
#include <_MMWSLE_HASH.h>

//0x488 bytes (sizeof)
struct _MMWSL
{
    ULONG FirstFree;                                                        //0x0
    ULONG FirstDynamic;                                                     //0x4
    ULONG LastEntry;                                                        //0x8
    ULONG NextSlot;                                                         //0xc
    struct _MMWSLE* Wsle;                                                   //0x10
    VOID* LowestPagableAddress;                                             //0x18
    ULONG LastInitializedWsle;                                              //0x20
    ULONG NextAgingSlot;                                                    //0x24
    ULONG NumberOfCommittedPageTables;                                      //0x28
    ULONG VadBitMapHint;                                                    //0x2c
    ULONG NonDirectCount;                                                   //0x30
    ULONG LastVadBit;                                                       //0x34
    ULONG MaximumLastVadBit;                                                //0x38
    ULONG LastAllocationSizeHint;                                           //0x3c
    ULONG LastAllocationSize;                                               //0x40
    struct _MMWSLE_NONDIRECT_HASH* NonDirectHash;                           //0x48
    struct _MMWSLE_HASH* HashTableStart;                                    //0x50
    struct _MMWSLE_HASH* HighestPermittedHashAddress;                       //0x58
    ULONG MaximumUserPageTablePages;                                        //0x60
    ULONG MaximumUserPageDirectoryPages;                                    //0x64
    ULONG* CommittedPageTables;                                             //0x68
    ULONG NumberOfCommittedPageDirectories;                                 //0x70
    ULONGLONG CommittedPageDirectories[128];                                //0x78
    ULONG NumberOfCommittedPageDirectoryParents;                            //0x478
    ULONGLONG CommittedPageDirectoryParents[1];                             //0x480
};
/* Used in */
// _MMSUPPORT

