#pragma once
/* ------------------ */

#include <_RTL_BALANCED_NODE.h>
#include <_MMVAD_SHORT.h>
#include <_EX_PUSH_LOCK.h>
#include <_MMVAD_FLAGS.h>
#include <_MMVAD_FLAGS1.h>
#include <_MI_VAD_EVENT_BLOCK.h>

//0x28 bytes (sizeof)
struct _MMVAD_SHORT
{
    union
    {
        struct _RTL_BALANCED_NODE VadNode;                                  //0x0
        struct _MMVAD_SHORT* NextVad;                                       //0x0
    };
    ULONG StartingVpn;                                                      //0xc
    ULONG EndingVpn;                                                        //0x10
    LONG ReferenceCount;                                                    //0x14
    struct _EX_PUSH_LOCK PushLock;                                          //0x18
    union
    {
        ULONG LongFlags;                                                    //0x1c
        struct _MMVAD_FLAGS VadFlags;                                       //0x1c
    } u;                                                                    //0x1c
    union
    {
        ULONG LongFlags1;                                                   //0x20
        struct _MMVAD_FLAGS1 VadFlags1;                                     //0x20
    } u1;                                                                   //0x20
    struct _MI_VAD_EVENT_BLOCK* EventList;                                  //0x24
};
/* Used in */
// _MMVAD
// _MMVAD_SHORT
