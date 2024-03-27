#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _VF_TRACKER
{
    ULONG TrackerFlags;                                                     //0x0
    ULONG TrackerSize;                                                      //0x4
    ULONG TrackerIndex;                                                     //0x8
    ULONG TraceDepth;                                                       //0xc
};
