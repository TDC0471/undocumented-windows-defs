#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>
#include <_KSEMAPHORE.h>
#include <_ETHREAD.h>
#include <_KEVENT.h>
#include <_SLIST_HEADER.h>
#include <_UNICODE_STRING.h>
#include <_WMI_LOGGER_MODE.h>
#include <_GUID.h>
#include <_SECURITY_CLIENT_CONTEXT.h>
#include <_TRACE_ENABLE_FLAG_EXTENSION.h>
#include <_KMUTANT.h>
#include <_WMI_BUFFER_HEADER.h>
#include <_POOL_TYPE.h>

//0x1c8 bytes (sizeof)
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
    ULONG BuffersDirty;                                                     //0x60
    ULONG BuffersInUse;                                                     //0x64
    ULONG SwitchingInProgress;                                              //0x68
    union _SLIST_HEADER FreeList;                                           //0x70
    union _SLIST_HEADER FlushList;                                          //0x78
    union _SLIST_HEADER GlobalList;                                         //0x80
    union _SLIST_HEADER* ProcessorBuffers;                                  //0x88
    struct _UNICODE_STRING LoggerName;                                      //0x8c
    struct _UNICODE_STRING LogFileName;                                     //0x94
    struct _UNICODE_STRING LogFilePattern;                                  //0x9c
    struct _UNICODE_STRING NewLogFileName;                                  //0xa4
    UCHAR* EndPageMarker;                                                   //0xac
    LONG CollectionOn;                                                      //0xb0
    ULONG KernelTraceOn;                                                    //0xb4
    LONG PerfLogInTransition;                                               //0xb8
    ULONG RequestFlag;                                                      //0xbc
    ULONG EnableFlags;                                                      //0xc0
    ULONG MaximumFileSize;                                                  //0xc4
    union
    {
        ULONG LoggerMode;                                                   //0xc8
        struct _WMI_LOGGER_MODE LoggerModeFlags;                            //0xc8
    };
    ULONG LastFlushedBuffer;                                                //0xcc
    ULONG RefCount;                                                         //0xd0
    ULONG FlushTimer;                                                       //0xd4
    union _LARGE_INTEGER FirstBufferOffset;                                 //0xd8
    union _LARGE_INTEGER ByteOffset;                                        //0xe0
    union _LARGE_INTEGER BufferAgeLimit;                                    //0xe8
    ULONG MaximumBuffers;                                                   //0xf0
    ULONG MinimumBuffers;                                                   //0xf4
    ULONG EventsLost;                                                       //0xf8
    ULONG BuffersWritten;                                                   //0xfc
    ULONG LogBuffersLost;                                                   //0x100
    ULONG RealTimeBuffersLost;                                              //0x104
    ULONG BufferSize;                                                       //0x108
    LONG NumberOfBuffers;                                                   //0x10c
    LONG* SequencePtr;                                                      //0x110
    struct _GUID InstanceGuid;                                              //0x114
    VOID* LoggerHeader;                                                     //0x124
    LONGLONG (*GetCpuClock)();                                              //0x128
    struct _SECURITY_CLIENT_CONTEXT ClientSecurityContext;                  //0x12c
    VOID* LoggerExtension;                                                  //0x168
    LONG ReleaseQueue;                                                      //0x16c
    struct _TRACE_ENABLE_FLAG_EXTENSION EnableFlagExtension;                //0x170
    ULONG LocalSequence;                                                    //0x174
    ULONG MaximumIrql;                                                      //0x178
    ULONG* EnableFlagArray;                                                 //0x17c
    struct _KMUTANT LoggerMutex;                                            //0x180
    LONG MutexCount;                                                        //0x1a0
    ULONG FileCounter;                                                      //0x1a4
    VOID (*BufferCallback)(struct _WMI_BUFFER_HEADER* arg1, VOID* arg2);    //0x1a8
    VOID* CallbackContext;                                                  //0x1ac
    enum _POOL_TYPE PoolType;                                               //0x1b0
    union _LARGE_INTEGER ReferenceSystemTime;                               //0x1b8
    union _LARGE_INTEGER ReferenceTimeStamp;                                //0x1c0
};
