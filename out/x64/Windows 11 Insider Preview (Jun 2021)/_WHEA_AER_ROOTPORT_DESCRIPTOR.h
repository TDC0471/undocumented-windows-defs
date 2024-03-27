#pragma once
/* ------------------ */

#include <_WHEA_PCI_SLOT_NUMBER.h>
#include <_AER_ROOTPORT_DESCRIPTOR_FLAGS.h>

//0x24 bytes (sizeof)
struct _WHEA_AER_ROOTPORT_DESCRIPTOR
{
    USHORT Type;                                                            //0x0
    UCHAR Enabled;                                                          //0x2
    UCHAR Reserved;                                                         //0x3
    ULONG BusNumber;                                                        //0x4
    struct _WHEA_PCI_SLOT_NUMBER Slot;                                      //0x8
    USHORT DeviceControl;                                                   //0xc
    union _AER_ROOTPORT_DESCRIPTOR_FLAGS Flags;                             //0xe
    ULONG UncorrectableErrorMask;                                           //0x10
    ULONG UncorrectableErrorSeverity;                                       //0x14
    ULONG CorrectableErrorMask;                                             //0x18
    ULONG AdvancedCapsAndControl;                                           //0x1c
    ULONG RootErrorCommand;                                                 //0x20
};
/* Used in */
// _WHEA_ERROR_SOURCE_DESCRIPTOR

