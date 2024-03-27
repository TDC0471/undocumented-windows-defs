#pragma once
/* ------------------ */

#include <_MMINPAGE_SUPPORT.h>
#include <_MMPAGING_FILE.h>
#include <_RTL_BALANCED_NODE.h>

//0x1c bytes (sizeof)
struct _MMINPAGE_SUPPORT_FLOW_THROUGH
{
    ULONG Page[1];                                                          //0x0
    struct _MMINPAGE_SUPPORT* InitialInPageSupport;                         //0x4
    struct _MMPAGING_FILE* PagingFile;                                      //0x8
    ULONG PageFileOffset;                                                   //0xc
    struct _RTL_BALANCED_NODE Node;                                         //0x10
};
/* Used in */
// _MMINPAGE_SUPPORT

