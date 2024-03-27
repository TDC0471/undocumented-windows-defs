#pragma once
/* ------------------ */

#include <_MMSESSION.h>
#include <_EX_PUSH_LOCK.h>
#include <_EPROCESS.h>
#include <_MMWSL_FULL.h>
#include <_MMWSLE_HASH.h>

//0xa0 bytes (sizeof)
struct _MI_SESSION_STATE
{
    struct _MMSESSION SystemSession;                                        //0x0
    UCHAR CodePageEdited;                                                   //0x20
    ULONG* DynamicPoolBitBuffer;                                            //0x28
    ULONG* DynamicVaBitBuffer;                                              //0x30
    ULONGLONG DynamicVaBitBufferPages;                                      //0x38
    VOID* DynamicVaStart;                                                   //0x40
    VOID* ImageVaStart;                                                     //0x48
    ULONG* DynamicPtesBitBuffer;                                            //0x50
    struct _EX_PUSH_LOCK IdLock;                                            //0x58
    ULONG DetachTimeStamp;                                                  //0x60
    struct _EPROCESS* LeaderProcess;                                        //0x68
    struct _EX_PUSH_LOCK InitializeLock;                                    //0x70
    struct _MMWSL_FULL* WorkingSetList;                                     //0x78
    struct _MMWSLE_HASH* WsHashStart;                                       //0x80
    struct _MMWSLE_HASH* WsHashEnd;                                         //0x88
    VOID* SessionBase;                                                      //0x90
    VOID* SessionCore;                                                      //0x98
};
/* Used in */
// _MI_SYSTEM_INFORMATION

