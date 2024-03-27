#pragma once
/* ------------------ */

#include <_SEGMENT.h>
#include <_LIST_ENTRY.h>
#include <_MMSECTION_FLAGS.h>
#include <_FILE_OBJECT.h>
#include <_EVENT_COUNTER.h>

//0x30 bytes (sizeof)
struct _CONTROL_AREA
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
};
/* Used in */
// _MMMOD_WRITER_MDL_ENTRY
// _MMVAD
// _MMVAD_LONG
// _MMVIEW
// _SEGMENT
// _SEGMENT_OBJECT
// _SUBSECTION

