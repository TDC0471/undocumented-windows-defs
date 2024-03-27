#pragma once
/* ------------------ */

#include <_OBJECT_DIRECTORY.h>

//0x30 bytes (sizeof)
struct _DEVICE_MAP
{
    struct _OBJECT_DIRECTORY* DosDevicesDirectory;                          //0x0
    struct _OBJECT_DIRECTORY* GlobalDosDevicesDirectory;                    //0x4
    ULONG ReferenceCount;                                                   //0x8
    ULONG DriveMap;                                                         //0xc
    UCHAR DriveType[32];                                                    //0x10
};
/* Used in */
// _OBJECT_DIRECTORY
// _SEP_LOGON_SESSION_REFERENCES

