#pragma once
/* ------------------ */


//0xc bytes (sizeof)
struct _REMOTE_PORT_VIEW
{
    ULONG Length;                                                           //0x0
    ULONG ViewSize;                                                         //0x4
    VOID* ViewBase;                                                         //0x8
};
