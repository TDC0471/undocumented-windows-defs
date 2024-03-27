#pragma once
/* ------------------ */

#include <POP_POLICY_DEVICE_TYPE.h>
#include <_POP_TRIGGER_WAIT.h>

//0xc bytes (sizeof)
struct _POP_ACTION_TRIGGER
{
    enum POP_POLICY_DEVICE_TYPE Type;                                       //0x0
    UCHAR Flags;                                                            //0x4
    UCHAR Spare[3];                                                         //0x5
    union
    {
        struct
        {
            ULONG Level;                                                    //0x8
        } Battery;                                                          //0x8
        struct _POP_TRIGGER_WAIT* Wait;                                     //0x8
    };
};
/* Used in */
// _POP_THERMAL_ZONE
// _POP_TRIGGER_WAIT

