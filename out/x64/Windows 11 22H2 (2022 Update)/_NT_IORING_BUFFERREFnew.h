#pragma once
/* ------------------ */

#include <IORING_REGISTERED_BUFFER.h>

//0x8 bytes (sizeof)
union _NT_IORING_BUFFERREF
{
    VOID* Address;                                                          //0x0
    struct IORING_REGISTERED_BUFFER FixedBuffer;                            //0x0
};
/* Used in */
// _NT_IORING_OP_READ
// _NT_IORING_OP_WRITE

