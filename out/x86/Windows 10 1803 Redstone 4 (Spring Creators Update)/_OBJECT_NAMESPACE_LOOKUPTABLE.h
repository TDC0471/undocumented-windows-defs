#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_EX_PUSH_LOCK.h>

//0x130 bytes (sizeof)
struct _OBJECT_NAMESPACE_LOOKUPTABLE
{
    struct _LIST_ENTRY HashBuckets[37];                                     //0x0
    struct _EX_PUSH_LOCK Lock;                                              //0x128
    ULONG NumberOfPrivateSpaces;                                            //0x12c
};
/* Used in */
// _OBP_SILODRIVERSTATE

