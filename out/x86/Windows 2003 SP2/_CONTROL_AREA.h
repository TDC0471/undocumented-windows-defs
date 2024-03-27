#pragma once
/* ------------------ */

#include <_SEGMENT.h>
#include <_LIST_ENTRY.h>
#include <_MMSECTION_FLAGS.h>
#include <_FILE_OBJECT.h>
#include <_EVENT_COUNTER.h>

//0x38 bytes (sizeof)
struct _CONTROL_AREA
{
    struct _SEGMENT* Segment;                                               //0x0
    struct _LIST_ENTRY DereferenceList;                                     //0x4
    ULONG NumberOfSectionReferences;                                        //0xc
    ULONG NumberOfPfnReferences;                                            //0x10
    ULONG NumberOfMappedViews;                                              //0x14
    ULONG NumberOfSystemCacheViews;                                         //0x18
    ULONG NumberOfUserReferences;                                           //0x1c
    union
    {
        ULONG LongFlags;                                                    //0x20
        struct _MMSECTION_FLAGS Flags;                                      //0x20
    } u;                                                                    //0x20
    struct _FILE_OBJECT* FilePointer;                                       //0x24
    struct _EVENT_COUNTER* WaitingForDeletion;                              //0x28
    USHORT ModifiedWriteCount;                                              //0x2c
    USHORT FlushInProgressCount;                                            //0x2e
    ULONG WritableUserReferences;                                           //0x30
    ULONG QuadwordPad;                                                      //0x34
};
/* Used in */
// _MMMOD_WRITER_MDL_ENTRY
// _MMVAD
// _MMVAD_LONG
// _MMVIEW
// _SEGMENT
// _SEGMENT_OBJECT
// _SUBSECTION

