#pragma once
/* ------------------ */

#include <_SEGMENT.h>
#include <_LIST_ENTRY.h>
#include <_MMSECTION_FLAGS.h>
#include <_FILE_OBJECT.h>
#include <_EVENT_COUNTER.h>

//0x68 bytes (sizeof)
struct _LARGE_CONTROL_AREA
{
    struct _SEGMENT* Segment;                                               //0x0
    struct _LIST_ENTRY DereferenceList;                                     //0x8
    ULONG NumberOfSectionReferences;                                        //0x18
    ULONG NumberOfPfnReferences;                                            //0x1c
    ULONG NumberOfMappedViews;                                              //0x20
    ULONG NumberOfSystemCacheViews;                                         //0x24
    ULONG NumberOfUserReferences;                                           //0x28
    union
    {
        ULONG LongFlags;                                                    //0x2c
        struct _MMSECTION_FLAGS Flags;                                      //0x2c
    } u;                                                                    //0x2c
    struct _FILE_OBJECT* FilePointer;                                       //0x30
    struct _EVENT_COUNTER* WaitingForDeletion;                              //0x38
    USHORT ModifiedWriteCount;                                              //0x40
    USHORT FlushInProgressCount;                                            //0x42
    ULONG WritableUserReferences;                                           //0x44
    ULONGLONG StartingFrame;                                                //0x48
    struct _LIST_ENTRY UserGlobalList;                                      //0x50
    ULONG SessionId;                                                        //0x60
};
/* Used in */
// _SEGMENT_OBJECT

