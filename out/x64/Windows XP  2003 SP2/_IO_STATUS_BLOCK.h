#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _IO_STATUS_BLOCK
{
    union
    {
        LONG Status;                                                        //0x0
        VOID* Pointer;                                                      //0x0
    };
    ULONGLONG Information;                                                  //0x8
};
/* Used in */
// _FAST_IO_DISPATCH
// _IRP
// _MMMOD_WRITER_MDL_ENTRY

