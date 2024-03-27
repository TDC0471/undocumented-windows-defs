#pragma once
/* ------------------ */

#include <_CURDIR.h>
#include <_UNICODE_STRING.h>
#include <_RTL_DRIVE_LETTER_CURDIR.h>

//0x400 bytes (sizeof)
struct _RTL_USER_PROCESS_PARAMETERS
{
    ULONG MaximumLength;                                                    //0x0
    ULONG Length;                                                           //0x4
    ULONG Flags;                                                            //0x8
    ULONG DebugFlags;                                                       //0xc
    VOID* ConsoleHandle;                                                    //0x10
    ULONG ConsoleFlags;                                                     //0x18
    VOID* StandardInput;                                                    //0x20
    VOID* StandardOutput;                                                   //0x28
    VOID* StandardError;                                                    //0x30
    struct _CURDIR CurrentDirectory;                                        //0x38
    struct _UNICODE_STRING DllPath;                                         //0x50
    struct _UNICODE_STRING ImagePathName;                                   //0x60
    struct _UNICODE_STRING CommandLine;                                     //0x70
    VOID* Environment;                                                      //0x80
    ULONG StartingX;                                                        //0x88
    ULONG StartingY;                                                        //0x8c
    ULONG CountX;                                                           //0x90
    ULONG CountY;                                                           //0x94
    ULONG CountCharsX;                                                      //0x98
    ULONG CountCharsY;                                                      //0x9c
    ULONG FillAttribute;                                                    //0xa0
    ULONG WindowFlags;                                                      //0xa4
    ULONG ShowWindowFlags;                                                  //0xa8
    struct _UNICODE_STRING WindowTitle;                                     //0xb0
    struct _UNICODE_STRING DesktopInfo;                                     //0xc0
    struct _UNICODE_STRING ShellInfo;                                       //0xd0
    struct _UNICODE_STRING RuntimeData;                                     //0xe0
    struct _RTL_DRIVE_LETTER_CURDIR CurrentDirectores[32];                  //0xf0
    volatile ULONGLONG EnvironmentSize;                                     //0x3f0
    volatile ULONGLONG EnvironmentVersion;                                  //0x3f8
};
/* Used in */
// _PEB

