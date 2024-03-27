#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _HEAP_LFH_SUBSEGMENT_ENCODED_OFFSETS
{
    union
    {
        struct
        {
            USHORT BlockSize;                                               //0x0
            USHORT FirstBlockOffset;                                        //0x2
        };
        ULONG EncodedData;                                                  //0x0
    };
};
/* Used in */
// _HEAP_LFH_SUBSEGMENT

