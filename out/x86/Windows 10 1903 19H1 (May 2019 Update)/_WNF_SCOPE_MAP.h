#pragma once
/* ------------------ */

#include <_WNF_NODE_HEADER.h>
#include <_WNF_SCOPE_INSTANCE.h>
#include <_WNF_SCOPE_MAP_ENTRY.h>

//0x48 bytes (sizeof)
struct _WNF_SCOPE_MAP
{
    struct _WNF_NODE_HEADER Header;                                         //0x0
    struct _WNF_SCOPE_INSTANCE* SystemScopeInstance;                        //0x4
    struct _WNF_SCOPE_INSTANCE* MachineScopeInstance;                       //0x8
    struct _WNF_SCOPE_MAP_ENTRY ByDataScope[5];                             //0xc
};
/* Used in */
// _WNF_SILODRIVERSTATE
