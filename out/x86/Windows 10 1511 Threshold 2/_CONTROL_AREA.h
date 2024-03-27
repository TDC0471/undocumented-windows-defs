#pragma once
/* ------------------ */

#include <_SEGMENT.h>
#include <_LIST_ENTRY.h>
#include <_MMSECTION_FLAGS.h>
#include <_EX_FAST_REF.h>
#include <_MI_CONTROL_AREA_WAIT_BLOCK.h>
#include <_MI_IMAGE_SECURITY_REFERENCE.h>
#include <_EX_PUSH_LOCK.h>

//0x50 bytes (sizeof)
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
    struct _EX_FAST_REF FilePointer;                                        //0x20
    volatile LONG ControlAreaLock;                                          //0x24
    ULONG ModifiedWriteCount;                                               //0x28
    struct _MI_CONTROL_AREA_WAIT_BLOCK* WaitList;                           //0x2c
    union
    {
        struct
        {
            union
            {
                ULONG NumberOfSystemCacheViews;                             //0x30
                ULONG ImageRelocationStartBit;                              //0x30
            };
            union
            {
                volatile LONG WritableUserReferences;                       //0x34
                struct
                {
                    ULONG ImageRelocationSizeIn64k:16;                      //0x34
                    ULONG Unused:9;                                         //0x34
                    ULONG SystemImage:1;                                    //0x34
                    ULONG StrongCode:2;                                     //0x34
                    ULONG CantMove:1;                                       //0x34
                    ULONG BitMap:2;                                         //0x34
                    ULONG ImageActive:1;                                    //0x34
                };
            };
            union
            {
                ULONG FlushInProgressCount;                                 //0x38
                ULONG NumberOfSubsections;                                  //0x38
                struct _MI_IMAGE_SECURITY_REFERENCE* SeImageStub;           //0x38
            };
        } e2;                                                               //0x30
    } u2;                                                                   //0x30
    volatile ULONGLONG LockedPages;                                         //0x40
    struct _EX_PUSH_LOCK FileObjectLock;                                    //0x48
};
/* Used in */
// _MAPPED_FILE_SEGMENT
// _MI_SECTION_STATE
// _MMINPAGE_SUPPORT
// _MMMOD_WRITER_MDL_ENTRY
// _SECTION
// _SEGMENT
// _SUBSECTION

