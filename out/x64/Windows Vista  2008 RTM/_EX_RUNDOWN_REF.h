#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _EX_RUNDOWN_REF
{
    union
    {
        ULONGLONG Count;                                                    //0x0
        VOID* Ptr;                                                          //0x0
    };
};
/* Used in */
// _EPROCESS
// _ETHREAD
// _PF_KERNEL_GLOBALS

