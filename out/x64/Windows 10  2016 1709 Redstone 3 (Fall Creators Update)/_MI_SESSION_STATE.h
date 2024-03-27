#pragma once
/* ------------------ */

#include <_MMSESSION.h>
#include <_EX_PUSH_LOCK.h>
#include <_EPROCESS.h>
#include <_MMWSL_INSTANCE.h>

//0x88 bytes (sizeof)
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
    ULONG* DynamicPtesBitBuffer;                                            //0x50
    struct _EX_PUSH_LOCK IdLock;                                            //0x58
    struct _EPROCESS* LeaderProcess;                                        //0x60
    struct _EX_PUSH_LOCK InitializeLock;                                    //0x68
    struct _MMWSL_INSTANCE* WorkingSetList;                                 //0x70
    VOID* SessionBase;                                                      //0x78
    VOID* SessionCore;                                                      //0x80
};
/* Used in */
// _MI_SYSTEM_INFORMATION

