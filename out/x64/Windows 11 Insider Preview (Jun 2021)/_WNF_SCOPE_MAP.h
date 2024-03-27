#pragma once
/* ------------------ */

#include <_WNF_NODE_HEADER.h>
#include <_WNF_SCOPE_INSTANCE.h>
#include <_WNF_SCOPE_MAP_ENTRY.h>

//0xb0 bytes (sizeof)
struct _WNF_SCOPE_MAP
{
    struct _WNF_NODE_HEADER Header;                                         //0x0
    struct _WNF_SCOPE_INSTANCE* SystemScopeInstance;                        //0x8
    struct _WNF_SCOPE_INSTANCE* MachineScopeInstance;                       //0x10
    struct _WNF_SCOPE_INSTANCE* PhysicalMachineScopeInstance;               //0x18
    struct _WNF_SCOPE_MAP_ENTRY ByDataScope[6];                             //0x20
};
/* Used in */
// _WNF_SILODRIVERSTATE

