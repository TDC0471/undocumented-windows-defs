#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _MI_COLOR_BASE
{
    USHORT* ColorPointer;                                                   //0x0
    USHORT ColorMask;                                                       //0x4
    USHORT ColorNode;                                                       //0x6
};
