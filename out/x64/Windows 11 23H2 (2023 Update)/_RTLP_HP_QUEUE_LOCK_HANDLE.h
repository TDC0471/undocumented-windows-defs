#pragma once
/* ------------------ */


//0x18 bytes (sizeof)
struct _RTLP_HP_QUEUE_LOCK_HANDLE
{
    ULONGLONG Reserved1;                                                    //0x0
    ULONGLONG LockPtr;                                                      //0x8
    ULONGLONG HandleData;                                                   //0x10
};
