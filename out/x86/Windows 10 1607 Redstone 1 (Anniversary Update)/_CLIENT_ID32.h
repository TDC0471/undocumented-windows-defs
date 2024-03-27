#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _CLIENT_ID32
{
    ULONG UniqueProcess;                                                    //0x0
    ULONG UniqueThread;                                                     //0x4
};
/* Used in */
// _TEB32

