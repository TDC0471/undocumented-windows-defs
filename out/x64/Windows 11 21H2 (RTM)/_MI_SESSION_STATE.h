#pragma once
/* ------------------ */

#include <_MI_SYSTEM_VIEWS.h>
#include <_MI_HUGE_SYSTEM_VIEW_HEAD.h>
#include <_EX_PUSH_LOCK.h>
#include <_EPROCESS.h>
#include <_RTL_AVL_TREE.h>

//0x1058 bytes (sizeof)
struct _MI_SESSION_STATE
{
    struct _MI_SYSTEM_VIEWS SystemSession;                                  //0x0
    UCHAR CodePageEdited;                                                   //0x18
    VOID* DynamicVaStart;                                                   //0x20
    VOID* ImageVaStart;                                                     //0x28
    struct _MI_HUGE_SYSTEM_VIEW_HEAD SystemViewBuckets[256];                //0x30
    struct _EX_PUSH_LOCK IdLock;                                            //0x1030
    struct _EPROCESS* LeaderProcess;                                        //0x1038
    struct _EX_PUSH_LOCK InitializeLock;                                    //0x1040
    VOID* SessionBase;                                                      //0x1048
    struct _RTL_AVL_TREE SessionIdNodes;                                    //0x1050
};
/* Used in */
// _MI_SYSTEM_INFORMATION

