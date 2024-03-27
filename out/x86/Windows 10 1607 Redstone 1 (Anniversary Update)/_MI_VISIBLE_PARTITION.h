#pragma once
/* ------------------ */

#include <_MMPAGING_FILE.h>
#include <_MMSUPPORT_INSTANCE.h>
#include <_MMWSL_INSTANCE.h>
#include <_MMPFNLIST.h>
#include <_MI_PAGEFILE_TRACES.h>

//0xcc0 bytes (sizeof)
struct _MI_VISIBLE_PARTITION
{
    ULONG LowestPhysicalPage;                                               //0x0
    ULONG HighestPhysicalPage;                                              //0x4
    ULONG NumberOfPhysicalPages;                                            //0x8
    volatile ULONG NumberOfPagingFiles;                                     //0xc
    struct _MMPAGING_FILE* PagingFile[16];                                  //0x10
    volatile ULONG AvailablePages;                                          //0x80
    volatile ULONG ResidentAvailablePages;                                  //0xc0
    struct _MMSUPPORT_INSTANCE PartitionWs[1];                              //0x100
    struct _MMWSL_INSTANCE PartitionWorkingSetLists[1];                     //0x164
    UCHAR SystemCacheInitialized;                                           //0x238
    volatile ULONG TotalCommittedPages;                                     //0x23c
    struct _MMPFNLIST ModifiedPageListHead;                                 //0x240
    struct _MMPFNLIST ModifiedNoWritePageListHead;                          //0x280
    ULONG TotalCommitLimit;                                                 //0x294
    ULONG TotalPagesForPagingFile;                                          //0x298
    ULONG VadPhysicalPages;                                                 //0x29c
    ULONG ProcessLockedFilePages;                                           //0x2a0
    ULONG ChargeCommitmentFailures[4];                                      //0x2a4
    volatile LONG PageFileTraceIndex;                                       //0x2b4
    struct _MI_PAGEFILE_TRACES PageFileTraces[32];                          //0x2b8
};
/* Used in */
// _MI_PARTITION

