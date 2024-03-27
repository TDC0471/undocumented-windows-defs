#pragma once
/* ------------------ */

#include <_MMPAGING_FILE.h>
#include <_MMPFNLIST.h>
#include <_MI_PAGEFILE_TRACES.h>

//0xb80 bytes (sizeof)
struct _MI_VISIBLE_PARTITION
{
    ULONG LowestPhysicalPage;                                               //0x0
    ULONG HighestPhysicalPage;                                              //0x4
    ULONG NumberOfPhysicalPages;                                            //0x8
    volatile ULONG NumberOfPagingFiles;                                     //0xc
    struct _MMPAGING_FILE* PagingFile[16];                                  //0x10
    volatile ULONG AvailablePages;                                          //0x80
    volatile ULONG ResidentAvailablePages;                                  //0xc0
    volatile ULONG TotalCommittedPages;                                     //0xc4
    struct _MMPFNLIST ModifiedPageListHead;                                 //0x100
    struct _MMPFNLIST ModifiedNoWritePageListHead;                          //0x140
    ULONG TotalCommitLimit;                                                 //0x154
    ULONG TotalPagesForPagingFile;                                          //0x158
    ULONG VadPhysicalPages;                                                 //0x15c
    ULONG ProcessLockedFilePages;                                           //0x160
    ULONG ChargeCommitmentFailures[4];                                      //0x164
    volatile LONG PageFileTraceIndex;                                       //0x174
    struct _MI_PAGEFILE_TRACES PageFileTraces[32];                          //0x178
};
/* Used in */
// _MI_PARTITION

