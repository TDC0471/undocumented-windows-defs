#pragma once
/* ------------------ */

#include <_MMWSLE.h>
#include <_MMWSLE_HASH.h>

//0x69c bytes (sizeof)
struct _MMWSL
{
    ULONG Quota;                                                            //0x0
    ULONG FirstFree;                                                        //0x4
    ULONG FirstDynamic;                                                     //0x8
    ULONG LastEntry;                                                        //0xc
    ULONG NextSlot;                                                         //0x10
    struct _MMWSLE* Wsle;                                                   //0x14
    ULONG LastInitializedWsle;                                              //0x18
    ULONG NonDirectCount;                                                   //0x1c
    struct _MMWSLE_HASH* HashTable;                                         //0x20
    ULONG HashTableSize;                                                    //0x24
    ULONG NumberOfCommittedPageTables;                                      //0x28
    VOID* HashTableStart;                                                   //0x2c
    VOID* HighestPermittedHashAddress;                                      //0x30
    ULONG NumberOfImageWaiters;                                             //0x34
    ULONG VadBitMapHint;                                                    //0x38
    USHORT UsedPageTableEntries[768];                                       //0x3c
    ULONG CommittedPageTables[24];                                          //0x63c
};
/* Used in */
// _MMSUPPORT

