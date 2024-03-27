#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _MI_PARTITION_FLAGS
{
    ULONG BeingDeleted:1;                                                   //0x0
    ULONG PageListsInitialized:1;                                           //0x0
    ULONG StoreReservedPagesCharged:1;                                      //0x0
    ULONG UseProtectedSlabAllocators:1;                                     //0x0
    ULONG UseUnprotectedSlabAllocators:1;                                   //0x0
    ULONG PureHoldingPartition:1;                                           //0x0
    ULONG ZeroPagesOptional:1;                                              //0x0
};
/* Used in */
// _MI_PARTITION_CORE

