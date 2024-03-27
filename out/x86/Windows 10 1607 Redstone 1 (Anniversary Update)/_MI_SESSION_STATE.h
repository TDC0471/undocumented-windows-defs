#pragma once
/* ------------------ */

#include <_MMSESSION.h>
#include <_EX_PUSH_LOCK.h>
#include <_EPROCESS.h>
#include <_MMWSL_FULL.h>
#include <_MMWSLE_HASH.h>

//0x1044 bytes (sizeof)
struct _MI_SESSION_STATE
{
    struct _MMSESSION SystemSession;                                        //0x0
    UCHAR CodePageEdited;                                                   //0x14
    ULONG* DynamicPoolBitBuffer;                                            //0x18
    LONG VaReferenceCount[1024];                                            //0x1c
    ULONG* DynamicPtesBitBuffer;                                            //0x101c
    struct _EX_PUSH_LOCK IdLock;                                            //0x1020
    ULONG DetachTimeStamp;                                                  //0x1024
    struct _EPROCESS* LeaderProcess;                                        //0x1028
    struct _EX_PUSH_LOCK InitializeLock;                                    //0x102c
    struct _MMWSL_FULL* WorkingSetList;                                     //0x1030
    struct _MMWSLE_HASH* WsHashStart;                                       //0x1034
    struct _MMWSLE_HASH* WsHashEnd;                                         //0x1038
    VOID* SessionBase;                                                      //0x103c
    VOID* SessionCore;                                                      //0x1040
};
/* Used in */
// _MI_SYSTEM_INFORMATION

