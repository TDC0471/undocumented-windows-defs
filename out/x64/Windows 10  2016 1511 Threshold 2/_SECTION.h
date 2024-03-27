#pragma once
/* ------------------ */

#include <_RTL_BALANCED_NODE.h>
#include <_CONTROL_AREA.h>
#include <_FILE_OBJECT.h>
#include <_MMSECTION_FLAGS.h>

//0x40 bytes (sizeof)
struct _SECTION
{
    struct _RTL_BALANCED_NODE SectionNode;                                  //0x0
    ULONGLONG StartingVpn;                                                  //0x18
    ULONGLONG EndingVpn;                                                    //0x20
    union
    {
        struct _CONTROL_AREA* ControlArea;                                  //0x28
        struct _FILE_OBJECT* FileObject;                                    //0x28
        ULONGLONG RemoteImageFileObject:1;                                  //0x28
        ULONGLONG RemoteDataFileObject:1;                                   //0x28
    } u1;                                                                   //0x28
    ULONGLONG SizeOfSection;                                                //0x30
    union
    {
        ULONG LongFlags;                                                    //0x38
        struct _MMSECTION_FLAGS Flags;                                      //0x38
    } u;                                                                    //0x38
    ULONG InitialPageProtection:12;                                         //0x3c
    ULONG SessionId:19;                                                     //0x3c
    ULONG NoValidationNeeded:1;                                             //0x3c
};
/* Used in */
// _MI_SECTION_STATE

