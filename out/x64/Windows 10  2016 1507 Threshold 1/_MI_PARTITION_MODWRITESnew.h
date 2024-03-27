#pragma once
/* ------------------ */

#include <_MMPAGE_FILE_EXPANSION.h>
#include <_MMMOD_WRITER_LISTHEAD.h>
#include <_KEVENT.h>
#include <_MI_MODWRITE_DATA.h>
#include <_ETHREAD.h>
#include <_EX_RUNDOWN_REF.h>
#include <_WORK_QUEUE_ITEM.h>
#include <_EX_PUSH_LOCK.h>

//0x2a0 bytes (sizeof)
struct _MI_PARTITION_MODWRITES
{
    struct _MMPAGE_FILE_EXPANSION AttemptForCantExtend;                     //0x0
    struct _MMPAGE_FILE_EXPANSION PageFileContract;                         //0x60
    ULONGLONG NumberOfMappedMdls;                                           //0xc0
    volatile LONG NumberOfMappedMdlsInUse;                                  //0xc8
    ULONG NumberOfMappedMdlsInUsePeak;                                      //0xcc
    struct _MMMOD_WRITER_LISTHEAD MappedFileHeader;                         //0xd0
    UCHAR NeedMappedMdl;                                                    //0xf8
    UCHAR NeedPageFileMdl;                                                  //0xf9
    UCHAR TransitionInserted;                                               //0xfa
    LONG LastModifiedWriteError;                                            //0xfc
    LONG LastMappedWriteError;                                              //0x100
    volatile ULONG MappedFileWriteSucceeded;                                //0x104
    ULONG MappedWriteBurstCount;                                            //0x108
    ULONG LowPriorityModWritesOutstanding;                                  //0x10c
    struct _KEVENT BoostModWriteIoPriorityEvent;                            //0x110
    LONG ModifiedWriterThreadPriority;                                      //0x128
    ULONGLONG ModifiedPagesLowPriorityGoal;                                 //0x130
    struct _KEVENT ModifiedPageWriterEvent;                                 //0x138
    volatile LONG WriteAllPagefilePages;                                    //0x150
    volatile LONG WriteAllMappedPages;                                      //0x154
    struct _KEVENT MappedPageWriterEvent;                                   //0x158
    struct _MI_MODWRITE_DATA ModWriteData;                                  //0x170
    struct _KEVENT RescanPageFilesEvent;                                    //0x1b0
    struct _MMMOD_WRITER_LISTHEAD PagingFileHeader;                         //0x1c8
    struct _ETHREAD* ModifiedPageWriterThread;                              //0x1f0
    struct _EX_RUNDOWN_REF ModifiedPageWriterRundown;                       //0x1f8
    struct _WORK_QUEUE_ITEM PagefileScanWorkItem;                           //0x200
    ULONG PagefileScanCount;                                                //0x220
    volatile LONG ClusterWritesDisabled[2];                                 //0x224
    volatile UCHAR DelayMappedWrite;                                        //0x22c
    volatile ULONG PagefileReservationsEnabled;                             //0x230
    struct _EX_PUSH_LOCK PageFileCreationLock;                              //0x238
    struct _WORK_QUEUE_ITEM TrimPagefileWorkItem;                           //0x240
    ULONGLONG LastTrimPagefileTime;                                         //0x260
    struct _WORK_QUEUE_ITEM WsSwapPagefileContractWorkItem;                 //0x268
    volatile LONG WsSwapPageFileContractionInProgress;                      //0x288
    struct _EX_PUSH_LOCK WorkingSetSwapLock;                                //0x290
    volatile LONG WorkingSetInswapLock;                                     //0x298
};
/* Used in */
// _MI_PARTITION

