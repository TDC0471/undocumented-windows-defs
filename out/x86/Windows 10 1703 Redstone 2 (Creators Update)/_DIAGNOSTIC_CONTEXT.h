#pragma once
/* ------------------ */

#include <_REQUESTER_TYPE.h>
#include <_EPROCESS.h>
#include <_DEVICE_OBJECT.h>

//0x10 bytes (sizeof)
struct _DIAGNOSTIC_CONTEXT
{
    enum _REQUESTER_TYPE CallerType;                                        //0x0
    union
    {
        struct
        {
            struct _EPROCESS* Process;                                      //0x4
            ULONG ServiceTag;                                               //0x8
        };
        struct _DEVICE_OBJECT* DeviceObject;                                //0x4
    };
    ULONG ReasonSize;                                                       //0xc
};
/* Used in */
// _ETIMER

