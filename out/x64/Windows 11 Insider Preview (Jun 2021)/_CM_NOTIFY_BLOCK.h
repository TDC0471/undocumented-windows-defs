#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_CM_KEY_CONTROL_BLOCK.h>
#include <_CM_KEY_BODY.h>
#include <_SECURITY_SUBJECT_CONTEXT.h>

//0x58 bytes (sizeof)
struct _CM_NOTIFY_BLOCK
{
    struct _LIST_ENTRY HiveList;                                            //0x0
    struct _LIST_ENTRY PostList;                                            //0x10
    struct _CM_KEY_CONTROL_BLOCK* KeyControlBlock;                          //0x20
    struct _CM_KEY_BODY* KeyBody;                                           //0x28
    ULONG Filter:30;                                                        //0x30
    ULONG WatchTree:1;                                                      //0x30
    ULONG NotifyPending:1;                                                  //0x30
    struct _SECURITY_SUBJECT_CONTEXT SubjectContext;                        //0x38
};
/* Used in */
// _CM_KEY_BODY

