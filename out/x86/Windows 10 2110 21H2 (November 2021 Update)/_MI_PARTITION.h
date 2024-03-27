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

//0x1b40 bytes (sizeof)
struct _MI_PARTITION
{
    struct _MI_PARTITION_CORE Core;                                         //0x0
    struct _MI_PARTITION_MODWRITES Modwriter;                               //0xe8
    struct _MI_PARTITION_STORES Store;                                      //0x2b8
    struct _MI_PARTITION_SEGMENTS Segments;                                 //0x340
    struct _MI_PARTITION_PAGE_LISTS PageLists;                              //0x540
    struct _MI_PARTITION_COMMIT Commit;                                     //0xd80
    struct _MI_PARTITION_ZEROING Zeroing;                                   //0xda4
    struct _MI_PAGE_COMBINING_SUPPORT PageCombine;                          //0xe20
    VOID* WorkingSetControl;                                                //0xf00
    struct _MMWORKING_SET_EXPANSION_HEAD WorkingSetExpansionHead;           //0xf04
    ULONG SessionDetachTimeStamp;                                           //0xf0c
    struct _MI_VISIBLE_PARTITION Vp;                                        //0xf40
};
/* Used in */
// _MI_PAGE_COMBINING_SUPPORT
// _MI_PARTITION_STATE
// _MMCLONE_HEADER
// _MMMOD_WRITER_MDL_ENTRY
// _MMPAGE_FILE_EXPANSION
// _MMPAGING_FILE

