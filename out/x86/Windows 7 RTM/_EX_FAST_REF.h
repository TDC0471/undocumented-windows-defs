#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _EX_FAST_REF
{
    union
    {
        VOID* Object;                                                       //0x0
        ULONG RefCnt:3;                                                     //0x0
        ULONG Value;                                                        //0x0
    };
};
/* Used in */
// _CONTROL_AREA
// _EPROCESS
// _ETW_BUFFER_HANDLE
// _SHARED_CACHE_MAP
// _WMI_LOGGER_CONTEXT

