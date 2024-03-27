#pragma once
/* ------------------ */

#include <_RTL_BALANCED_NODE.h>
#include <_MMCLONE_DESCRIPTOR.h>
#include <_MMCLONE_BLOCK.h>
#include <_MMCLONE_HEADER.h>

//0x50 bytes (sizeof)
struct _MMCLONE_DESCRIPTOR
{
    union
    {
        struct _RTL_BALANCED_NODE CloneNode;                                //0x0
        struct _MMCLONE_DESCRIPTOR* Next;                                   //0x0
    };
    struct _MMCLONE_BLOCK* StartingCloneBlock;                              //0x18
    struct _MMCLONE_BLOCK* EndingCloneBlock;                                //0x20
    ULONGLONG NumberOfPtes;                                                 //0x28
    volatile ULONGLONG NumberOfReferences;                                  //0x30
    struct _MMCLONE_HEADER* CloneHeader;                                    //0x38
    ULONGLONG NonPagedPoolQuotaCharge;                                      //0x40
    ULONGLONG NestingLevel;                                                 //0x48
};
/* Used in */
// _MMCLONE_DESCRIPTOR

