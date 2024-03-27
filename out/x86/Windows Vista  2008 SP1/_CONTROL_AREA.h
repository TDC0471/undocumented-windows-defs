#pragma once
/* ------------------ */

#include <_SEGMENT.h>
#include <_LIST_ENTRY.h>
#include <_MMSECTION_FLAGS.h>
#include <_EX_FAST_REF.h>
#include <_MI_SECTION_CREATION_GATE.h>
#include <_MM_SUBSECTION_AVL_TABLE.h>
#include <_MI_IMAGE_SECURITY_REFERENCE.h>

//0x48 bytes (sizeof)
struct _CONTROL_AREA
{
    struct _SEGMENT* Segment;                                               //0x0
    struct _LIST_ENTRY DereferenceList;                                     //0x4
    ULONG NumberOfSectionReferences;                                        //0xc
    ULONG NumberOfPfnReferences;                                            //0x10
    ULONG NumberOfMappedViews;                                              //0x14
    ULONG NumberOfUserReferences;                                           //0x18
    union
    {
        ULONG LongFlags;                                                    //0x1c
        struct _MMSECTION_FLAGS Flags;                                      //0x1c
    } u;                                                                    //0x1c
    union
    {
        struct
        {
            USHORT ModifiedWriteCount;                                      //0x20
            USHORT FlushInProgressCount;                                    //0x22
        } e2;                                                               //0x20
    } u1;                                                                   //0x20
    struct _EX_FAST_REF FilePointer;                                        //0x24
    volatile LONG ControlAreaLock;                                          //0x28
    ULONG StartingFrame;                                                    //0x2c
    struct _MI_SECTION_CREATION_GATE* WaitingForDeletion;                   //0x30
    union
    {
        struct
        {
            union
            {
                ULONG NumberOfSystemCacheViews;                             //0x34
                ULONG ImageRelocationStartBit;                              //0x34
            };
            union
            {
                volatile LONG WritableUserReferences;                       //0x38
                struct
                {
                    ULONG ImageRelocationSizeIn64k:16;                      //0x38
                    ULONG Unused:14;                                        //0x38
                    ULONG BitMap64:1;                                       //0x38
                    ULONG ImageActive:1;                                    //0x38
                };
            };
            union
            {
                struct _MM_SUBSECTION_AVL_TABLE* SubsectionRoot;            //0x3c
                struct _MI_IMAGE_SECURITY_REFERENCE* SeImageStub;           //0x3c
            };
        } e2;                                                               //0x34
    } u2;                                                                   //0x34
    volatile LONGLONG LockedPages;                                          //0x40
};
/* Used in */
// _MAPPED_FILE_SEGMENT
// _MMMOD_WRITER_MDL_ENTRY
// _MMVIEW
// _MSUBSECTION
// _SEGMENT
// _SEGMENT_OBJECT
// _SUBSECTION

