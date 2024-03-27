#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _IO_STATUS_BLOCK32
{
    LONG Status;                                                            //0x0
    ULONG Information;                                                      //0x4
};
