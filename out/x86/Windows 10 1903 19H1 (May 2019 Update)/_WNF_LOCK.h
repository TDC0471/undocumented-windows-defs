#pragma once
/* ------------------ */

#include <_EX_PUSH_LOCK.h>

//0x4 bytes (sizeof)
struct _WNF_LOCK
{
    struct _EX_PUSH_LOCK PushLock;                                          //0x0
};
/* Used in */
// _WNF_NAME_INSTANCE
// _WNF_PROCESS_CONTEXT
// _WNF_SCOPE_INSTANCE
// _WNF_SCOPE_MAP_ENTRY
// _WNF_SILODRIVERSTATE

