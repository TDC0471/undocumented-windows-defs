#pragma once
/* ------------------ */

#include <_MMPAGING_FILE.h>
#include <_MMSUPPORT_INSTANCE.h>
#include <_MMWSL_INSTANCE.h>
#include <_MMPFNLIST.h>
#include <_MI_PAGEFILE_TRACES.h>

//0xc00 bytes (sizeof)
struct _MI_VISIBLE_PARTITION
{
    ULONG LowestPhysicalPage;                                               //0x0
    ULONG HighestPhysicalPage;                                              //0x4
    ULONG NumberOfPhysicalPages;                                            //0x8
    volatile ULONG NumberOfPagingFiles;                                     //0xc
    UCHAR SystemCacheInitialized;                                           //0x10
    struct _MMPAGING_FILE* PagingFile[16];                                  //0x14
    volatile ULONG AvailablePages;                                          //0x80
    volatile ULONG ResidentAvailablePages;                                  //0xc0
    struct _MMSUPPORT_INSTANCE PartitionWs[1];                              //0x100
    struct _MMWSL_INSTANCE PartitionWorkingSetLists[1];                     //0x164
    volatile ULONG TotalCommittedPages;                                     //0x17c
    struct _MMPFNLIST ModifiedPageListHead;                                 //0x180
    struct _MMPFNLIST ModifiedNoWritePageListHead;                          //0x1c0
    ULONG TotalCommitLimit;                                                 //0x1d4
    ULONG TotalPagesForPagingFile;                                          //0x1d8
    ULONG VadPhysicalPages;                                                 //0x1dc
    ULONG ProcessLockedFilePages;                                           //0x1e0
    volatile ULONG SharedCommit;                                            //0x1e4
    ULONG ChargeCommitmentFailures[4];                                      //0x1e8
    volatile LONG PageFileTraceIndex;                                       //0x1f8
    struct _MI_PAGEFILE_TRACES PageFileTraces[32];                          //0x200
};
/* Used in */
// _MI_PARTITION

