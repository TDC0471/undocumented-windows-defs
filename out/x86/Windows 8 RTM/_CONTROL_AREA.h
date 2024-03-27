#pragma once
/* ------------------ */

#include <_SEGMENT.h>
#include <_LIST_ENTRY.h>
#include <_MMSECTION_FLAGS.h>
#include <_EX_FAST_REF.h>
#include <_MI_CONTROL_AREA_WAIT_BLOCK.h>
#include <_MM_AVL_TABLE.h>
#include <_MI_IMAGE_SECURITY_REFERENCE.h>

//0x48 bytes (sizeof)
struct _CONTROL_AREA
{
    struct _SEGMENT* Segment;                                               //0x0
    struct _LIST_ENTRY ListHead;                                            //0x4
    ULONG NumberOfSectionReferences;                                        //0xc
    ULONG NumberOfPfnReferences;                                            //0x10
    ULONG NumberOfMappedViews;                                              //0x14
    ULONG NumberOfUserReferences;                                           //0x18
    union
    {
        ULONG LongFlags;                                                    //0x1c
        struct _MMSECTION_FLAGS Flags;                                      //0x1c
    } u;                                                                    //0x1c
    ULONG FlushInProgressCount;                                             //0x20
    struct _EX_FAST_REF FilePointer;                                        //0x24
    volatile LONG ControlAreaLock;                                          //0x28
    ULONG ModifiedWriteCount;                                               //0x2c
    struct _MI_CONTROL_AREA_WAIT_BLOCK* WaitList;                           //0x30
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
                    ULONG Unused:13;                                        //0x38
                    ULONG BitMap:2;                                         //0x38
                    ULONG ImageActive:1;                                    //0x38
                };
            };
            union
            {
                struct _MM_AVL_TABLE* SubsectionRoot;                       //0x3c
                struct _MI_IMAGE_SECURITY_REFERENCE* SeImageStub;           //0x3c
            };
        } e2;                                                               //0x34
    } u2;                                                                   //0x34
    volatile ULONGLONG LockedPages;                                         //0x40
};
/* Used in */
// _MAPPED_FILE_SEGMENT
// _MMINPAGE_SUPPORT
// _MMMOD_WRITER_MDL_ENTRY
// _MMVIEW_CONTROL_AREA
// _MSUBSECTION
// _SEGMENT
// _SEGMENT_OBJECT
// _SUBSECTION

