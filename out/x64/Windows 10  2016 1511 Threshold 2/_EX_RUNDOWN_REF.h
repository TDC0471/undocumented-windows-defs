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
// _CMHIVE
// _EPROCESS
// _ETHREAD
// _EX_RUNDOWN_REF_CACHE_AWARE
// _HMAP_ENTRY
// _MI_PARTITION_MODWRITES
// _OB_HANDLE_REVOCATION_BLOCK
// _PF_KERNEL_GLOBALS
