#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct LIST_ENTRY32
{
    ULONG Flink;                                                            //0x0
    ULONG Blink;                                                            //0x4
};
/* Used in */
// _PEB32
// _TEB32

