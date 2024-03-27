#pragma once
/* ------------------ */


//0x18 bytes (sizeof)
struct _EVENT_PAYLOAD_PREDICATE
{
    USHORT FieldIndex;                                                      //0x0
    USHORT CompareOp;                                                       //0x2
    ULONGLONG Value[2];                                                     //0x8
};
/* Used in */
// _AGGREGATED_PAYLOAD_FILTER

