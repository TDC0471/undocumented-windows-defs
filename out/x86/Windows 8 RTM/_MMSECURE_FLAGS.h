#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _MMSECURE_FLAGS
{
    ULONG ReadOnly:1;                                                       //0x0
    ULONG NoWrite:1;                                                        //0x0
    ULONG SecNoChange:1;                                                    //0x0
    ULONG Spare:9;                                                          //0x0
};
/* Used in */
// _MMADDRESS_LIST
