#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_EX_PUSH_LOCK.h>

//0x10 bytes (sizeof)
struct _CMP_SILO_CONTEXT
{
    struct _LIST_ENTRY LockEntryHead;                                       //0x0
    UCHAR LockListUnderCleanup;                                             //0x8
    struct _EX_PUSH_LOCK ContextLock;                                       //0xc
};