#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _CM_INDEX
{
    ULONG Cell;                                                             //0x0
    union
    {
        UCHAR NameHint[4];                                                  //0x4
        ULONG HashKey;                                                      //0x4
    };
};
