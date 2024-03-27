#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
union _NT_IORING_HANDLEREF
{
    VOID* Handle;                                                           //0x0
    ULONG HandleIndex;                                                      //0x0
};
/* Used in */
// _NT_IORING_OP_CANCEL
// _NT_IORING_OP_FLUSH
// _NT_IORING_OP_READ
// _NT_IORING_OP_WRITE

