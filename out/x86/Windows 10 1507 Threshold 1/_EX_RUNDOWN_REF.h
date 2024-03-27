#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _EX_RUNDOWN_REF
{
    union
    {
        ULONG Count;                                                        //0x0
        VOID* Ptr;                                                          //0x0
    };
};
/* Used in */
// _CMHIVE
// _EPROCESS
// _ETHREAD
// _HMAP_ENTRY
// _MI_PARTITION_MODWRITES
// _OB_HANDLE_REVOCATION_BLOCK
// _PF_KERNEL_GLOBALS

