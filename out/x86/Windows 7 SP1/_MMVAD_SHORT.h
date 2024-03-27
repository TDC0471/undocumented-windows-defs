#pragma once
/* ------------------ */

#include <_MMVAD.h>
#include <_MMVAD_FLAGS.h>
#include <_EX_PUSH_LOCK.h>
#include <_MMVAD_FLAGS3.h>

//0x20 bytes (sizeof)
struct _MMVAD_SHORT
{
    union
    {
        LONG Balance:2;                                                     //0x0
        struct _MMVAD* Parent;                                              //0x0
    } u1;                                                                   //0x0
    struct _MMVAD* LeftChild;                                               //0x4
    struct _MMVAD* RightChild;                                              //0x8
    ULONG StartingVpn;                                                      //0xc
    ULONG EndingVpn;                                                        //0x10
    union
    {
        ULONG LongFlags;                                                    //0x14
        struct _MMVAD_FLAGS VadFlags;                                       //0x14
    } u;                                                                    //0x14
    struct _EX_PUSH_LOCK PushLock;                                          //0x18
    union
    {
        ULONG LongFlags3;                                                   //0x1c
        struct _MMVAD_FLAGS3 VadFlags3;                                     //0x1c
    } u5;                                                                   //0x1c
};
