#pragma once
/* ------------------ */

#include <_DMA_ADAPTER.h>
#include <_RTL_BITMAP.h>
#include <_HALP_DMA_TRANSLATION_ENTRY.h>
#include <_HALP_DMA_TRANSLATION_BUFFER.h>
#include <_HALP_DMA_TRANSLATION_BUFFER_POSITION.h>
#include <_LARGE_INTEGER.h>

//0x98 bytes (sizeof)
struct _HALP_DMA_ADAPTER_OBJECT
{
    struct _DMA_ADAPTER DmaHeader;                                          //0x0
    struct _RTL_BITMAP* ContiguousMapRegisters;                             //0x10
    struct _HALP_DMA_TRANSLATION_ENTRY* ScatterBufferListHead;              //0x18
    ULONG NumberOfFreeScatterBuffers;                                       //0x20
    struct _HALP_DMA_TRANSLATION_BUFFER* ContiguousTranslations;            //0x28
    struct _HALP_DMA_TRANSLATION_BUFFER* ScatterTranslations;               //0x30
    struct _HALP_DMA_TRANSLATION_BUFFER_POSITION ContiguousTranslationEnd;  //0x38
    struct _HALP_DMA_TRANSLATION_BUFFER_POSITION ScatterTranslationEnd;     //0x48
    struct
    {
        struct _HALP_DMA_TRANSLATION_BUFFER_POSITION ContiguousHint;        //0x58
        struct _HALP_DMA_TRANSLATION_BUFFER_POSITION ScatterHint;           //0x68
    } CrashDump;                                                            //0x58
    ULONGLONG SpinLock;                                                     //0x78
    ULONGLONG GrowLock;                                                     //0x80
    union _LARGE_INTEGER MaximumPhysicalAddress;                            //0x88
    UCHAR IsMasterAdapter;                                                  //0x90
    UCHAR DmaCanCross64K;                                                   //0x91
    ULONG LibraryVersion;                                                   //0x94
};
/* Used in */
// _ADAPTER_OBJECT
// _HALP_DMA_MASTER_ADAPTER_OBJECT

