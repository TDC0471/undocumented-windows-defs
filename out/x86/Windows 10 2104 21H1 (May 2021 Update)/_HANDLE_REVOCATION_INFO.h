#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_OB_HANDLE_REVOCATION_BLOCK.h>

//0x10 bytes (sizeof)
struct _HANDLE_REVOCATION_INFO
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    struct _OB_HANDLE_REVOCATION_BLOCK* RevocationBlock;                    //0x8
    UCHAR AllowHandleRevocation;                                            //0xc
    UCHAR Padding1[3];                                                      //0xd
};
/* Used in */
// _OBJECT_FOOTER

