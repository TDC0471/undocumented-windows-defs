#pragma once
/* ------------------ */


//0x100 bytes (sizeof)
union _LFH_RANDOM_DATA
{
    UCHAR Bytes[256];                                                       //0x0
    USHORT Words[128];                                                      //0x0
    ULONGLONG Quadwords[32];                                                //0x0
};
