#pragma once
/* ------------------ */

#include <_DRIVER_OBJECT.h>

//0x8 bytes (sizeof)
struct _MI_SESSION_DRIVER_UNLOAD
{
    union
    {
        VOID (*Function)(struct _DRIVER_OBJECT* arg1);                      //0x0
        ULONGLONG FunctionValue;                                            //0x0
    };
};
/* Used in */
// _MM_SESSION_SPACE

