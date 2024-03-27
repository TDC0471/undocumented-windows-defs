#pragma once
/* ------------------ */

#include <_MM_AVL_NODE.h>
#include <_EX_PUSH_LOCK.h>
#include <_MMVAD_FLAGS.h>
#include <_MMVAD_FLAGS1.h>
#include <_MI_VAD_EVENT_BLOCK.h>

//0x28 bytes (sizeof)
struct _MMVAD_SHORT
{
    struct _MM_AVL_NODE VadNode;                                            //0x0
    ULONG StartingVpn;                                                      //0xc
    ULONG EndingVpn;                                                        //0x10
    struct _EX_PUSH_LOCK PushLock;                                          //0x14
    union
    {
        ULONG LongFlags;                                                    //0x18
        struct _MMVAD_FLAGS VadFlags;                                       //0x18
    } u;                                                                    //0x18
    union
    {
        ULONG LongFlags1;                                                   //0x1c
        struct _MMVAD_FLAGS1 VadFlags1;                                     //0x1c
    } u1;                                                                   //0x1c
    struct _MI_VAD_EVENT_BLOCK* EventList;                                  //0x20
    LONG ReferenceCount;                                                    //0x24
};
/* Used in */
// _MMVAD

