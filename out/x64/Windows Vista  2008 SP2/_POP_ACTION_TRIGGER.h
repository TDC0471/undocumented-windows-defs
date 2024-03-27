#pragma once
/* ------------------ */

#include <POP_POLICY_DEVICE_TYPE.h>
#include <_POP_TRIGGER_WAIT.h>

//0x18 bytes (sizeof)
struct _POP_ACTION_TRIGGER
{
    enum POP_POLICY_DEVICE_TYPE Type;                                       //0x0
    ULONG Flags;                                                            //0x4
    struct _POP_TRIGGER_WAIT* Wait;                                         //0x8
    union
    {
        struct
        {
            ULONG Level;                                                    //0x10
        } Battery;                                                          //0x10
        struct
        {
            ULONG Type;                                                     //0x10
        } Button;                                                           //0x10
    };
};
/* Used in */
// _POP_THERMAL_ZONE
// _POP_TRIGGER_WAIT

