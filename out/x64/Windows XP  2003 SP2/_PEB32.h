#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>
#include <_ULARGE_INTEGER.h>
#include <_STRING32.h>
#include <LIST_ENTRY32.h>

//0x230 bytes (sizeof)
struct _PEB32
{
    UCHAR InheritedAddressSpace;                                            //0x0
    UCHAR ReadImageFileExecOptions;                                         //0x1
    UCHAR BeingDebugged;                                                    //0x2
    union
    {
        UCHAR BitField;                                                     //0x3
        struct
        {
            UCHAR ImageUsesLargePages:1;                                    //0x3
            UCHAR SpareBits:7;                                              //0x3
        };
    };
    ULONG Mutant;                                                           //0x4
    ULONG ImageBaseAddress;                                                 //0x8
    ULONG Ldr;                                                              //0xc
    ULONG ProcessParameters;                                                //0x10
    ULONG SubSystemData;                                                    //0x14
    ULONG ProcessHeap;                                                      //0x18
    ULONG FastPebLock;                                                      //0x1c
    ULONG AtlThunkSListPtr;                                                 //0x20
    ULONG SparePtr2;                                                        //0x24
    ULONG EnvironmentUpdateCount;                                           //0x28
    ULONG KernelCallbackTable;                                              //0x2c
    ULONG SystemReserved[1];                                                //0x30
    ULONG SpareUlong;                                                       //0x34
    ULONG FreeList;                                                         //0x38
    ULONG TlsExpansionCounter;                                              //0x3c
    ULONG TlsBitmap;                                                        //0x40
    ULONG TlsBitmapBits[2];                                                 //0x44
    ULONG ReadOnlySharedMemoryBase;                                         //0x4c
    ULONG ReadOnlySharedMemoryHeap;                                         //0x50
    ULONG ReadOnlyStaticServerData;                                         //0x54
    ULONG AnsiCodePageData;                                                 //0x58
    ULONG OemCodePageData;                                                  //0x5c
    ULONG UnicodeCaseTableData;                                             //0x60
    ULONG NumberOfProcessors;                                               //0x64
    ULONG NtGlobalFlag;                                                     //0x68
    union _LARGE_INTEGER CriticalSectionTimeout;                            //0x70
    ULONG HeapSegmentReserve;                                               //0x78
    ULONG HeapSegmentCommit;                                                //0x7c
    ULONG HeapDeCommitTotalFreeThreshold;                                   //0x80
    ULONG HeapDeCommitFreeBlockThreshold;                                   //0x84
    ULONG NumberOfHeaps;                                                    //0x88
    ULONG MaximumNumberOfHeaps;                                             //0x8c
    ULONG ProcessHeaps;                                                     //0x90
    ULONG GdiSharedHandleTable;                                             //0x94
    ULONG ProcessStarterHelper;                                             //0x98
    ULONG GdiDCAttributeList;                                               //0x9c
    ULONG LoaderLock;                                                       //0xa0
    ULONG OSMajorVersion;                                                   //0xa4
    ULONG OSMinorVersion;                                                   //0xa8
    USHORT OSBuildNumber;                                                   //0xac
    USHORT OSCSDVersion;                                                    //0xae
    ULONG OSPlatformId;                                                     //0xb0
    ULONG ImageSubsystem;                                                   //0xb4
    ULONG ImageSubsystemMajorVersion;                                       //0xb8
    ULONG ImageSubsystemMinorVersion;                                       //0xbc
    ULONG ImageProcessAffinityMask;                                         //0xc0
    ULONG GdiHandleBuffer[34];                                              //0xc4
    ULONG PostProcessInitRoutine;                                           //0x14c
    ULONG TlsExpansionBitmap;                                               //0x150
    ULONG TlsExpansionBitmapBits[32];                                       //0x154
    ULONG SessionId;                                                        //0x1d4
    union _ULARGE_INTEGER AppCompatFlags;                                   //0x1d8
    union _ULARGE_INTEGER AppCompatFlagsUser;                               //0x1e0
    ULONG pShimData;                                                        //0x1e8
    ULONG AppCompatInfo;                                                    //0x1ec
    struct _STRING32 CSDVersion;                                            //0x1f0
    ULONG ActivationContextData;                                            //0x1f8
    ULONG ProcessAssemblyStorageMap;                                        //0x1fc
    ULONG SystemDefaultActivationContextData;                               //0x200
    ULONG SystemAssemblyStorageMap;                                         //0x204
    ULONG MinimumStackCommit;                                               //0x208
    ULONG FlsCallback;                                                      //0x20c
    struct LIST_ENTRY32 FlsListHead;                                        //0x210
    ULONG FlsBitmap;                                                        //0x218
    ULONG FlsBitmapBits[4];                                                 //0x21c
    ULONG FlsHighIndex;                                                     //0x22c
};