#pragma once
/* ------------------ */

#include <_MMVAD_SHORT.h>

//0x18 bytes (sizeof)
struct _MI_RFG_PROTECTED_STACK
{
    VOID* ControlStackBase;                                                 //0x0
    struct _MMVAD_SHORT* ControlStackVad;                                   //0x8
    VOID* OwnerThread;                                                      //0x10
};
/* Used in */
// _MI_VAD_EVENT_BLOCK

