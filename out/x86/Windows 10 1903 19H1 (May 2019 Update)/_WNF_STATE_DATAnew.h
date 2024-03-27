#pragma once
/* ------------------ */

#include <_WNF_NODE_HEADER.h>

//0x10 bytes (sizeof)
struct _WNF_STATE_DATA
{
    struct _WNF_NODE_HEADER Header;                                         //0x0
    ULONG AllocatedSize;                                                    //0x4
    ULONG DataSize;                                                         //0x8
    ULONG ChangeStamp;                                                      //0xc
};
/* Used in */
// _WNF_NAME_INSTANCE

