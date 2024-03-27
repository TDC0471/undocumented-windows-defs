#pragma once
/* ------------------ */

#include <_REQUESTER_TYPE.h>

//0x18 bytes (sizeof)
struct _DIAGNOSTIC_BUFFER
{
    ULONG Size;                                                             //0x0
    enum _REQUESTER_TYPE CallerType;                                        //0x4
    union
    {
        struct
        {
            ULONG ProcessImageNameOffset;                                   //0x8
            ULONG ProcessId;                                                //0xc
            ULONG ServiceTag;                                               //0x10
        };
        struct
        {
            ULONG DeviceDescriptionOffset;                                  //0x8
            ULONG DevicePathOffset;                                         //0xc
        };
    };
    ULONG ReasonOffset;                                                     //0x14
};
/* Used in */
// _POP_POWER_ACTION

