#pragma once
/* ------------------ */

#include <_MMSESSION.h>
#include <_EX_PUSH_LOCK.h>
#include <_EPROCESS.h>
#include <_MMWSL_INSTANCE.h>
#include <_RTL_AVL_TREE.h>
#include <_KEVENT.h>

//0x104c bytes (sizeof)
struct _MI_SESSION_STATE
{
    struct _MMSESSION SystemSession;                                        //0x0
    UCHAR CodePageEdited;                                                   //0x14
    LONG VaReferenceCount[1024];                                            //0x18
    ULONG* DynamicPtesBitBuffer;                                            //0x1018
    struct _EX_PUSH_LOCK IdLock;                                            //0x101c
    struct _EPROCESS* LeaderProcess;                                        //0x1020
    struct _EX_PUSH_LOCK InitializeLock;                                    //0x1024
    struct _MMWSL_INSTANCE* WorkingSetList;                                 //0x1028
    VOID* SessionBase;                                                      //0x102c
    VOID* SessionCore;                                                      //0x1030
    struct _RTL_AVL_TREE SessionIdNodes;                                    //0x1034
    struct _KEVENT DeleteInProgressEvent;                                   //0x1038
    ULONG DeleteInProgressCount;                                            //0x1048
};
/* Used in */
// _MI_SYSTEM_INFORMATION

