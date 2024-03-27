#pragma once
/* ------------------ */

#include <_HAL_UNMASKED_INTERRUPT_FLAGS.h>
#include <_KINTERRUPT_MODE.h>
#include <_KINTERRUPT_POLARITY.h>

//0x20 bytes (sizeof)
struct _HAL_UNMASKED_INTERRUPT_INFORMATION
{
    USHORT Version;                                                         //0x0
    USHORT Size;                                                            //0x2
    union _HAL_UNMASKED_INTERRUPT_FLAGS Flags;                              //0x4
    enum _KINTERRUPT_MODE Mode;                                             //0x8
    enum _KINTERRUPT_POLARITY Polarity;                                     //0xc
    ULONG Gsiv;                                                             //0x10
    USHORT PinNumber;                                                       //0x14
    VOID* DeviceHandle;                                                     //0x18
};
/* Used in */
// HAL_PRIVATE_DISPATCH

