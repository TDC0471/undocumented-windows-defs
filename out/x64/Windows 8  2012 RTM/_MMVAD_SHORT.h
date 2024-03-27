#pragma once
/* ------------------ */

#include <_MM_AVL_NODE.h>
#include <_EX_PUSH_LOCK.h>
#include <_MMVAD_FLAGS.h>
#include <_MMVAD_FLAGS1.h>
#include <_MI_VAD_EVENT_BLOCK.h>

//0x40 bytes (sizeof)
struct _MMVAD_SHORT
{
    struct _MM_AVL_NODE VadNode;                                            //0x0
    ULONG StartingVpn;                                                      //0x18
    ULONG EndingVpn;                                                        //0x1c
    struct _EX_PUSH_LOCK PushLock;                                          //0x20
    union
    {
        ULONG LongFlags;                                                    //0x28
        struct _MMVAD_FLAGS VadFlags;                                       //0x28
    } u;                                                                    //0x28
    union
    {
        ULONG LongFlags1;                                                   //0x2c
        struct _MMVAD_FLAGS1 VadFlags1;                                     //0x2c
    } u1;                                                                   //0x2c
    struct _MI_VAD_EVENT_BLOCK* EventList;                                  //0x30
    LONG ReferenceCount;                                                    //0x38
};
/* Used in */
// _MMVAD

