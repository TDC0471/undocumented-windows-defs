#pragma once
/* ------------------ */

#include <_MMSESSION.h>
#include <_MI_HUGE_SYSTEM_VIEW_HEAD.h>
#include <_EX_PUSH_LOCK.h>
#include <_EPROCESS.h>
#include <_MMWSL_INSTANCE.h>

//0x1080 bytes (sizeof)
struct _MI_SESSION_STATE
{
    struct _MMSESSION SystemSession;                                        //0x0
    UCHAR CodePageEdited;                                                   //0x20
    ULONGLONG* DynamicVaBitBuffer;                                          //0x28
    ULONGLONG DynamicVaBitBufferPages;                                      //0x30
    VOID* DynamicVaStart;                                                   //0x38
    VOID* ImageVaStart;                                                     //0x40
    struct _MI_HUGE_SYSTEM_VIEW_HEAD SystemViewBuckets[256];                //0x48
    ULONG* DynamicPtesBitBuffer;                                            //0x1048
    struct _EX_PUSH_LOCK IdLock;                                            //0x1050
    struct _EPROCESS* LeaderProcess;                                        //0x1058
    struct _EX_PUSH_LOCK InitializeLock;                                    //0x1060
    struct _MMWSL_INSTANCE* WorkingSetList;                                 //0x1068
    VOID* SessionBase;                                                      //0x1070
    VOID* SessionCore;                                                      //0x1078
};
/* Used in */
// _MI_SYSTEM_INFORMATION

