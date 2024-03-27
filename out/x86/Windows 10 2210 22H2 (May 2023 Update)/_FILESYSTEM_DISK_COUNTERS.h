#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _FILESYSTEM_DISK_COUNTERS
{
    ULONGLONG FsBytesRead;                                                  //0x0
    ULONGLONG FsBytesWritten;                                               //0x8
};
/* Used in */
// _KPRCB

