#pragma once
/* ------------------ */

#include <_TERMINATION_PORT.h>

//0x8 bytes (sizeof)
struct _TERMINATION_PORT
{
    struct _TERMINATION_PORT* Next;                                         //0x0
    VOID* Port;                                                             //0x4
};
/* Used in */
// _ETHREAD
// _TERMINATION_PORT

