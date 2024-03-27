#pragma once
/* ------------------ */

#include <_CURDIR.h>
#include <_UNICODE_STRING.h>
#include <_RTL_DRIVE_LETTER_CURDIR.h>

//0x2c0 bytes (sizeof)
struct _RTL_USER_PROCESS_PARAMETERS
{
    ULONG MaximumLength;                                                    //0x0
    ULONG Length;                                                           //0x4
    ULONG Flags;                                                            //0x8
    ULONG DebugFlags;                                                       //0xc
    VOID* ConsoleHandle;                                                    //0x10
    ULONG ConsoleFlags;                                                     //0x14
    VOID* StandardInput;                                                    //0x18
    VOID* StandardOutput;                                                   //0x1c
    VOID* StandardError;                                                    //0x20
    struct _CURDIR CurrentDirectory;                                        //0x24
    struct _UNICODE_STRING DllPath;                                         //0x30
    struct _UNICODE_STRING ImagePathName;                                   //0x38
    struct _UNICODE_STRING CommandLine;                                     //0x40
    VOID* Environment;                                                      //0x48
    ULONG StartingX;                                                        //0x4c
    ULONG StartingY;                                                        //0x50
    ULONG CountX;                                                           //0x54
    ULONG CountY;                                                           //0x58
    ULONG CountCharsX;                                                      //0x5c
    ULONG CountCharsY;                                                      //0x60
    ULONG FillAttribute;                                                    //0x64
    ULONG WindowFlags;                                                      //0x68
    ULONG ShowWindowFlags;                                                  //0x6c
    struct _UNICODE_STRING WindowTitle;                                     //0x70
    struct _UNICODE_STRING DesktopInfo;                                     //0x78
    struct _UNICODE_STRING ShellInfo;                                       //0x80
    struct _UNICODE_STRING RuntimeData;                                     //0x88
    struct _RTL_DRIVE_LETTER_CURDIR CurrentDirectores[32];                  //0x90
    ULONG EnvironmentSize;                                                  //0x290
    ULONG EnvironmentVersion;                                               //0x294
    VOID* PackageDependencyData;                                            //0x298
    ULONG ProcessGroupId;                                                   //0x29c
    ULONG LoaderThreads;                                                    //0x2a0
    struct _UNICODE_STRING RedirectionDllName;                              //0x2a4
    struct _UNICODE_STRING HeapPartitionName;                               //0x2ac
    ULONGLONG* DefaultThreadpoolCpuSetMasks;                                //0x2b4
    ULONG DefaultThreadpoolCpuSetMaskCount;                                 //0x2b8
    ULONG DefaultThreadpoolThreadMaximum;                                   //0x2bc
};
/* Used in */
// _PEB

