#pragma once
/* ------------------ */

#include <_RTL_BALANCED_NODE.h>
#include <_CONTROL_AREA.h>
#include <_FILE_OBJECT.h>
#include <_MMSECTION_FLAGS.h>

//0x28 bytes (sizeof)
struct _SECTION
{
    struct _RTL_BALANCED_NODE SectionNode;                                  //0x0
    ULONG StartingVpn;                                                      //0xc
    ULONG EndingVpn;                                                        //0x10
    union
    {
        struct _CONTROL_AREA* ControlArea;                                  //0x14
        struct _FILE_OBJECT* FileObject;                                    //0x14
        ULONG RemoteImageFileObject:1;                                      //0x14
        ULONG RemoteDataFileObject:1;                                       //0x14
    } u1;                                                                   //0x14
    ULONGLONG SizeOfSection;                                                //0x18
    union
    {
        ULONG LongFlags;                                                    //0x20
        struct _MMSECTION_FLAGS Flags;                                      //0x20
    } u;                                                                    //0x20
    ULONG InitialPageProtection:12;                                         //0x24
    ULONG SessionId:19;                                                     //0x24
    ULONG NoValidationNeeded:1;                                             //0x24
};
/* Used in */
// _MI_SECTION_STATE

