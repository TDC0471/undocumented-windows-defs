#pragma once
/* ------------------ */

#include <_RTL_AVL_TREE.h>
#include <_RTL_BITMAP.h>
#include <_EX_PUSH_LOCK.h>
#include <_LIST_ENTRY.h>
#include <_EX_RUNDOWN_REF.h>

//0x24 bytes (sizeof)
struct _MI_ENCLAVE_STATE
{
    struct _RTL_AVL_TREE EnclaveRegions;                                    //0x0
    VOID* EnclaveMetadataPage;                                              //0x4
    struct _RTL_BITMAP* EnclaveMetadataBitMap;                              //0x8
    struct _EX_PUSH_LOCK EnclaveMetadataEntryLock;                          //0xc
    volatile LONG EnclaveMetadataPageLock;                                  //0x10
    struct _LIST_ENTRY EnclaveList;                                         //0x14
    struct _EX_PUSH_LOCK EnclaveListLock;                                   //0x1c
    struct _EX_RUNDOWN_REF ShutdownRundown;                                 //0x20
};
/* Used in */
// _MI_SYSTEM_INFORMATION

