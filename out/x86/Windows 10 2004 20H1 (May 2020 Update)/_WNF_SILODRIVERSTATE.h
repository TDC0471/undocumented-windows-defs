#pragma once
/* ------------------ */

#include <_WNF_SCOPE_MAP.h>
#include <_WNF_LOCK.h>

//0x30 bytes (sizeof)
struct _WNF_SILODRIVERSTATE
{
    struct _WNF_SCOPE_MAP* ScopeMap;                                        //0x0
    VOID* volatile PermanentNameStoreRootKey;                               //0x4
    VOID* volatile PersistentNameStoreRootKey;                              //0x8
    volatile LONGLONG PermanentNameSequenceNumber;                          //0x10
    struct _WNF_LOCK PermanentNameSequenceNumberLock;                       //0x18
    volatile LONGLONG PermanentNameSequenceNumberPool;                      //0x20
    volatile LONGLONG RuntimeNameSequenceNumber;                            //0x28
};
/* Used in */
// _ESERVERSILO_GLOBALS

