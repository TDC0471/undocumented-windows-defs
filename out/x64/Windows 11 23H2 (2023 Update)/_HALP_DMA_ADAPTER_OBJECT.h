#pragma once
/* ------------------ */

#include <_DMA_ADAPTER.h>
#include <_RTL_BITMAP.h>
#include <_HALP_DMA_TRANSLATION_ENTRY.h>
#include <_HALP_DMA_TRANSLATION_BUFFER.h>
#include <_HALP_DMA_TRANSLATION_BUFFER_POSITION.h>
#include <_LARGE_INTEGER.h>

//0xa0 bytes (sizeof)
struct _HALP_DMA_ADAPTER_OBJECT
{
    struct _DMA_ADAPTER DmaHeader;                                          //0x0
    ULONG Signature;                                                        //0x10
    struct _RTL_BITMAP* ContiguousMapRegisters;                             //0x18
    struct _HALP_DMA_TRANSLATION_ENTRY* ScatterBufferListHead;              //0x20
    ULONG NumberOfFreeScatterBuffers;                                       //0x28
    struct _HALP_DMA_TRANSLATION_BUFFER* ContiguousTranslations;            //0x30
    struct _HALP_DMA_TRANSLATION_BUFFER* ScatterTranslations;               //0x38
    struct _HALP_DMA_TRANSLATION_BUFFER_POSITION ContiguousTranslationEnd;  //0x40
    struct _HALP_DMA_TRANSLATION_BUFFER_POSITION ScatterTranslationEnd;     //0x50
    struct
    {
        struct _HALP_DMA_TRANSLATION_BUFFER_POSITION ContiguousHint;        //0x60
        struct _HALP_DMA_TRANSLATION_BUFFER_POSITION ScatterHint;           //0x70
    } CrashDump;                                                            //0x60
    ULONGLONG SpinLock;                                                     //0x80
    ULONGLONG GrowLock;                                                     //0x88
    union _LARGE_INTEGER MaximumPhysicalAddress;                            //0x90
    UCHAR IsMasterAdapter;                                                  //0x98
    UCHAR DmaCanCross64K;                                                   //0x99
    ULONG LibraryVersion;                                                   //0x9c
};
/* Used in */
// _ADAPTER_OBJECT
// _HALP_DMA_MASTER_ADAPTER_OBJECT

