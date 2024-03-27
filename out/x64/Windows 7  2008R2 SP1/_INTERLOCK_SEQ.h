#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _INTERLOCK_SEQ
{
    union
    {
        struct
        {
            USHORT Depth;                                                   //0x0
            USHORT FreeEntryOffset;                                         //0x2
        };
        struct
        {
            volatile ULONG OffsetAndDepth;                                  //0x0
            volatile ULONG Sequence;                                        //0x4
        };
        volatile LONGLONG Exchg;                                            //0x0
    };
};
/* Used in */
// _HEAP_SUBSEGMENT

