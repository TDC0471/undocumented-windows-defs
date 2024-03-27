#pragma once
/* ------------------ */

#include <_MMPAGE_FILE_EXPANSION.h>
#include <_MMMOD_WRITER_LISTHEAD.h>
#include <_KEVENT.h>
#include <_MI_MODWRITE_DATA.h>
#include <_ETHREAD.h>
#include <_EX_RUNDOWN_REF.h>
#include <_WORK_QUEUE_ITEM.h>
#include <_MI_RESTRICTED_MODWRITES.h>
#include <_EX_PUSH_LOCK.h>

//0x2c0 bytes (sizeof)
struct _MI_PARTITION_MODWRITES
{
    struct _MMPAGE_FILE_EXPANSION AttemptForCantExtend;                     //0x0
    struct _MMPAGE_FILE_EXPANSION PageFileContract;                         //0x58
    ULONGLONG NumberOfMappedMdls;                                           //0xb0
    volatile LONG NumberOfMappedMdlsInUse;                                  //0xb8
    ULONG NumberOfMappedMdlsInUsePeak;                                      //0xbc
    struct _MMMOD_WRITER_LISTHEAD MappedFileHeader;                         //0xc0
    UCHAR NeedMappedMdl;                                                    //0xe8
    UCHAR NeedPageFileMdl;                                                  //0xe9
    UCHAR ModwriterActive;                                                  //0xea
    UCHAR TransitionInserted;                                               //0xeb
    LONG LastModifiedWriteError;                                            //0xec
    LONG LastMappedWriteError;                                              //0xf0
    volatile ULONG MappedFileWriteSucceeded;                                //0xf4
    ULONG MappedWriteBurstCount;                                            //0xf8
    ULONG LowPriorityModWritesOutstanding;                                  //0xfc
    struct _KEVENT BoostModWriteIoPriorityEvent;                            //0x100
    LONG ModifiedWriterThreadPriority;                                      //0x118
    ULONGLONG ModifiedPagesLowPriorityGoal;                                 //0x120
    struct _KEVENT ModifiedPageWriterEvent;                                 //0x128
    struct _KEVENT ModifiedWriterExitedEvent;                               //0x140
    volatile LONG WriteAllPagefilePages;                                    //0x158
    volatile LONG WriteAllMappedPages;                                      //0x15c
    struct _KEVENT MappedPageWriterEvent;                                   //0x160
    struct _MI_MODWRITE_DATA ModWriteData;                                  //0x178
    struct _KEVENT RescanPageFilesEvent;                                    //0x1b8
    struct _MMMOD_WRITER_LISTHEAD PagingFileHeader;                         //0x1d0
    struct _ETHREAD* ModifiedPageWriterThread;                              //0x1f8
    struct _EX_RUNDOWN_REF ModifiedPageWriterRundown;                       //0x200
    struct _WORK_QUEUE_ITEM PagefileScanWorkItem;                           //0x208
    ULONG PagefileScanCount;                                                //0x228
    volatile LONG ClusterRestrictionLock;                                   //0x22c
    struct _MI_RESTRICTED_MODWRITES ClusterRestrictions[2];                 //0x230
    struct _KEVENT NotifyStoreMemoryConditions;                             //0x238
    volatile UCHAR DelayMappedWrite;                                        //0x250
    volatile ULONG PagefileReservationsEnabled;                             //0x254
    struct _EX_PUSH_LOCK PageFileCreationLock;                              //0x258
    struct _WORK_QUEUE_ITEM TrimPagefileWorkItem;                           //0x260
    ULONGLONG LastTrimPagefileTime;                                         //0x280
    struct _WORK_QUEUE_ITEM WsSwapPagefileContractWorkItem;                 //0x288
    volatile LONG WsSwapPageFileContractionInProgress;                      //0x2a8
    struct _EX_PUSH_LOCK WorkingSetSwapLock;                                //0x2b0
    volatile LONG WorkingSetInswapLock;                                     //0x2b8
};
/* Used in */
// _MI_PARTITION

