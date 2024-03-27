#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _MODWRITER_FLAGS
{
    ULONG KeepForever:1;                                                    //0x0
    ULONG Networked:1;                                                      //0x0
    ULONG IoPriority:3;                                                     //0x0
    ULONG ModifiedStoreWrite:1;                                             //0x0
};
/* Used in */
// _MMMOD_WRITER_MDL_ENTRY

