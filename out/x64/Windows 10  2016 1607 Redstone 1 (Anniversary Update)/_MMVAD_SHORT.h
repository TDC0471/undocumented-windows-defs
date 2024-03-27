#pragma once
/* ------------------ */

#include <_RTL_BALANCED_NODE.h>
#include <_MMVAD_SHORT.h>
#include <_EX_PUSH_LOCK.h>
#include <_MMVAD_FLAGS.h>
#include <_MMVAD_FLAGS1.h>
#include <_MI_VAD_EVENT_BLOCK.h>

//0x40 bytes (sizeof)
struct _MMVAD_SHORT
{
    union
    {
        struct _RTL_BALANCED_NODE VadNode;                                  //0x0
        struct _MMVAD_SHORT* NextVad;                                       //0x0
    };
    ULONG StartingVpn;                                                      //0x18
    ULONG EndingVpn;                                                        //0x1c
    UCHAR StartingVpnHigh;                                                  //0x20
    UCHAR EndingVpnHigh;                                                    //0x21
    UCHAR CommitChargeHigh;                                                 //0x22
    UCHAR SpareNT64VadUChar;                                                //0x23
    LONG ReferenceCount;                                                    //0x24
    struct _EX_PUSH_LOCK PushLock;                                          //0x28
    union
    {
        ULONG LongFlags;                                                    //0x30
        struct _MMVAD_FLAGS VadFlags;                                       //0x30
    } u;                                                                    //0x30
    union
    {
        ULONG LongFlags1;                                                   //0x34
        struct _MMVAD_FLAGS1 VadFlags1;                                     //0x34
    } u1;                                                                   //0x34
    struct _MI_VAD_EVENT_BLOCK* EventList;                                  //0x38
};
/* Used in */
// _MI_SUB64K_FREE_RANGES
// _MMVAD
// _MMVAD_SHORT

