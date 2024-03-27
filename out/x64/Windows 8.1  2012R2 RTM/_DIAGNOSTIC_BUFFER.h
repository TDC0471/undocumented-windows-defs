#pragma once
/* ------------------ */

#include <_REQUESTER_TYPE.h>

//0x28 bytes (sizeof)
struct _DIAGNOSTIC_BUFFER
{
    ULONGLONG Size;                                                         //0x0
    enum _REQUESTER_TYPE CallerType;                                        //0x8
    union
    {
        struct
        {
            ULONGLONG ProcessImageNameOffset;                               //0x10
            ULONG ProcessId;                                                //0x18
            ULONG ServiceTag;                                               //0x1c
        };
        struct
        {
            ULONGLONG DeviceDescriptionOffset;                              //0x10
            ULONGLONG DevicePathOffset;                                     //0x18
        };
    };
    ULONGLONG ReasonOffset;                                                 //0x20
};
/* Used in */
// _POP_POWER_ACTION

