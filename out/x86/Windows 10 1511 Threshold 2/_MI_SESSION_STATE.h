#pragma once
/* ------------------ */

#include <_MMSESSION.h>
#include <_EX_PUSH_LOCK.h>
#include <_EPROCESS.h>
#include <_MMWSL.h>
#include <_MMWSLE_HASH.h>

//0x1038 bytes (sizeof)
struct _MI_SESSION_STATE
{
    struct _MMSESSION SystemSession;                                        //0x0
    UCHAR CodePageEdited;                                                   //0x14
    LONG VaReferenceCount[1024];                                            //0x18
    ULONG* DynamicPtesBitBuffer;                                            //0x1018
    struct _EX_PUSH_LOCK IdLock;                                            //0x101c
    ULONG DetachTimeStamp;                                                  //0x1020
    struct _EPROCESS* LeaderProcess;                                        //0x1024
    struct _EX_PUSH_LOCK InitializeLock;                                    //0x1028
    struct _MMWSL* WorkingSetList;                                          //0x102c
    struct _MMWSLE_HASH* WsHashStart;                                       //0x1030
    struct _MMWSLE_HASH* WsHashEnd;                                         //0x1034
};
/* Used in */
// _MI_SYSTEM_INFORMATION

