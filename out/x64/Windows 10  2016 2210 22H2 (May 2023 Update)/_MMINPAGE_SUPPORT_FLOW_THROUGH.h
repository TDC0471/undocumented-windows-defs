#pragma once
/* ------------------ */

#include <_MMINPAGE_SUPPORT.h>
#include <_MMPAGING_FILE.h>
#include <_RTL_BALANCED_NODE.h>

//0x38 bytes (sizeof)
struct _MMINPAGE_SUPPORT_FLOW_THROUGH
{
    ULONGLONG Page[1];                                                      //0x0
    struct _MMINPAGE_SUPPORT* InitialInPageSupport;                         //0x8
    struct _MMPAGING_FILE* PagingFile;                                      //0x10
    ULONGLONG PageFileOffset;                                               //0x18
    struct _RTL_BALANCED_NODE Node;                                         //0x20
};
/* Used in */
// _MMINPAGE_SUPPORT

