#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _IO_ALLOCATION_ACTION
{
    KeepObject = 1,
    DeallocateObject = 2,
    DeallocateObjectKeepRegisters = 3
};
/* Used in */
// _WAIT_CONTEXT_BLOCK

