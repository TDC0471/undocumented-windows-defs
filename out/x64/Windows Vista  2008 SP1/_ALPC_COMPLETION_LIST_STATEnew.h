#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _ALPC_COMPLETION_LIST_STATE
{
    union
    {
        struct
        {
            volatile ULONGLONG Head:24;                                     //0x0
            volatile ULONGLONG Tail:24;                                     //0x0
            volatile ULONGLONG ActiveThreadCount:16;                        //0x0
        } s1;                                                               //0x0
        volatile ULONGLONG Value;                                           //0x0
    } u1;                                                                   //0x0
};
/* Used in */
// _ALPC_COMPLETION_LIST_HEADER

