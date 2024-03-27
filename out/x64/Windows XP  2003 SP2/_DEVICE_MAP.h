#pragma once
/* ------------------ */

#include <_OBJECT_DIRECTORY.h>

//0x38 bytes (sizeof)
struct _DEVICE_MAP
{
    struct _OBJECT_DIRECTORY* DosDevicesDirectory;                          //0x0
    struct _OBJECT_DIRECTORY* GlobalDosDevicesDirectory;                    //0x8
    ULONG ReferenceCount;                                                   //0x10
    ULONG DriveMap;                                                         //0x14
    UCHAR DriveType[32];                                                    //0x18
};
/* Used in */
// _OBJECT_DIRECTORY
// _SEP_LOGON_SESSION_REFERENCES

