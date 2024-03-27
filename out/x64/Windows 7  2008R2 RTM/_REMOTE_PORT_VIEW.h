#pragma once
/* ------------------ */


//0x18 bytes (sizeof)
struct _REMOTE_PORT_VIEW
{
    ULONG Length;                                                           //0x0
    ULONGLONG ViewSize;                                                     //0x8
    VOID* ViewBase;                                                         //0x10
};
