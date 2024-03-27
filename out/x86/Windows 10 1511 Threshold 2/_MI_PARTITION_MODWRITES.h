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

//0x1d0 bytes (sizeof)
struct _MI_PARTITION_MODWRITES
{
    struct _MMPAGE_FILE_EXPANSION AttemptForCantExtend;                     //0x0
    struct _MMPAGE_FILE_EXPANSION PageFileContract;                         //0x38
    ULONG NumberOfMappedMdls;                                               //0x70
    volatile LONG NumberOfMappedMdlsInUse;                                  //0x74
    ULONG NumberOfMappedMdlsInUsePeak;                                      //0x78
    struct _MMMOD_WRITER_LISTHEAD MappedFileHeader;                         //0x7c
    UCHAR NeedMappedMdl;                                                    //0x94
    UCHAR NeedPageFileMdl;                                                  //0x95
    UCHAR TransitionInserted;                                               //0x96
    LONG LastModifiedWriteError;                                            //0x98
    LONG LastMappedWriteError;                                              //0x9c
    volatile ULONG MappedFileWriteSucceeded;                                //0xa0
    ULONG MappedWriteBurstCount;                                            //0xa4
    ULONG LowPriorityModWritesOutstanding;                                  //0xa8
    struct _KEVENT BoostModWriteIoPriorityEvent;                            //0xac
    LONG ModifiedWriterThreadPriority;                                      //0xbc
    ULONG ModifiedPagesLowPriorityGoal;                                     //0xc0
    struct _KEVENT ModifiedPageWriterEvent;                                 //0xc4
    struct _KEVENT ModifiedWriterExitedEvent;                               //0xd4
    volatile LONG WriteAllPagefilePages;                                    //0xe4
    volatile LONG WriteAllMappedPages;                                      //0xe8
    struct _KEVENT MappedPageWriterEvent;                                   //0xec
    struct _MI_MODWRITE_DATA ModWriteData;                                  //0x100
    struct _KEVENT RescanPageFilesEvent;                                    //0x130
    struct _MMMOD_WRITER_LISTHEAD PagingFileHeader;                         //0x140
    struct _ETHREAD* ModifiedPageWriterThread;                              //0x158
    struct _EX_RUNDOWN_REF ModifiedPageWriterRundown;                       //0x15c
    struct _WORK_QUEUE_ITEM PagefileScanWorkItem;                           //0x160
    ULONG PagefileScanCount;                                                //0x170
    volatile LONG ClusterWritesDisabled[2];                                 //0x174
    struct _KEVENT NotifyStoreMemoryConditions;                             //0x17c
    volatile UCHAR DelayMappedWrite;                                        //0x18c
    volatile ULONG PagefileReservationsEnabled;                             //0x190
    struct _EX_PUSH_LOCK PageFileCreationLock;                              //0x194
    struct _WORK_QUEUE_ITEM TrimPagefileWorkItem;                           //0x198
    ULONGLONG LastTrimPagefileTime;                                         //0x1a8
    struct _WORK_QUEUE_ITEM WsSwapPagefileContractWorkItem;                 //0x1b0
    volatile LONG WsSwapPageFileContractionInProgress;                      //0x1c0
    struct _EX_PUSH_LOCK WorkingSetSwapLock;                                //0x1c4
    volatile LONG WorkingSetInswapLock;                                     //0x1c8
};
/* Used in */
// _MI_PARTITION

