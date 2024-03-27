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

//0x1d8 bytes (sizeof)
struct _WMI_LOGGER_CONTEXT
{
    ULONG BufferSpinLock;                                                   //0x0
    union _LARGE_INTEGER StartTime;                                         //0x8
    VOID* LogFileHandle;                                                    //0x10
    struct _KSEMAPHORE LoggerSemaphore;                                     //0x14
    struct _ETHREAD* LoggerThread;                                          //0x28
    struct _KEVENT LoggerEvent;                                             //0x2c
    struct _KEVENT FlushEvent;                                              //0x3c
    LONG LoggerStatus;                                                      //0x4c
    ULONG LoggerId;                                                         //0x50
    LONG BuffersAvailable;                                                  //0x54
    ULONG UsePerfClock;                                                     //0x58
    ULONG WriteFailureLimit;                                                //0x5c
    LONG BuffersDirty;                                                      //0x60
    LONG BuffersInUse;                                                      //0x64
    ULONG SwitchingInProgress;                                              //0x68
    union _SLIST_HEADER FreeList;                                           //0x70
    union _SLIST_HEADER FlushList;                                          //0x78
    union _SLIST_HEADER WaitList;                                           //0x80
    union _SLIST_HEADER GlobalList;                                         //0x88
    struct _WMI_BUFFER_HEADER** ProcessorBuffers;                           //0x90
    struct _UNICODE_STRING LoggerName;                                      //0x94
    struct _UNICODE_STRING LogFileName;                                     //0x9c
    struct _UNICODE_STRING LogFilePattern;                                  //0xa4
    struct _UNICODE_STRING NewLogFileName;                                  //0xac
    UCHAR* EndPageMarker;                                                   //0xb4
    LONG CollectionOn;                                                      //0xb8
    ULONG KernelTraceOn;                                                    //0xbc
    LONG PerfLogInTransition;                                               //0xc0
    ULONG RequestFlag;                                                      //0xc4
    ULONG EnableFlags;                                                      //0xc8
    ULONG MaximumFileSize;                                                  //0xcc
    union
    {
        ULONG LoggerMode;                                                   //0xd0
        struct _WMI_LOGGER_MODE LoggerModeFlags;                            //0xd0
    };
    ULONG Wow;                                                              //0xd4
    ULONG LastFlushedBuffer;                                                //0xd8
    ULONG RefCount;                                                         //0xdc
    ULONG FlushTimer;                                                       //0xe0
    union _LARGE_INTEGER FirstBufferOffset;                                 //0xe8
    union _LARGE_INTEGER ByteOffset;                                        //0xf0
    union _LARGE_INTEGER BufferAgeLimit;                                    //0xf8
    ULONG MaximumBuffers;                                                   //0x100
    ULONG MinimumBuffers;                                                   //0x104
    ULONG EventsLost;                                                       //0x108
    ULONG BuffersWritten;                                                   //0x10c
    ULONG LogBuffersLost;                                                   //0x110
    ULONG RealTimeBuffersLost;                                              //0x114
    ULONG BufferSize;                                                       //0x118
    LONG NumberOfBuffers;                                                   //0x11c
    LONG* SequencePtr;                                                      //0x120
    struct _GUID InstanceGuid;                                              //0x124
    VOID* LoggerHeader;                                                     //0x134
    LONGLONG (*GetCpuClock)();                                              //0x138
    struct _SECURITY_CLIENT_CONTEXT ClientSecurityContext;                  //0x13c
    VOID* LoggerExtension;                                                  //0x178
    LONG ReleaseQueue;                                                      //0x17c
    struct _TRACE_ENABLE_FLAG_EXTENSION EnableFlagExtension;                //0x180
    ULONG LocalSequence;                                                    //0x184
    ULONG MaximumIrql;                                                      //0x188
    ULONG* EnableFlagArray;                                                 //0x18c
    struct _KMUTANT LoggerMutex;                                            //0x190
    LONG MutexCount;                                                        //0x1b0
    LONG FileCounter;                                                       //0x1b4
    VOID (*BufferCallback)(struct _WMI_BUFFER_HEADER* arg1, VOID* arg2);    //0x1b8
    VOID* CallbackContext;                                                  //0x1bc
    enum _POOL_TYPE PoolType;                                               //0x1c0
    union _LARGE_INTEGER ReferenceSystemTime;                               //0x1c8
    union _LARGE_INTEGER ReferenceTimeStamp;                                //0x1d0
};
