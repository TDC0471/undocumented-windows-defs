#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _ALPC_COMPLETION_LIST_STATE
{
    union
    {
        struct
        {
            ULONGLONG Head:24;                                              //0x0
            ULONGLONG Tail:24;                                              //0x0
            ULONGLONG ActiveThreadCount:16;                                 //0x0
        } s1;                                                               //0x0
        LONGLONG Value;                                                     //0x0
    } u1;                                                                   //0x0
};
/* Used in */
// _ALPC_COMPLETION_LIST_HEADER

