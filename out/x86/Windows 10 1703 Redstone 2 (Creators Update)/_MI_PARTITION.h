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

//0x1a00 bytes (sizeof)
struct _MI_PARTITION
{
    struct _MI_PARTITION_CORE Core;                                         //0x0
    struct _MI_PARTITION_MODWRITES Modwriter;                               //0xf8
    struct _MI_PARTITION_STORES Store;                                      //0x2c8
    struct _MI_PARTITION_SEGMENTS Segments;                                 //0x340
    struct _MI_PARTITION_PAGE_LISTS PageLists;                              //0x440
    struct _MI_PARTITION_COMMIT Commit;                                     //0xc00
    struct _MI_PARTITION_ZEROING Zeroing;                                   //0xc80
    struct _MI_PAGE_COMBINING_SUPPORT PageCombine;                          //0xcc0
    VOID* WorkingSetControl;                                                //0xd98
    struct _MMWORKING_SET_EXPANSION_HEAD WorkingSetExpansionHead;           //0xd9c
    struct _MI_VISIBLE_PARTITION Vp;                                        //0xdc0
};
/* Used in */
// _MI_PAGE_COMBINING_SUPPORT
// _MI_PARTITION_CORE
// _MI_PARTITION_STATE
// _MMMOD_WRITER_MDL_ENTRY
// _MMPAGE_FILE_EXPANSION
// _MMPAGING_FILE

