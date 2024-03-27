#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _HAL_LOG_REGISTER_CONTEXT
{
    VOID (*LogRoutine)(ULONG arg1, VOID* arg2, ULONG arg3);                 //0x0
    ULONG Flag;                                                             //0x8
};
/* Used in */
// HAL_PRIVATE_DISPATCH

