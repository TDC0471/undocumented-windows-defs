#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _WRITE_BEHIND_THROUGHPUT
{
    ULONG PagesYetToWrite;                                                  //0x0
    ULONG Throughput;                                                       //0x4
};
/* Used in */
// _CC_PARTITION
// _PRIVATE_VOLUME_CACHEMAP

