#pragma once
/* ------------------ */

#include <_SEGMENT.h>
#include <_LIST_ENTRY.h>
#include <_MI_PARTITION.h>
#include <_KEVENT.h>
#include <_MMPAGE_FILE_EXPANSION_FLAGS.h>

//0x58 bytes (sizeof)
struct _MMPAGE_FILE_EXPANSION
{
    struct _SEGMENT* Segment;                                               //0x0
    struct _LIST_ENTRY DereferenceList;                                     //0x8
    struct _MI_PARTITION* Partition;                                        //0x18
    ULONGLONG RequestedExpansionSize;                                       //0x20
    ULONGLONG ActualExpansion;                                              //0x28
    struct _KEVENT Event;                                                   //0x30
    volatile LONG InProgress;                                               //0x48
    union
    {
        ULONG LongFlags;                                                    //0x4c
        struct _MMPAGE_FILE_EXPANSION_FLAGS Flags;                          //0x4c
    } u1;                                                                   //0x4c
    VOID** volatile ActiveEntry;                                            //0x50
};
/* Used in */
// _MI_PARTITION_MODWRITES
// _MI_PARTITION_SEGMENTS

