#pragma once
/* ------------------ */

#include <_MMPAGING_FILE.h>
#include <_MMSUPPORT_INSTANCE.h>
#include <_MMWSL_INSTANCE.h>
#include <_MMPFNLIST.h>
#include <_MI_PAGEFILE_TRACES.h>

//0x1380 bytes (sizeof)
struct _MI_VISIBLE_PARTITION
{
    ULONGLONG LowestPhysicalPage;                                           //0x0
    ULONGLONG HighestPhysicalPage;                                          //0x8
    ULONGLONG NumberOfPhysicalPages;                                        //0x10
    volatile ULONG NumberOfPagingFiles;                                     //0x18
    struct _MMPAGING_FILE* PagingFile[16];                                  //0x20
    volatile ULONGLONG AvailablePages;                                      //0xc0
    volatile ULONGLONG ResidentAvailablePages;                              //0x100
    struct _MMSUPPORT_INSTANCE PartitionWs[1];                              //0x140
    struct _MMWSL_INSTANCE PartitionWorkingSetLists[1];                     //0x200
    UCHAR SystemCacheInitialized;                                           //0x3a0
    volatile ULONGLONG TotalCommittedPages;                                 //0x3a8
    struct _MMPFNLIST ModifiedPageListHead;                                 //0x3c0
    struct _MMPFNLIST ModifiedNoWritePageListHead;                          //0x400
    ULONGLONG TotalCommitLimit;                                             //0x428
    ULONGLONG TotalPagesForPagingFile;                                      //0x430
    ULONGLONG VadPhysicalPages;                                             //0x438
    ULONGLONG ProcessLockedFilePages;                                       //0x440
    ULONG ChargeCommitmentFailures[4];                                      //0x448
    volatile ULONGLONG PageTableBitmapPages;                                //0x458
    volatile LONG PageFileTraceIndex;                                       //0x460
    struct _MI_PAGEFILE_TRACES PageFileTraces[32];                          //0x468
};
/* Used in */
// _MI_PARTITION

