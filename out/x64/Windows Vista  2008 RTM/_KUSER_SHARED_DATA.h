#pragma once
/* ------------------ */

#include <_KSYSTEM_TIME.h>
#include <_NT_PRODUCT_TYPE.h>
#include <_ALTERNATIVE_ARCHITECTURE_TYPE.h>
#include <_LARGE_INTEGER.h>

//0x3b8 bytes (sizeof)
struct _KUSER_SHARED_DATA
{
    ULONG TickCountLowDeprecated;                                           //0x0
    ULONG TickCountMultiplier;                                              //0x4
    volatile struct _KSYSTEM_TIME InterruptTime;                            //0x8
    volatile struct _KSYSTEM_TIME SystemTime;                               //0x14
    volatile struct _KSYSTEM_TIME TimeZoneBias;                             //0x20
    USHORT ImageNumberLow;                                                  //0x2c
    USHORT ImageNumberHigh;                                                 //0x2e
    WCHAR NtSystemRoot[260];                                                //0x30
    ULONG MaxStackTraceDepth;                                               //0x238
    ULONG CryptoExponent;                                                   //0x23c
    ULONG TimeZoneId;                                                       //0x240
    ULONG LargePageMinimum;                                                 //0x244
    ULONG Reserved2[7];                                                     //0x248
    enum _NT_PRODUCT_TYPE NtProductType;                                    //0x264
    UCHAR ProductTypeIsValid;                                               //0x268
    ULONG NtMajorVersion;                                                   //0x26c
    ULONG NtMinorVersion;                                                   //0x270
    UCHAR ProcessorFeatures[64];                                            //0x274
    ULONG Reserved1;                                                        //0x2b4
    ULONG Reserved3;                                                        //0x2b8
    volatile ULONG TimeSlip;                                                //0x2bc
    enum _ALTERNATIVE_ARCHITECTURE_TYPE AlternativeArchitecture;            //0x2c0
    union _LARGE_INTEGER SystemExpirationDate;                              //0x2c8
    ULONG SuiteMask;                                                        //0x2d0
    UCHAR KdDebuggerEnabled;                                                //0x2d4
    UCHAR NXSupportPolicy;                                                  //0x2d5
    volatile ULONG ActiveConsoleId;                                         //0x2d8
    volatile ULONG DismountCount;                                           //0x2dc
    ULONG ComPlusPackage;                                                   //0x2e0
    ULONG LastSystemRITEventTickCount;                                      //0x2e4
    ULONG NumberOfPhysicalPages;                                            //0x2e8
    UCHAR SafeBootMode;                                                     //0x2ec
    union
    {
        ULONG SharedDataFlags;                                              //0x2f0
        struct
        {
            ULONG DbgErrorPortPresent:1;                                    //0x2f0
            ULONG DbgElevationEnabled:1;                                    //0x2f0
            ULONG DbgVirtEnabled:1;                                         //0x2f0
            ULONG DbgInstallerDetectEnabled:1;                              //0x2f0
            ULONG SystemDllRelocated:1;                                     //0x2f0
            ULONG SpareBits:27;                                             //0x2f0
        };
    };
    ULONGLONG TestRetInstruction;                                           //0x2f8
    ULONG SystemCall;                                                       //0x300
    ULONG SystemCallReturn;                                                 //0x304
    ULONGLONG SystemCallPad[3];                                             //0x308
    union
    {
        volatile struct _KSYSTEM_TIME TickCount;                            //0x320
        volatile ULONGLONG TickCountQuad;                                   //0x320
    };
    ULONG Cookie;                                                           //0x330
    LONGLONG ConsoleSessionForegroundProcessId;                             //0x338
    ULONG Wow64SharedInformation[16];                                       //0x340
    USHORT UserModeGlobalLogger[8];                                         //0x380
    ULONG HeapTracingPid[2];                                                //0x390
    ULONG CritSecTracingPid[2];                                             //0x398
    ULONG ImageFileExecutionOptions;                                        //0x3a0
    union
    {
        ULONGLONG AffinityPad;                                              //0x3a8
        ULONGLONG ActiveProcessorAffinity;                                  //0x3a8
    };
    volatile ULONGLONG InterruptTimeBias;                                   //0x3b0
};
