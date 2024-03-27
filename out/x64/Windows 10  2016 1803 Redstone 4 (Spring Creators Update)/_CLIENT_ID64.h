#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _CLIENT_ID64
{
    ULONGLONG UniqueProcess;                                                //0x0
    ULONGLONG UniqueThread;                                                 //0x8
};
/* Used in */
// _TEB64

