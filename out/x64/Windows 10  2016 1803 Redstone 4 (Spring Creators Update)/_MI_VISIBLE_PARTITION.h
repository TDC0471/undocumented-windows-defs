#pragma once
/* ------------------ */

#include <_MMPAGING_FILE.h>
#include <_MMSUPPORT_INSTANCE.h>
#include <_MMWSL_INSTANCE.h>
#include <_MMPFNLIST.h>
#include <_MI_PAGEFILE_TRACES.h>

//0x1200 bytes (sizeof)
struct _MI_VISIBLE_PARTITION
{
    ULONGLONG LowestPhysicalPage;                                           //0x0
    ULONGLONG HighestPhysicalPage;                                          //0x8
    ULONGLONG NumberOfPhysicalPages;                                        //0x10
    volatile ULONG NumberOfPagingFiles;                                     //0x18
    UCHAR SystemCacheInitialized;                                           //0x1c
    struct _MMPAGING_FILE* PagingFile[16];                                  //0x20
    volatile ULONGLONG AvailablePages;                                      //0xc0
    volatile ULONGLONG ResidentAvailablePages;                              //0x100
    struct _MMSUPPORT_INSTANCE PartitionWs[1];                              //0x140
    struct _MMWSL_INSTANCE PartitionWorkingSetLists[1];                     //0x200
    volatile ULONGLONG TotalCommittedPages;                                 //0x228
    struct _MMPFNLIST ModifiedPageListHead;                                 //0x240
    struct _MMPFNLIST ModifiedNoWritePageListHead;                          //0x280
    ULONGLONG TotalCommitLimit;                                             //0x2a8
    ULONGLONG TotalPagesForPagingFile;                                      //0x2b0
    ULONGLONG VadPhysicalPages;                                             //0x2b8
    ULONGLONG ProcessLockedFilePages;                                       //0x2c0
    volatile ULONGLONG SharedCommit;                                        //0x2c8
    ULONG ChargeCommitmentFailures[4];                                      //0x2d0
    volatile LONG PageFileTraceIndex;                                       //0x2e0
    struct _MI_PAGEFILE_TRACES PageFileTraces[32];                          //0x2e8
};
/* Used in */
// _MI_PARTITION

