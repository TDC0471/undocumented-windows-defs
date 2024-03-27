#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
union _RTL_RUN_ONCE
{
    VOID* Ptr;                                                              //0x0
    ULONGLONG Value;                                                        //0x0
    ULONGLONG State:2;                                                      //0x0
};
/* Used in */
// _HEAP
// _RTLP_HP_METADATA_HEAP_CTX

