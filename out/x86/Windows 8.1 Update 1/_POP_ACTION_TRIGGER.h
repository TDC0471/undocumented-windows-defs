#pragma once
/* ------------------ */

#include <POWER_POLICY_DEVICE_TYPE.h>
#include <_POP_TRIGGER_WAIT.h>

//0x10 bytes (sizeof)
struct _POP_ACTION_TRIGGER
{
    enum POWER_POLICY_DEVICE_TYPE Type;                                     //0x0
    ULONG Flags;                                                            //0x4
    struct _POP_TRIGGER_WAIT* Wait;                                         //0x8
    union
    {
        struct
        {
            ULONG Level;                                                    //0xc
        } Battery;                                                          //0xc
        struct
        {
            ULONG Type;                                                     //0xc
        } Button;                                                           //0xc
    };
};
/* Used in */
// _POP_TRIGGER_WAIT

