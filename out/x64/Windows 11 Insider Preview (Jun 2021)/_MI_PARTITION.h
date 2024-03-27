#pragma once
/* ------------------ */

#include <_MI_PARTITION_CORE.h>
#include <_MI_PARTITION_MODWRITES.h>
#include <_MI_PARTITION_STORES.h>
#include <_MI_PARTITION_SEGMENTS.h>
#include <_MI_PARTITION_PAGE_LISTS.h>
#include <_MI_PARTITION_COMMIT.h>
#include <_MI_PARTITION_ZEROING.h>
#include <_MI_PAGE_COMBINING_SUPPORT.h>
#include <_MMWORKING_SET_EXPANSION_HEAD.h>
#include <_MI_SPECIAL_PURPOSE_MEMORY_STATE.h>
#include <_MI_VISIBLE_PARTITION.h>

//0x53c0 bytes (sizeof)
struct _MI_PARTITION
{
    struct _MI_PARTITION_CORE Core;                                         //0x0
    struct _MI_PARTITION_MODWRITES Modwriter;                               //0x1d0
    struct _MI_PARTITION_STORES Store;                                      //0x490
    struct _MI_PARTITION_SEGMENTS Segments;                                 //0x540
    struct _MI_PARTITION_PAGE_LISTS PageLists;                              //0x980
    struct _MI_PARTITION_COMMIT Commit;                                     //0x3e80
    struct _MI_PARTITION_ZEROING Zeroing;                                   //0x3ec0
    struct _MI_PAGE_COMBINING_SUPPORT PageCombine;                          //0x3f48
    VOID* WorkingSetControl;                                                //0x40d8
    struct _MMWORKING_SET_EXPANSION_HEAD WorkingSetExpansionHead;           //0x40e0
    struct _MI_SPECIAL_PURPOSE_MEMORY_STATE SpecialPurposeMemory;           //0x40f0
    ULONG SessionDetachTimeStamp;                                           //0x4128
    struct _MI_VISIBLE_PARTITION Vp;                                        //0x4140
};
/* Used in */
// _MI_NODE_INFORMATION
// _MI_PAGE_COMBINING_SUPPORT
// _MI_PARTITION_STATE
// _MMCLONE_HEADER
// _MMMOD_WRITER_MDL_ENTRY
// _MMPAGE_FILE_EXPANSION
// _MMPAGING_FILE

