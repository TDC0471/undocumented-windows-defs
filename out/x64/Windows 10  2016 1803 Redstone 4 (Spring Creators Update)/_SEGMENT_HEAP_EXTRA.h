#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _SEGMENT_HEAP_EXTRA
{
    USHORT AllocationTag;                                                   //0x0
    UCHAR InterceptorIndex:4;                                               //0x2
    UCHAR UserFlags:4;                                                      //0x2
    UCHAR ExtraSizeInUnits;                                                 //0x3
    VOID* Settable;                                                         //0x8
};
