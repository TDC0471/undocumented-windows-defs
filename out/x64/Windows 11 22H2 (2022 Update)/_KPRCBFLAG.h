#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
union _KPRCBFLAG
{
    volatile LONG PrcbFlags;                                                //0x0
    ULONG BamQosLevel:8;                                                    //0x0
    ULONG PendingQosUpdate:2;                                               //0x0
    ULONG CacheIsolationEnabled:1;                                          //0x0
    ULONG TracepointActive:1;                                               //0x0
    ULONG LongDpcRunning:1;                                                 //0x0
    ULONG PrcbFlagsReserved:19;                                             //0x0
};
/* Used in */
// _KPRCB

