#pragma once
/* ------------------ */

#include <_MMWSLE.h>
#include <_MMWSLE_HASH.h>

//0x80 bytes (sizeof)
struct _MMWSL
{
    ULONG FirstFree;                                                        //0x0
    ULONG FirstDynamic;                                                     //0x4
    ULONG LastEntry;                                                        //0x8
    ULONG NextSlot;                                                         //0xc
    struct _MMWSLE* Wsle;                                                   //0x10
    ULONG LastInitializedWsle;                                              //0x18
    ULONG NonDirectCount;                                                   //0x1c
    struct _MMWSLE_HASH* HashTable;                                         //0x20
    ULONG HashTableSize;                                                    //0x28
    ULONG NumberOfCommittedPageTables;                                      //0x2c
    VOID* HashTableStart;                                                   //0x30
    VOID* HighestPermittedHashAddress;                                      //0x38
    ULONG NumberOfImageWaiters;                                             //0x40
    ULONG VadBitMapHint;                                                    //0x44
    VOID* HighestUserAddress;                                               //0x48
    ULONG MaximumUserPageTablePages;                                        //0x50
    ULONG MaximumUserPageDirectoryPages;                                    //0x54
    ULONG* CommittedPageTables;                                             //0x58
    ULONG NumberOfCommittedPageDirectories;                                 //0x60
    ULONG* CommittedPageDirectories;                                        //0x68
    ULONG NumberOfCommittedPageDirectoryParents;                            //0x70
    ULONGLONG CommittedPageDirectoryParents[1];                             //0x78
};
/* Used in */
// _MMSUPPORT

