#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _MI_COLOR_BASE
{
    USHORT* ColorPointer;                                                   //0x0
    USHORT ColorMask;                                                       //0x8
    USHORT ColorNode;                                                       //0xa
};
