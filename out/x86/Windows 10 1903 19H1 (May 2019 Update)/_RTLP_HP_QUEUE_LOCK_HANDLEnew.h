#pragma once
/* ------------------ */


//0xc bytes (sizeof)
struct _RTLP_HP_QUEUE_LOCK_HANDLE
{
    ULONG Reserved1;                                                        //0x0
    ULONG LockPtr;                                                          //0x4
    ULONG HandleData;                                                       //0x8
};
