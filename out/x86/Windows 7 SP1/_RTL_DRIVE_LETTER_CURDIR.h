#pragma once
/* ------------------ */

#include <_STRING.h>

//0x10 bytes (sizeof)
struct _RTL_DRIVE_LETTER_CURDIR
{
    USHORT Flags;                                                           //0x0
    USHORT Length;                                                          //0x2
    ULONG TimeStamp;                                                        //0x4
    struct _STRING DosPath;                                                 //0x8
};
/* Used in */
// _RTL_USER_PROCESS_PARAMETERS

