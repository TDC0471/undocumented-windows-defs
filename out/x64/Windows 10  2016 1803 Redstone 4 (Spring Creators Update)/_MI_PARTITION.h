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

//0x2cc0 bytes (sizeof)
struct _MI_PARTITION
{
    struct _MI_PARTITION_CORE Core;                                         //0x0
    struct _MI_PARTITION_MODWRITES Modwriter;                               //0x1a8
    struct _MI_PARTITION_STORES Store;                                      //0x470
    struct _MI_PARTITION_SEGMENTS Segments;                                 //0x500
    struct _MI_PARTITION_PAGE_LISTS PageLists;                              //0x840
    struct _MI_PARTITION_COMMIT Commit;                                     //0x1800
    struct _MI_PARTITION_ZEROING Zeroing;                                   //0x1880
    struct _MI_PAGE_COMBINING_SUPPORT PageCombine;                          //0x18e8
    VOID* WorkingSetControl;                                                //0x1a70
    struct _MMWORKING_SET_EXPANSION_HEAD WorkingSetExpansionHead;           //0x1a78
    struct _MI_VISIBLE_PARTITION Vp;                                        //0x1ac0
};
/* Used in */
// _MI_PAGE_COMBINING_SUPPORT
// _MI_PARTITION_STATE
// _MMCLONE_HEADER
// _MMMOD_WRITER_MDL_ENTRY
// _MMPAGE_FILE_EXPANSION
// _MMPAGING_FILE

