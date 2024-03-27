#pragma once
/* ------------------ */

#include <_EX_PUSH_LOCK.h>
#include <_IOMMU_PAGE_FAULT_PRIVATE_DATA.h>

//0x28 bytes (sizeof)
struct _IOMMU_PAGE_HANDLING_DATA
{
    struct _EX_PUSH_LOCK ResetLock;                                         //0x0
    ULONGLONG Lock;                                                         //0x8
    ULONG ValidGroupFaultSequenceNumber;                                    //0x10
    ULONG FaultPacketBytes;                                                 //0x14
    ULONG (*GetPageFault)(VOID* arg1, VOID* arg2, ULONG* arg3, ULONGLONG* arg4, WCHAR* arg5, struct _IOMMU_PAGE_FAULT_PRIVATE_DATA* arg6, VOID** arg7, ULONGLONG* arg8); //0x18
    VOID (*DismissPageFault)(VOID* arg1, VOID* arg2, LONG arg3, UCHAR arg4, struct _IOMMU_PAGE_FAULT_PRIVATE_DATA* arg5); //0x20
};
/* Used in */
// _REGISTERED_IOMMU

