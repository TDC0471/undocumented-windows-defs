#pragma once
/* ------------------ */

#include <_WNF_NODE_HEADER.h>
#include <_EX_RUNDOWN_REF.h>
#include <_WNF_DATA_SCOPE.h>
#include <_LIST_ENTRY.h>
#include <_WNF_LOCK.h>
#include <_RTL_AVL_TREE.h>
#include <_WNF_PERMANENT_DATA_STORE.h>

//0x50 bytes (sizeof)
struct _WNF_SCOPE_INSTANCE
{
    struct _WNF_NODE_HEADER Header;                                         //0x0
    struct _EX_RUNDOWN_REF RunRef;                                          //0x8
    enum _WNF_DATA_SCOPE DataScope;                                         //0x10
    ULONG InstanceIdSize;                                                   //0x14
    VOID* InstanceIdData;                                                   //0x18
    struct _LIST_ENTRY ResolverListEntry;                                   //0x20
    struct _WNF_LOCK NameSetLock;                                           //0x30
    struct _RTL_AVL_TREE NameSet;                                           //0x38
    struct _WNF_PERMANENT_DATA_STORE* PermanentDataStore;                   //0x40
    struct _WNF_PERMANENT_DATA_STORE* VolatilePermanentDataStore;           //0x48
};
/* Used in */
// _WNF_NAME_INSTANCE
// _WNF_SCOPE_MAP

