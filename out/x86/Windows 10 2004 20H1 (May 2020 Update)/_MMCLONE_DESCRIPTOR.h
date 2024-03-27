#pragma once
/* ------------------ */

#include <_RTL_BALANCED_NODE.h>
#include <_MMCLONE_DESCRIPTOR.h>
#include <_MMCLONE_BLOCK.h>
#include <_MMCLONE_HEADER.h>
#include <_SINGLE_LIST_ENTRY.h>

//0x30 bytes (sizeof)
struct _MMCLONE_DESCRIPTOR
{
    union
    {
        struct _RTL_BALANCED_NODE CloneNode;                                //0x0
        struct _MMCLONE_DESCRIPTOR* Next;                                   //0x0
    };
    struct _MMCLONE_BLOCK* StartingCloneBlock;                              //0xc
    struct _MMCLONE_BLOCK* EndingCloneBlock;                                //0x10
    ULONG NumberOfPtes;                                                     //0x14
    volatile ULONG NumberOfReferences;                                      //0x18
    struct _MMCLONE_HEADER* CloneHeader;                                    //0x1c
    ULONG NonPagedPoolQuotaCharge;                                          //0x20
    struct _SINGLE_LIST_ENTRY DeleteList;                                   //0x24
    ULONGLONG NestingLevel;                                                 //0x28
};
/* Used in */
// _MMCLONE_DESCRIPTOR

