#pragma once
/* ------------------ */

#include <_SEGMENT.h>
#include <_LIST_ENTRY.h>
#include <_MMSECTION_FLAGS.h>
#include <_EX_FAST_REF.h>
#include <_MI_SECTION_CREATION_EVENT.h>
#include <_MM_SUBSECTION_AVL_TABLE.h>
#include <_MI_IMAGE_SECURITY_REFERENCE.h>

//0x60 bytes (sizeof)
struct _CONTROL_AREA
{
    struct _SEGMENT* Segment;                                               //0x0
    struct _LIST_ENTRY DereferenceList;                                     //0x8
    ULONG NumberOfSectionReferences;                                        //0x18
    ULONG NumberOfPfnReferences;                                            //0x1c
    ULONG NumberOfMappedViews;                                              //0x20
    ULONG NumberOfUserReferences;                                           //0x24
    union
    {
        ULONG LongFlags;                                                    //0x28
        struct _MMSECTION_FLAGS Flags;                                      //0x28
    } u;                                                                    //0x28
    union
    {
        struct
        {
            USHORT ModifiedWriteCount;                                      //0x2c
            USHORT FlushInProgressCount;                                    //0x2e
        } e2;                                                               //0x2c
    } u1;                                                                   //0x2c
    struct _EX_FAST_REF FilePointer;                                        //0x30
    volatile LONG ControlAreaLock;                                          //0x38
    ULONG StartingFrame;                                                    //0x3c
    struct _MI_SECTION_CREATION_EVENT* WaitingForDeletion;                  //0x40
    union
    {
        struct
        {
            union
            {
                ULONG NumberOfSystemCacheViews;                             //0x48
                ULONG ImageRelocationStartBit;                              //0x48
            };
            union
            {
                volatile LONG WritableUserReferences;                       //0x4c
                struct
                {
                    ULONG ImageRelocationSizeIn64k:16;                      //0x4c
                    ULONG Unused:14;                                        //0x4c
                    ULONG BitMap64:1;                                       //0x4c
                    ULONG ImageActive:1;                                    //0x4c
                };
            };
            union
            {
                struct _MM_SUBSECTION_AVL_TABLE* SubsectionRoot;            //0x50
                struct _MI_IMAGE_SECURITY_REFERENCE* SeImageStub;           //0x50
            };
        } e2;                                                               //0x48
    } u2;                                                                   //0x48
    volatile LONGLONG LockedPages;                                          //0x58
};
/* Used in */
// _MAPPED_FILE_SEGMENT
// _MMMOD_WRITER_MDL_ENTRY
// _MMVIEW
// _MSUBSECTION
// _SEGMENT
// _SEGMENT_OBJECT
// _SUBSECTION

