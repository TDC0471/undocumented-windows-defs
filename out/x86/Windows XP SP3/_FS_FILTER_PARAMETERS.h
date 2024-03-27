#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>
#include <_ERESOURCE.h>
#include <_FS_FILTER_SECTION_SYNC_TYPE.h>

//0x14 bytes (sizeof)
union _FS_FILTER_PARAMETERS
{
    struct
    {
        union _LARGE_INTEGER* EndingOffset;                                 //0x0
        struct _ERESOURCE** ResourceToRelease;                              //0x4
    } AcquireForModifiedPageWriter;                                         //0x0
    struct
    {
        struct _ERESOURCE* ResourceToRelease;                               //0x0
    } ReleaseForModifiedPageWriter;                                         //0x0
    struct
    {
        enum _FS_FILTER_SECTION_SYNC_TYPE SyncType;                         //0x0
        ULONG PageProtection;                                               //0x4
    } AcquireForSectionSynchronization;                                     //0x0
    struct
    {
        VOID* Argument1;                                                    //0x0
        VOID* Argument2;                                                    //0x4
        VOID* Argument3;                                                    //0x8
        VOID* Argument4;                                                    //0xc
        VOID* Argument5;                                                    //0x10
    } Others;                                                               //0x0
};
/* Used in */
// _FS_FILTER_CALLBACK_DATA

