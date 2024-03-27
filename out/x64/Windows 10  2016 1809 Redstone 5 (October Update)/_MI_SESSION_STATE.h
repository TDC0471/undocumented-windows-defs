#pragma once
/* ------------------ */

#include <_MMSESSION.h>
#include <_MI_HUGE_SYSTEM_VIEW_HEAD.h>
#include <_EX_PUSH_LOCK.h>
#include <_EPROCESS.h>
#include <_MMWSL_INSTANCE.h>

//0x1088 bytes (sizeof)
struct _MI_SESSION_STATE
{
    struct _MMSESSION SystemSession;                                        //0x0
    ULONG DetachTimeStamp;                                                  //0x20
    UCHAR CodePageEdited;                                                   //0x24
    ULONG* DynamicPoolBitBuffer;                                            //0x28
    ULONGLONG* DynamicVaBitBuffer;                                          //0x30
    ULONGLONG DynamicVaBitBufferPages;                                      //0x38
    VOID* DynamicVaStart;                                                   //0x40
    VOID* ImageVaStart;                                                     //0x48
    struct _MI_HUGE_SYSTEM_VIEW_HEAD SystemViewBuckets[256];                //0x50
    ULONG* DynamicPtesBitBuffer;                                            //0x1050
    struct _EX_PUSH_LOCK IdLock;                                            //0x1058
    struct _EPROCESS* LeaderProcess;                                        //0x1060
    struct _EX_PUSH_LOCK InitializeLock;                                    //0x1068
    struct _MMWSL_INSTANCE* WorkingSetList;                                 //0x1070
    VOID* SessionBase;                                                      //0x1078
    VOID* SessionCore;                                                      //0x1080
};
/* Used in */
// _MI_SYSTEM_INFORMATION

