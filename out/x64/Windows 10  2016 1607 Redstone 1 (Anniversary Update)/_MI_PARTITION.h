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

//0x2780 bytes (sizeof)
struct _MI_PARTITION
{
    struct _MI_PARTITION_CORE Core;                                         //0x0
    struct _MI_PARTITION_MODWRITES Modwriter;                               //0x160
    struct _MI_PARTITION_STORES Store;                                      //0x430
    struct _MI_PARTITION_SEGMENTS Segments;                                 //0x4c0
    struct _MI_PARTITION_PAGE_LISTS PageLists;                              //0x640
    struct _MI_PARTITION_COMMIT Commit;                                     //0x1180
    struct _MI_PARTITION_ZEROING Zeroing;                                   //0x1200
    struct _MI_PAGE_COMBINING_SUPPORT PageCombine;                          //0x1260
    VOID* WorkingSetControl;                                                //0x13e8
    struct _MMWORKING_SET_EXPANSION_HEAD WorkingSetExpansionHead;           //0x13f0
    struct _MI_VISIBLE_PARTITION Vp;                                        //0x1400
};
/* Used in */
// _MI_PAGE_COMBINING_SUPPORT
// _MI_PARTITION_CORE
// _MI_PARTITION_STATE
// _MMMOD_WRITER_MDL_ENTRY
// _MMPAGE_FILE_EXPANSION
// _MMPAGING_FILE

