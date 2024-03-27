#pragma once
/* ------------------ */

#include <_WNF_SCOPE_MAP.h>
#include <_WNF_LOCK.h>

//0x38 bytes (sizeof)
struct _WNF_SILODRIVERSTATE
{
    struct _WNF_SCOPE_MAP* ScopeMap;                                        //0x0
    VOID* volatile PermanentNameStoreRootKey;                               //0x8
    VOID* volatile PersistentNameStoreRootKey;                              //0x10
    volatile LONGLONG PermanentNameSequenceNumber;                          //0x18
    struct _WNF_LOCK PermanentNameSequenceNumberLock;                       //0x20
    volatile LONGLONG PermanentNameSequenceNumberPool;                      //0x28
    volatile LONGLONG RuntimeNameSequenceNumber;                            //0x30
};
/* Used in */
// _ESERVERSILO_GLOBALS

