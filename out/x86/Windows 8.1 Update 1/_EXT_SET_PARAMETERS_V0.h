#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _EXT_SET_PARAMETERS_V0
{
    ULONG Version;                                                          //0x0
    ULONG Reserved;                                                         //0x4
    LONGLONG NoWakeTolerance;                                               //0x8
};
