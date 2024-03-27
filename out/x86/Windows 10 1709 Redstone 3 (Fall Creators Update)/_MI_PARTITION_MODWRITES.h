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

//0x1c8 bytes (sizeof)
struct _MI_PARTITION_MODWRITES
{
    struct _MMPAGE_FILE_EXPANSION AttemptForCantExtend;                     //0x0
    struct _MMPAGE_FILE_EXPANSION PageFileContract;                         //0x34
    ULONG NumberOfMappedMdls;                                               //0x68
    volatile LONG NumberOfMappedMdlsInUse;                                  //0x6c
    ULONG NumberOfMappedMdlsInUsePeak;                                      //0x70
    struct _MMMOD_WRITER_LISTHEAD MappedFileHeader;                         //0x74
    UCHAR NeedMappedMdl;                                                    //0x8c
    UCHAR NeedPageFileMdl;                                                  //0x8d
    UCHAR ModwriterActive;                                                  //0x8e
    UCHAR TransitionInserted;                                               //0x8f
    LONG LastModifiedWriteError;                                            //0x90
    LONG LastMappedWriteError;                                              //0x94
    volatile ULONG MappedFileWriteSucceeded;                                //0x98
    ULONG MappedWriteBurstCount;                                            //0x9c
    ULONG LowPriorityModWritesOutstanding;                                  //0xa0
    struct _KEVENT BoostModWriteIoPriorityEvent;                            //0xa4
    LONG ModifiedWriterThreadPriority;                                      //0xb4
    ULONG ModifiedPagesLowPriorityGoal;                                     //0xb8
    struct _KEVENT ModifiedPageWriterEvent;                                 //0xbc
    struct _KEVENT ModifiedWriterExitedEvent;                               //0xcc
    volatile LONG WriteAllPagefilePages;                                    //0xdc
    volatile LONG WriteAllMappedPages;                                      //0xe0
    struct _KEVENT MappedPageWriterEvent;                                   //0xe4
    struct _MI_MODWRITE_DATA ModWriteData;                                  //0xf8
    struct _KEVENT RescanPageFilesEvent;                                    //0x128
    struct _MMMOD_WRITER_LISTHEAD PagingFileHeader;                         //0x138
    struct _ETHREAD* ModifiedPageWriterThread;                              //0x150
    struct _EX_RUNDOWN_REF ModifiedPageWriterRundown;                       //0x154
    struct _WORK_QUEUE_ITEM PagefileScanWorkItem;                           //0x158
    ULONG PagefileScanCount;                                                //0x168
    volatile LONG ClusterWritesDisabled[2];                                 //0x16c
    struct _KEVENT NotifyStoreMemoryConditions;                             //0x174
    volatile UCHAR DelayMappedWrite;                                        //0x184
    volatile ULONG PagefileReservationsEnabled;                             //0x188
    struct _EX_PUSH_LOCK PageFileCreationLock;                              //0x18c
    struct _WORK_QUEUE_ITEM TrimPagefileWorkItem;                           //0x190
    ULONGLONG LastTrimPagefileTime;                                         //0x1a0
    struct _WORK_QUEUE_ITEM WsSwapPagefileContractWorkItem;                 //0x1a8
    volatile LONG WsSwapPageFileContractionInProgress;                      //0x1b8
    struct _EX_PUSH_LOCK WorkingSetSwapLock;                                //0x1bc
    volatile LONG WorkingSetInswapLock;                                     //0x1c0
};
/* Used in */
// _MI_PARTITION

