#pragma once
/* ------------------ */

#include <_WNF_NODE_HEADER.h>
#include <_WNF_LOCK.h>
#include <_LIST_ENTRY.h>
#include <_WNF_DATA_SCOPE.h>

//0x30 bytes (sizeof)
struct _WNF_PERMANENT_DATA_STORE
{
    struct _WNF_NODE_HEADER Header;                                         //0x0
    struct _WNF_LOCK Lock;                                                  //0x8
    VOID* Handle;                                                           //0x10
    struct _LIST_ENTRY Links;                                               //0x18
    enum _WNF_DATA_SCOPE DataScopeType;                                     //0x28
    ULONG ScopeInstanceIdSize;                                              //0x2c
};
/* Used in */
// _WNF_NAME_INSTANCE
// _WNF_SCOPE_INSTANCE

