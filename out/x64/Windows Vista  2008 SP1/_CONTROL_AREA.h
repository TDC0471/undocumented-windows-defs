#pragma once
/* ------------------ */

#include <_SEGMENT.h>
#include <_LIST_ENTRY.h>
#include <_MMSECTION_FLAGS.h>
#include <_EX_FAST_REF.h>
#include <_MI_SECTION_CREATION_GATE.h>
#include <_MM_SUBSECTION_AVL_TABLE.h>
#include <_MI_IMAGE_SECURITY_REFERENCE.h>

//0x70 bytes (sizeof)
struct _CONTROL_AREA
{
    struct _SEGMENT* Segment;                                               //0x0
    struct _LIST_ENTRY DereferenceList;                                     //0x8
    ULONGLONG NumberOfSectionReferences;                                    //0x18
    ULONGLONG NumberOfPfnReferences;                                        //0x20
    ULONGLONG NumberOfMappedViews;                                          //0x28
    ULONGLONG NumberOfUserReferences;                                       //0x30
    union
    {
        ULONG LongFlags;                                                    //0x38
        struct _MMSECTION_FLAGS Flags;                                      //0x38
    } u;                                                                    //0x38
    union
    {
        struct
        {
            USHORT ModifiedWriteCount;                                      //0x3c
            USHORT FlushInProgressCount;                                    //0x3e
        } e2;                                                               //0x3c
    } u1;                                                                   //0x3c
    struct _EX_FAST_REF FilePointer;                                        //0x40
    volatile LONG ControlAreaLock;                                          //0x48
    ULONG StartingFrame;                                                    //0x4c
    struct _MI_SECTION_CREATION_GATE* WaitingForDeletion;                   //0x50
    union
    {
        struct
        {
            union
            {
                ULONG NumberOfSystemCacheViews;                             //0x58
                ULONG ImageRelocationStartBit;                              //0x58
            };
            union
            {
                volatile LONG WritableUserReferences;                       //0x5c
                struct
                {
                    ULONG ImageRelocationSizeIn64k:16;                      //0x5c
                    ULONG Unused:14;                                        //0x5c
                    ULONG BitMap64:1;                                       //0x5c
                    ULONG ImageActive:1;                                    //0x5c
                };
            };
            union
            {
                struct _MM_SUBSECTION_AVL_TABLE* SubsectionRoot;            //0x60
                struct _MI_IMAGE_SECURITY_REFERENCE* SeImageStub;           //0x60
            };
        } e2;                                                               //0x58
    } u2;                                                                   //0x58
    volatile LONGLONG LockedPages;                                          //0x68
};
/* Used in */
// _MAPPED_FILE_SEGMENT
// _MMMOD_WRITER_MDL_ENTRY
// _MMVIEW
// _MSUBSECTION
// _SEGMENT
// _SEGMENT_OBJECT
// _SUBSECTION
