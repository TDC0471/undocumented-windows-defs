#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0xc bytes (sizeof)
struct _RTL_DYNAMIC_HASH_TABLE_CONTEXT
{
    struct _LIST_ENTRY* ChainHead;                                          //0x0
    struct _LIST_ENTRY* PrevLinkage;                                        //0x4
    ULONG Signature;                                                        //0x8
};
