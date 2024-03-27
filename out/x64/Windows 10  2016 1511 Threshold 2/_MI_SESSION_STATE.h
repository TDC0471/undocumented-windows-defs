#pragma once
/* ------------------ */

#include <_MMSESSION.h>
#include <_EX_PUSH_LOCK.h>
#include <_EPROCESS.h>
#include <_MMWSL.h>
#include <_MMWSLE_HASH.h>

//0x88 bytes (sizeof)
struct _MI_SESSION_STATE
{
    struct _MMSESSION SystemSession;                                        //0x0
    UCHAR CodePageEdited;                                                   //0x20
    ULONG* DynamicVaBitBuffer;                                              //0x28
    ULONGLONG DynamicVaBitBufferPages;                                      //0x30
    ULONG* DynamicPoolBitBuffer;                                            //0x38
    VOID* DynamicVaStart;                                                   //0x40
    ULONG* DynamicPtesBitBuffer;                                            //0x48
    struct _EX_PUSH_LOCK IdLock;                                            //0x50
    ULONG DetachTimeStamp;                                                  //0x58
    struct _EPROCESS* LeaderProcess;                                        //0x60
    struct _EX_PUSH_LOCK InitializeLock;                                    //0x68
    struct _MMWSL* WorkingSetList;                                          //0x70
    struct _MMWSLE_HASH* WsHashStart;                                       //0x78
    struct _MMWSLE_HASH* WsHashEnd;                                         //0x80
};
/* Used in */
// _MI_SYSTEM_INFORMATION

