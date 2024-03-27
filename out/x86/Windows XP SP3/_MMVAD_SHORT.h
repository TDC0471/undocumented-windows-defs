#pragma once
/* ------------------ */

#include <_MMVAD.h>
#include <_MMVAD_FLAGS.h>

//0x18 bytes (sizeof)
struct _MMVAD_SHORT
{
    ULONG StartingVpn;                                                      //0x0
    ULONG EndingVpn;                                                        //0x4
    struct _MMVAD* Parent;                                                  //0x8
    struct _MMVAD* LeftChild;                                               //0xc
    struct _MMVAD* RightChild;                                              //0x10
    union
    {
        ULONG LongFlags;                                                    //0x14
        struct _MMVAD_FLAGS VadFlags;                                       //0x14
    } u;                                                                    //0x14
};
