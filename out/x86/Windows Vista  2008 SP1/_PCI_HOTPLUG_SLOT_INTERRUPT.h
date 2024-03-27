#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _PCI_HOTPLUG_SLOT_INTERRUPT
{
    SlotInterruptPresenceDetect = 0,
    SlotInterruptLatchChange = 1,
    SlotInterruptAttentionButton = 2,
    SlotInterruptLinkStateChange = 3,
    SlotInterruptPowerFault = 4,
    SlotInterruptMaximum = 7
};
