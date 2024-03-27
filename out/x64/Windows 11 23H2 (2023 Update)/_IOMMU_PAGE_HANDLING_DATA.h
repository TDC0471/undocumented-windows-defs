#pragma once
/* ------------------ */

#include <_EX_PUSH_LOCK.h>

//0x28 bytes (sizeof)
struct _IOMMU_PAGE_HANDLING_DATA
{
    struct _EX_PUSH_LOCK ResetLock;                                         //0x0
    ULONGLONG Lock;                                                         //0x8
    ULONG ValidGroupFaultSequenceNumber;                                    //0x10
    ULONG (*GetPageFault)(VOID* arg1, ULONG* arg2, ULONGLONG* arg3, USHORT* arg4, VOID** arg5, ULONGLONG* arg6); //0x18
    VOID (*DismissPageFault)(VOID* arg1, ULONG arg2, ULONGLONG arg3, USHORT arg4, LONG arg5); //0x20
};
/* Used in */
// _REGISTERED_IOMMU

