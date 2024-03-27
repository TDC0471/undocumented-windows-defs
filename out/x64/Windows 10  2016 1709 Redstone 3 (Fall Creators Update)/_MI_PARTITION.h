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
#include <_MI_VISIBLE_PARTITION.h>

//0x2880 bytes (sizeof)
struct _MI_PARTITION
{
    struct _MI_PARTITION_CORE Core;                                         //0x0
    struct _MI_PARTITION_MODWRITES Modwriter;                               //0x1a8
    struct _MI_PARTITION_STORES Store;                                      //0x470
    struct _MI_PARTITION_SEGMENTS Segments;                                 //0x500
    struct _MI_PARTITION_PAGE_LISTS PageLists;                              //0x800
    struct _MI_PARTITION_COMMIT Commit;                                     //0x13c0
    struct _MI_PARTITION_ZEROING Zeroing;                                   //0x1440
    struct _MI_PAGE_COMBINING_SUPPORT PageCombine;                          //0x14a8
    VOID* WorkingSetControl;                                                //0x1630
    struct _MMWORKING_SET_EXPANSION_HEAD WorkingSetExpansionHead;           //0x1638
    struct _MI_VISIBLE_PARTITION Vp;                                        //0x1680
};
/* Used in */
// _MI_PAGE_COMBINING_SUPPORT
// _MI_PARTITION_STATE
// _MMCLONE_HEADER
// _MMMOD_WRITER_MDL_ENTRY
// _MMPAGE_FILE_EXPANSION
// _MMPAGING_FILE

