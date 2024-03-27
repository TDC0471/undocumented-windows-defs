#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_LDR_SERVICE_TAG_RECORD.h>
#include <_LDRP_CSLIST.h>
#include <_SINGLE_LIST_ENTRY.h>
#include <_LDR_DDAG_STATE.h>

//0x30 bytes (sizeof)
struct _LDR_DDAG_NODE
{
    struct _LIST_ENTRY Modules;                                             //0x0
    struct _LDR_SERVICE_TAG_RECORD* ServiceTagList;                         //0x8
    ULONG LoadCount;                                                        //0xc
    ULONG ReferenceCount;                                                   //0x10
    ULONG DependencyCount;                                                  //0x14
    union
    {
        struct _LDRP_CSLIST Dependencies;                                   //0x18
        struct _SINGLE_LIST_ENTRY RemovalLink;                              //0x18
    };
    struct _LDRP_CSLIST IncomingDependencies;                               //0x1c
    enum _LDR_DDAG_STATE State;                                             //0x20
    struct _SINGLE_LIST_ENTRY CondenseLink;                                 //0x24
    ULONG PreorderNumber;                                                   //0x28
    ULONG LowestLink;                                                       //0x2c
};
/* Used in */
// _LDR_DATA_TABLE_ENTRY

