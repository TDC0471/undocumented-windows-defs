#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_OB_HANDLE_REVOCATION_BLOCK.h>

//0x10 bytes (sizeof)
struct _OBJECT_HEADER_HANDLE_REVOCATION_INFO
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    struct _OB_HANDLE_REVOCATION_BLOCK* RevocationBlock;                    //0x8
    UCHAR Padding1[4];                                                      //0xc
};
