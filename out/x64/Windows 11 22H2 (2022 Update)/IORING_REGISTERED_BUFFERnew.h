#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct IORING_REGISTERED_BUFFER
{
    ULONG BufferIndex;                                                      //0x0
    ULONG Offset;                                                           //0x4
};
/* Used in */
// _NT_IORING_BUFFERREF

