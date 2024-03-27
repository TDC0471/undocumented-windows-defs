#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_HALP_DMA_CHANNEL.h>
#include <_DMA_FUNCTION_TABLE.h>
#include <_KINTERRUPT_POLARITY.h>
#include <_KINTERRUPT_MODE.h>
#include <_UNICODE_STRING.h>
#include <POHANDLE__.h>

//0xe0 bytes (sizeof)
struct _HALP_DMA_CONTROLLER
{
    struct _LIST_ENTRY Controllers;                                         //0x0
    struct _LIST_ENTRY AdapterList;                                         //0x10
    ULONG ControllerId;                                                     //0x20
    ULONG MinimumRequestLine;                                               //0x24
    ULONG MaximumRequestLine;                                               //0x28
    ULONG ChannelCount;                                                     //0x2c
    ULONG ScatterGatherLimit;                                               //0x30
    struct _HALP_DMA_CHANNEL* Channels;                                     //0x38
    VOID* ExtensionData;                                                    //0x40
    UCHAR CacheCoherent;                                                    //0x48
    ULONG DmaAddressWidth;                                                  //0x4c
    struct _DMA_FUNCTION_TABLE Operations;                                  //0x50
    ULONG SupportedPortWidths;                                              //0xa0
    ULONG MinimumTransferUnit;                                              //0xa4
    ULONGLONG Lock;                                                         //0xa8
    UCHAR Irql;                                                             //0xb0
    UCHAR GeneratesInterrupt;                                               //0xb1
    LONG Gsi;                                                               //0xb4
    enum _KINTERRUPT_POLARITY InterruptPolarity;                            //0xb8
    enum _KINTERRUPT_MODE InterruptMode;                                    //0xbc
    struct _UNICODE_STRING ResourceId;                                      //0xc0
    struct POHANDLE__* PowerHandle;                                         //0xd0
    UCHAR PowerActive;                                                      //0xd8
};
/* Used in */
// _ADAPTER_OBJECT

