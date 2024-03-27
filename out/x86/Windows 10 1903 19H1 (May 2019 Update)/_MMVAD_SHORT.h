#pragma once
/* ------------------ */

#include <_MMVAD_SHORT.h>
#include <_RTL_BALANCED_NODE.h>
#include <_EX_PUSH_LOCK.h>
#include <_MMVAD_FLAGS.h>
#include <_MM_PRIVATE_VAD_FLAGS.h>
#include <_MM_GRAPHICS_VAD_FLAGS.h>
#include <_MM_SHARED_VAD_FLAGS.h>
#include <_MMVAD_FLAGS1.h>
#include <_MI_VAD_EVENT_BLOCK.h>

//0x28 bytes (sizeof)
struct _MMVAD_SHORT
{
    union
    {
        struct
        {
            struct _MMVAD_SHORT* NextVad;                                   //0x0
            VOID* ExtraCreateInfo;                                          //0x4
        };
        struct _RTL_BALANCED_NODE VadNode;                                  //0x0
    };
    ULONG StartingVpn;                                                      //0xc
    ULONG EndingVpn;                                                        //0x10
    LONG ReferenceCount;                                                    //0x14
    struct _EX_PUSH_LOCK PushLock;                                          //0x18
    union
    {
        ULONG LongFlags;                                                    //0x1c
        struct _MMVAD_FLAGS VadFlags;                                       //0x1c
        struct _MM_PRIVATE_VAD_FLAGS PrivateVadFlags;                       //0x1c
        struct _MM_GRAPHICS_VAD_FLAGS GraphicsVadFlags;                     //0x1c
        struct _MM_SHARED_VAD_FLAGS SharedVadFlags;                         //0x1c
        volatile ULONG VolatileVadLong;                                     //0x1c
    } u;                                                                    //0x1c
    union
    {
        ULONG LongFlags1;                                                   //0x20
        struct _MMVAD_FLAGS1 VadFlags1;                                     //0x20
    } u1;                                                                   //0x20
    struct _MI_VAD_EVENT_BLOCK* EventList;                                  //0x24
};
/* Used in */
// _MI_SUB64K_FREE_RANGES
// _MI_VAD_EVENT_BLOCK
// _MMVAD
// _MMVAD_SHORT

