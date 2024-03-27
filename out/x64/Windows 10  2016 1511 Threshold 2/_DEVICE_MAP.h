#pragma once
/* ------------------ */

#include <_OBJECT_DIRECTORY.h>

//0x40 bytes (sizeof)
struct _DEVICE_MAP
{
    struct _OBJECT_DIRECTORY* DosDevicesDirectory;                          //0x0
    struct _OBJECT_DIRECTORY* GlobalDosDevicesDirectory;                    //0x8
    VOID* DosDevicesDirectoryHandle;                                        //0x10
    volatile LONG ReferenceCount;                                           //0x18
    ULONG DriveMap;                                                         //0x1c
    UCHAR DriveType[32];                                                    //0x20
};
/* Used in */
// _OBJECT_DIRECTORY
// _OBP_SILODRIVERSTATE
// _SEP_LOGON_SESSION_REFERENCES

