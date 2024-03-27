#pragma once
/* ------------------ */

#include <_SEGMENT.h>
#include <_LIST_ENTRY.h>
#include <_MMSECTION_FLAGS.h>
#include <_FILE_OBJECT.h>
#include <_EVENT_COUNTER.h>

//0x40 bytes (sizeof)
struct _LARGE_CONTROL_AREA
{
    struct _SEGMENT* Segment;                                               //0x0
    struct _LIST_ENTRY DereferenceList;                                     //0x4
    ULONG NumberOfSectionReferences;                                        //0xc
    ULONG NumberOfPfnReferences;                                            //0x10
    ULONG NumberOfMappedViews;                                              //0x14
    USHORT NumberOfSubsections;                                             //0x18
    USHORT FlushInProgressCount;                                            //0x1a
    ULONG NumberOfUserReferences;                                           //0x1c
    union
    {
        ULONG LongFlags;                                                    //0x20
        struct _MMSECTION_FLAGS Flags;                                      //0x20
    } u;                                                                    //0x20
    struct _FILE_OBJECT* FilePointer;                                       //0x24
    struct _EVENT_COUNTER* WaitingForDeletion;                              //0x28
    USHORT ModifiedWriteCount;                                              //0x2c
    USHORT NumberOfSystemCacheViews;                                        //0x2e
    ULONG StartingFrame;                                                    //0x30
    struct _LIST_ENTRY UserGlobalList;                                      //0x34
    ULONG SessionId;                                                        //0x3c
};
/* Used in */
// _SEGMENT_OBJECT

