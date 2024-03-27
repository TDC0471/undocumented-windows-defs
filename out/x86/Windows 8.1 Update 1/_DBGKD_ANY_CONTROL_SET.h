#pragma once
/* ------------------ */

#include <_X86_DBGKD_CONTROL_SET.h>
#include <_IA64_DBGKD_CONTROL_SET.h>
#include <_AMD64_DBGKD_CONTROL_SET.h>
#include <_ARM_DBGKD_CONTROL_SET.h>
#include <_ARMCE_DBGKD_CONTROL_SET.h>
#include <_PPC_DBGKD_CONTROL_SET.h>

//0x1c bytes (sizeof)
struct _DBGKD_ANY_CONTROL_SET
{
    union
    {
        struct _X86_DBGKD_CONTROL_SET X86ControlSet;                        //0x0
        ULONG AlphaControlSet;                                              //0x0
        struct _IA64_DBGKD_CONTROL_SET IA64ControlSet;                      //0x0
        struct _AMD64_DBGKD_CONTROL_SET Amd64ControlSet;                    //0x0
        struct _ARM_DBGKD_CONTROL_SET ArmControlSet;                        //0x0
        struct _ARMCE_DBGKD_CONTROL_SET ArmCeControlSet;                    //0x0
        struct _PPC_DBGKD_CONTROL_SET PpcControlSet;                        //0x0
    };
};
/* Used in */
// _DBGKD_CONTINUE2

