#pragma once
/* ------------------ */

#include <_KSYSTEM_TIME.h>
#include <_NT_PRODUCT_TYPE.h>
#include <_ALTERNATIVE_ARCHITECTURE_TYPE.h>
#include <_LARGE_INTEGER.h>
#include <_XSTATE_CONFIGURATION.h>

//0x708 bytes (sizeof)
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
    ULONG AitSamplingValue;                                                 //0x248
    ULONG AppCompatFlag;                                                    //0x24c
    ULONGLONG RNGSeedVersion;                                               //0x250
    ULONG GlobalValidationRunlevel;                                         //0x258
    volatile LONG TimeZoneBiasStamp;                                        //0x25c
    ULONG NtBuildNumber;                                                    //0x260
    enum _NT_PRODUCT_TYPE NtProductType;                                    //0x264
    UCHAR ProductTypeIsValid;                                               //0x268
    UCHAR Reserved0[1];                                                     //0x269
    USHORT NativeProcessorArchitecture;                                     //0x26a
    ULONG NtMajorVersion;                                                   //0x26c
    ULONG NtMinorVersion;                                                   //0x270
    UCHAR ProcessorFeatures[64];                                            //0x274
    ULONG Reserved1;                                                        //0x2b4
    ULONG Reserved3;                                                        //0x2b8
    volatile ULONG TimeSlip;                                                //0x2bc
    enum _ALTERNATIVE_ARCHITECTURE_TYPE AlternativeArchitecture;            //0x2c0
    ULONG BootId;                                                           //0x2c4
    union _LARGE_INTEGER SystemExpirationDate;                              //0x2c8
    ULONG SuiteMask;                                                        //0x2d0
    UCHAR KdDebuggerEnabled;                                                //0x2d4
    union
    {
        UCHAR MitigationPolicies;                                           //0x2d5
        struct
        {
            UCHAR NXSupportPolicy:2;                                        //0x2d5
            UCHAR SEHValidationPolicy:2;                                    //0x2d5
            UCHAR CurDirDevicesSkippedForDlls:2;                            //0x2d5
            UCHAR Reserved:2;                                               //0x2d5
        };
    };
    UCHAR Reserved6[2];                                                     //0x2d6
    volatile ULONG ActiveConsoleId;                                         //0x2d8
    volatile ULONG DismountCount;                                           //0x2dc
    ULONG ComPlusPackage;                                                   //0x2e0
    ULONG LastSystemRITEventTickCount;                                      //0x2e4
    ULONG NumberOfPhysicalPages;                                            //0x2e8
    UCHAR SafeBootMode;                                                     //0x2ec
    UCHAR Reserved12[3];                                                    //0x2ed
    union
    {
        ULONG SharedDataFlags;                                              //0x2f0
        struct
        {
            ULONG DbgErrorPortPresent:1;                                    //0x2f0
            ULONG DbgElevationEnabled:1;                                    //0x2f0
            ULONG DbgVirtEnabled:1;                                         //0x2f0
            ULONG DbgInstallerDetectEnabled:1;                              //0x2f0
            ULONG DbgLkgEnabled:1;                                          //0x2f0
            ULONG DbgDynProcessorEnabled:1;                                 //0x2f0
            ULONG DbgConsoleBrokerEnabled:1;                                //0x2f0
            ULONG DbgSecureBootEnabled:1;                                   //0x2f0
            ULONG DbgMultiSessionSku:1;                                     //0x2f0
            ULONG SpareBits:23;                                             //0x2f0
        };
    };
    ULONG DataFlagsPad[1];                                                  //0x2f4
    ULONGLONG TestRetInstruction;                                           //0x2f8
    LONGLONG QpcFrequency;                                                  //0x300
    ULONGLONG SystemCallPad[3];                                             //0x308
    union
    {
        volatile struct _KSYSTEM_TIME TickCount;                            //0x320
        volatile ULONGLONG TickCountQuad;                                   //0x320
        ULONG ReservedTickCountOverlay[3];                                  //0x320
    };
    ULONG TickCountPad[1];                                                  //0x32c
    ULONG Cookie;                                                           //0x330
    ULONG CookiePad[1];                                                     //0x334
    LONGLONG ConsoleSessionForegroundProcessId;                             //0x338
    ULONGLONG TimeUpdateLock;                                               //0x340
    ULONGLONG BaselineSystemTimeQpc;                                        //0x348
    ULONGLONG BaselineInterruptTimeQpc;                                     //0x350
    ULONGLONG QpcSystemTimeIncrement;                                       //0x358
    ULONGLONG QpcInterruptTimeIncrement;                                    //0x360
    UCHAR QpcSystemTimeIncrementShift;                                      //0x368
    UCHAR QpcInterruptTimeIncrementShift;                                   //0x369
    USHORT UnparkedProcessorCount;                                          //0x36a
    UCHAR Reserved8[20];                                                    //0x36c
    USHORT UserModeGlobalLogger[16];                                        //0x380
    ULONG ImageFileExecutionOptions;                                        //0x3a0
    ULONG LangGenerationCount;                                              //0x3a4
    ULONGLONG Reserved4;                                                    //0x3a8
    volatile ULONGLONG InterruptTimeBias;                                   //0x3b0
    volatile ULONGLONG QpcBias;                                             //0x3b8
    ULONG ActiveProcessorCount;                                             //0x3c0
    volatile UCHAR ActiveGroupCount;                                        //0x3c4
    UCHAR Reserved9;                                                        //0x3c5
    union
    {
        USHORT QpcData;                                                     //0x3c6
        struct
        {
            volatile UCHAR QpcBypassEnabled;                                //0x3c6
            UCHAR QpcShift;                                                 //0x3c7
        };
    };
    union _LARGE_INTEGER TimeZoneBiasEffectiveStart;                        //0x3c8
    union _LARGE_INTEGER TimeZoneBiasEffectiveEnd;                          //0x3d0
    struct _XSTATE_CONFIGURATION XState;                                    //0x3d8
};
