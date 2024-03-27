#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x18 bytes (sizeof)
struct _RTL_DYNAMIC_HASH_TABLE_CONTEXT
{
    struct _LIST_ENTRY* ChainHead;                                          //0x0
    struct _LIST_ENTRY* PrevLinkage;                                        //0x8
    ULONGLONG Signature;                                                    //0x10
};
