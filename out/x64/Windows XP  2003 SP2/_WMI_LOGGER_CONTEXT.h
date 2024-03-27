#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>
#include <_KSEMAPHORE.h>
#include <_ETHREAD.h>
#include <_KEVENT.h>
#include <_SLIST_HEADER.h>
#include <_WMI_BUFFER_HEADER.h>
#include <_UNICODE_STRING.h>
#include <_WMI_LOGGER_MODE.h>
#include <_GUID.h>
#include <_SECURITY_CLIENT_CONTEXT.h>
#include <_TRACE_ENABLE_FLAG_EXTENSION.h>
#include <_KMUTANT.h>
#include <_POOL_TYPE.h>

//0x280 bytes (sizeof)
struct _WMI_LOGGER_CONTEXT
{
    ULONGLONG BufferSpinLock;                                               //0x0
    union _LARGE_INTEGER StartTime;                                         //0x8
    VOID* LogFileHandle;                                                    //0x10
    struct _KSEMAPHORE LoggerSemaphore;                                     //0x18
    struct _ETHREAD* LoggerThread;                                          //0x38
    struct _KEVENT LoggerEvent;                                             //0x40
    struct _KEVENT FlushEvent;                                              //0x58
    LONG LoggerStatus;                                                      //0x70
    ULONG LoggerId;                                                         //0x74
    LONG BuffersAvailable;                                                  //0x78
    ULONG UsePerfClock;                                                     //0x7c
    ULONG WriteFailureLimit;                                                //0x80
    LONG BuffersDirty;                                                      //0x84
    LONG BuffersInUse;                                                      //0x88
    ULONG SwitchingInProgress;                                              //0x8c
    struct _SLIST_HEADER FreeList;                                          //0x90
    struct _SLIST_HEADER FlushList;                                         //0xa0
    struct _SLIST_HEADER WaitList;                                          //0xb0
    struct _SLIST_HEADER GlobalList;                                        //0xc0
    struct _WMI_BUFFER_HEADER** ProcessorBuffers;                           //0xd0
    struct _UNICODE_STRING LoggerName;                                      //0xd8
    struct _UNICODE_STRING LogFileName;                                     //0xe8
    struct _UNICODE_STRING LogFilePattern;                                  //0xf8
    struct _UNICODE_STRING NewLogFileName;                                  //0x108
    UCHAR* EndPageMarker;                                                   //0x118
    LONG CollectionOn;                                                      //0x120
    ULONG KernelTraceOn;                                                    //0x124
    LONG PerfLogInTransition;                                               //0x128
    ULONG RequestFlag;                                                      //0x12c
    ULONG EnableFlags;                                                      //0x130
    ULONG MaximumFileSize;                                                  //0x134
    union
    {
        ULONG LoggerMode;                                                   //0x138
        struct _WMI_LOGGER_MODE LoggerModeFlags;                            //0x138
    };
    ULONG Wow;                                                              //0x13c
    ULONG LastFlushedBuffer;                                                //0x140
    ULONG RefCount;                                                         //0x144
    ULONG FlushTimer;                                                       //0x148
    union _LARGE_INTEGER FirstBufferOffset;                                 //0x150
    union _LARGE_INTEGER ByteOffset;                                        //0x158
    union _LARGE_INTEGER BufferAgeLimit;                                    //0x160
    ULONG MaximumBuffers;                                                   //0x168
    ULONG MinimumBuffers;                                                   //0x16c
    ULONG EventsLost;                                                       //0x170
    ULONG BuffersWritten;                                                   //0x174
    ULONG LogBuffersLost;                                                   //0x178
    ULONG RealTimeBuffersLost;                                              //0x17c
    ULONG BufferSize;                                                       //0x180
    LONG NumberOfBuffers;                                                   //0x184
    LONG* SequencePtr;                                                      //0x188
    struct _GUID InstanceGuid;                                              //0x190
    VOID* LoggerHeader;                                                     //0x1a0
    LONGLONG (*GetCpuClock)();                                              //0x1a8
    struct _SECURITY_CLIENT_CONTEXT ClientSecurityContext;                  //0x1b0
    VOID* LoggerExtension;                                                  //0x1f8
    LONG ReleaseQueue;                                                      //0x200
    struct _TRACE_ENABLE_FLAG_EXTENSION EnableFlagExtension;                //0x204
    ULONG LocalSequence;                                                    //0x208
    ULONG MaximumIrql;                                                      //0x20c
    ULONG* EnableFlagArray;                                                 //0x210
    struct _KMUTANT LoggerMutex;                                            //0x218
    LONG MutexCount;                                                        //0x250
    LONG FileCounter;                                                       //0x254
    VOID (*BufferCallback)(struct _WMI_BUFFER_HEADER* arg1, VOID* arg2);    //0x258
    VOID* CallbackContext;                                                  //0x260
    enum _POOL_TYPE PoolType;                                               //0x268
    union _LARGE_INTEGER ReferenceSystemTime;                               //0x270
    union _LARGE_INTEGER ReferenceTimeStamp;                                //0x278
};
