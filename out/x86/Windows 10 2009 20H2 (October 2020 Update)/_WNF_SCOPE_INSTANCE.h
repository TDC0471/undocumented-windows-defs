#pragma once
/* ------------------ */

#include <_WNF_NODE_HEADER.h>
#include <_EX_RUNDOWN_REF.h>
#include <_WNF_DATA_SCOPE.h>
#include <_LIST_ENTRY.h>
#include <_WNF_LOCK.h>
#include <_RTL_AVL_TREE.h>

//0x2c bytes (sizeof)
struct _WNF_SCOPE_INSTANCE
{
    struct _WNF_NODE_HEADER Header;                                         //0x0
    struct _EX_RUNDOWN_REF RunRef;                                          //0x4
    enum _WNF_DATA_SCOPE DataScope;                                         //0x8
    ULONG InstanceIdSize;                                                   //0xc
    VOID* InstanceIdData;                                                   //0x10
    struct _LIST_ENTRY ResolverListEntry;                                   //0x14
    struct _WNF_LOCK NameSetLock;                                           //0x1c
    struct _RTL_AVL_TREE NameSet;                                           //0x20
    VOID* PermanentDataStore;                                               //0x24
    VOID* VolatilePermanentDataStore;                                       //0x28
};
/* Used in */
// _WNF_NAME_INSTANCE
// _WNF_SCOPE_MAP

