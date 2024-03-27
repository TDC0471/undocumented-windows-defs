#pragma once
/* ------------------ */

#include <_OBJECT_DIRECTORY.h>
#include <_EJOB.h>
#include <_DEVICE_MAP.h>
#include <_EX_FAST_REF.h>

//0x128 bytes (sizeof)
struct _DEVICE_MAP
{
    struct _OBJECT_DIRECTORY* DosDevicesDirectory;                          //0x0
    struct _OBJECT_DIRECTORY* GlobalDosDevicesDirectory;                    //0x8
    struct _EJOB* ServerSilo;                                               //0x10
    struct _DEVICE_MAP* GlobalDeviceMap;                                    //0x18
    struct _EX_FAST_REF DriveObject[26];                                    //0x20
    LONGLONG ReferenceCount;                                                //0xf0
    VOID* DosDevicesDirectoryHandle;                                        //0xf8
    ULONG DriveMap;                                                         //0x100
    UCHAR DriveType[32];                                                    //0x104
};
/* Used in */
// _DEVICE_MAP
// _OBJECT_DIRECTORY
// _SEP_LOGON_SESSION_REFERENCES

