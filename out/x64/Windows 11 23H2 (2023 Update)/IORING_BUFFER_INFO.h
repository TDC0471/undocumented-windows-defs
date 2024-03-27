#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct IORING_BUFFER_INFO
{
    VOID* Address;                                                          //0x0
    ULONG Length;                                                           //0x8
};
/* Used in */
// _NT_IORING_OP_REGISTER_BUFFERS

