#pragma once
/* ------------------ */

#include <_MMSECURE_FLAGS.h>

//0x10 bytes (sizeof)
struct _MMADDRESS_LIST
{
    union
    {
        struct _MMSECURE_FLAGS Flags;                                       //0x0
        VOID* StartVa;                                                      //0x0
    } u1;                                                                   //0x0
    VOID* EndVa;                                                            //0x8
};
/* Used in */
// _MMVAD_LONG

