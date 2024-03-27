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
// _EX_RUNDOWN_REF_CACHE_AWARE
// _MI_PARTITION_MODWRITES
// _OB_HANDLE_REVOCATION_BLOCK
// _PF_KERNEL_GLOBALS
// _PS_IO_CONTROL_ENTRY
// _WNF_NAME_INSTANCE
// _WNF_SCOPE_INSTANCE
// _WNF_SUBSCRIPTION

