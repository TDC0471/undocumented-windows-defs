#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_OB_HANDLE_REVOCATION_BLOCK.h>

//0x20 bytes (sizeof)
struct _HANDLE_REVOCATION_INFO
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    struct _OB_HANDLE_REVOCATION_BLOCK* RevocationBlock;                    //0x10
    UCHAR AllowHandleRevocation;                                            //0x18
    UCHAR Padding1[3];                                                      //0x19
    UCHAR Padding2[4];                                                      //0x1c
};
/* Used in */
// _OBJECT_FOOTER

