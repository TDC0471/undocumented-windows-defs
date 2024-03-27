#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _CM_FAST_LEAF_HINT
{
    union
    {
        UCHAR Characters[4];                                                //0x0
        ULONG FullHint;                                                     //0x0
    };
};
/* Used in */
// _CM_INDEX

