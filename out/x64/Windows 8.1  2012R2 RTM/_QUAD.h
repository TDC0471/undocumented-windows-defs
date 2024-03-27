#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _QUAD
{
    union
    {
        LONGLONG UseThisFieldToCopy;                                        //0x0
        double DoNotUseThisField;                                           //0x0
    };
};
/* Used in */
// _OBJECT_HEADER

