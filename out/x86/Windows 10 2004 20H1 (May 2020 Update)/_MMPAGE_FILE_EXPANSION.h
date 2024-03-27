#pragma once
/* ------------------ */

#include <_SEGMENT.h>
#include <_LIST_ENTRY.h>
#include <_MI_PARTITION.h>
#include <_KEVENT.h>
#include <_MMPAGE_FILE_EXPANSION_FLAGS.h>

//0x34 bytes (sizeof)
struct _MMPAGE_FILE_EXPANSION
{
    struct _SEGMENT* Segment;                                               //0x0
    struct _LIST_ENTRY DereferenceList;                                     //0x4
    struct _MI_PARTITION* Partition;                                        //0xc
    ULONG RequestedExpansionSize;                                           //0x10
    ULONG ActualExpansion;                                                  //0x14
    struct _KEVENT Event;                                                   //0x18
    volatile LONG InProgress;                                               //0x28
    union
    {
        ULONG LongFlags;                                                    //0x2c
        struct _MMPAGE_FILE_EXPANSION_FLAGS Flags;                          //0x2c
    } u1;                                                                   //0x2c
    VOID** volatile ActiveEntry;                                            //0x30
};
/* Used in */
// _MI_PARTITION_MODWRITES
// _MI_PARTITION_SEGMENTS

