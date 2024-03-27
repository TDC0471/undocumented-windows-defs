#pragma once
/* ------------------ */

#include <_MMWSLE.h>
#include <_MMWSLE_HASH.h>

//0x698 bytes (sizeof)
struct _MMWSL
{
    ULONG FirstFree;                                                        //0x0
    ULONG FirstDynamic;                                                     //0x4
    ULONG LastEntry;                                                        //0x8
    ULONG NextSlot;                                                         //0xc
    struct _MMWSLE* Wsle;                                                   //0x10
    ULONG LastInitializedWsle;                                              //0x14
    ULONG NonDirectCount;                                                   //0x18
    struct _MMWSLE_HASH* HashTable;                                         //0x1c
    ULONG HashTableSize;                                                    //0x20
    ULONG NumberOfCommittedPageTables;                                      //0x24
    VOID* HashTableStart;                                                   //0x28
    VOID* HighestPermittedHashAddress;                                      //0x2c
    ULONG NumberOfImageWaiters;                                             //0x30
    ULONG VadBitMapHint;                                                    //0x34
    USHORT UsedPageTableEntries[768];                                       //0x38
    ULONG CommittedPageTables[24];                                          //0x638
};
/* Used in */
// _MMSUPPORT

