#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
union _RTL_RUN_ONCE
{
    VOID* Ptr;                                                              //0x0
    ULONG Value;                                                            //0x0
    ULONG State:2;                                                          //0x0
};
/* Used in */
// _HEAP
// _RTLP_HP_METADATA_HEAP_CTX

