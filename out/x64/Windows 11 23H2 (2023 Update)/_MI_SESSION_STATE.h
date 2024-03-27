#pragma once
/* ------------------ */

#include <_EX_PUSH_LOCK.h>
#include <_EPROCESS.h>
#include <_RTL_AVL_TREE.h>

//0x30 bytes (sizeof)
struct _MI_SESSION_STATE
{
    struct _EX_PUSH_LOCK IdLock;                                            //0x0
    struct _EPROCESS* LeaderProcess;                                        //0x8
    struct _EX_PUSH_LOCK InitializeLock;                                    //0x10
    VOID* SessionBase;                                                      //0x18
    struct _RTL_AVL_TREE SessionIdNodes;                                    //0x20
    VOID* ImageVaStart;                                                     //0x28
};
/* Used in */
// _MI_SYSTEM_INFORMATION

