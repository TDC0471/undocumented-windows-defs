#pragma once
/* ------------------ */

#include <_MMPAGING_FILE.h>
#include <_MMPFNLIST.h>
#include <_MI_PAGEFILE_TRACES.h>

//0x1100 bytes (sizeof)
struct _MI_VISIBLE_PARTITION
{
    ULONGLONG LowestPhysicalPage;                                           //0x0
    ULONGLONG HighestPhysicalPage;                                          //0x8
    ULONGLONG NumberOfPhysicalPages;                                        //0x10
    volatile ULONG NumberOfPagingFiles;                                     //0x18
    struct _MMPAGING_FILE* PagingFile[16];                                  //0x20
    volatile ULONGLONG AvailablePages;                                      //0xc0
    volatile ULONGLONG ResidentAvailablePages;                              //0x100
    volatile ULONGLONG TotalCommittedPages;                                 //0x108
    struct _MMPFNLIST ModifiedPageListHead;                                 //0x140
    struct _MMPFNLIST ModifiedNoWritePageListHead;                          //0x180
    ULONGLONG TotalCommitLimit;                                             //0x1a8
    ULONGLONG TotalPagesForPagingFile;                                      //0x1b0
    ULONGLONG VadPhysicalPages;                                             //0x1b8
    ULONGLONG ProcessLockedFilePages;                                       //0x1c0
    ULONG ChargeCommitmentFailures[4];                                      //0x1c8
    volatile ULONGLONG PageTableBitmapPages;                                //0x1d8
    volatile LONG PageFileTraceIndex;                                       //0x1e0
    struct _MI_PAGEFILE_TRACES PageFileTraces[32];                          //0x1e8
};
/* Used in */
// _MI_PARTITION

