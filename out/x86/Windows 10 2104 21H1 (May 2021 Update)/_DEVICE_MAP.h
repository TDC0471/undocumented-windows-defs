#pragma once
/* ------------------ */

#include <_OBJECT_DIRECTORY.h>
#include <_EJOB.h>

//0x38 bytes (sizeof)
struct _DEVICE_MAP
{
    struct _OBJECT_DIRECTORY* DosDevicesDirectory;                          //0x0
    struct _OBJECT_DIRECTORY* GlobalDosDevicesDirectory;                    //0x4
    VOID* DosDevicesDirectoryHandle;                                        //0x8
    volatile LONG ReferenceCount;                                           //0xc
    ULONG DriveMap;                                                         //0x10
    UCHAR DriveType[32];                                                    //0x14
    struct _EJOB* ServerSilo;                                               //0x34
};
/* Used in */
// _OBJECT_DIRECTORY
// _OBP_SILODRIVERSTATE
// _SEP_LOGON_SESSION_REFERENCES
