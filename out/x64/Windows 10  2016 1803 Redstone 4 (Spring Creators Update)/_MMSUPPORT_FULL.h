#pragma once
/* ------------------ */

#include <_MMSUPPORT_INSTANCE.h>
#include <_MMSUPPORT_SHARED.h>

//0x110 bytes (sizeof)
struct _MMSUPPORT_FULL
{
    struct _MMSUPPORT_INSTANCE Instance;                                    //0x0
    struct _MMSUPPORT_SHARED Shared;                                        //0xc0
};
/* Used in */
// _EPROCESS
// _MI_VISIBLE_STATE
// _MM_SESSION_SPACE

