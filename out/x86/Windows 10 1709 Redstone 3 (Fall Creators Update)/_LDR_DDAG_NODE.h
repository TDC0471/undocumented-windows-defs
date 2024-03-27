#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_LDR_SERVICE_TAG_RECORD.h>
#include <_LDRP_CSLIST.h>
#include <_LDR_DDAG_STATE.h>
#include <_SINGLE_LIST_ENTRY.h>

//0x2c bytes (sizeof)
struct _LDR_DDAG_NODE
{
    struct _LIST_ENTRY Modules;                                             //0x0
    struct _LDR_SERVICE_TAG_RECORD* ServiceTagList;                         //0x8
    ULONG LoadCount;                                                        //0xc
    ULONG LoadWhileUnloadingCount;                                          //0x10
    ULONG LowestLink;                                                       //0x14
    struct _LDRP_CSLIST Dependencies;                                       //0x18
    struct _LDRP_CSLIST IncomingDependencies;                               //0x1c
    enum _LDR_DDAG_STATE State;                                             //0x20
    struct _SINGLE_LIST_ENTRY CondenseLink;                                 //0x24
    ULONG PreorderNumber;                                                   //0x28
};
/* Used in */
// _LDR_DATA_TABLE_ENTRY

