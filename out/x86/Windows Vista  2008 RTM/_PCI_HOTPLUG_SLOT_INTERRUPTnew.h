#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _PCI_HOTPLUG_SLOT_INTERRUPT
{
    SlotInterruptPresenceDetect = 0,
    SlotInterruptLatchChange = 1,
    SlotInterruptAttentionButton = 2,
    SlotInterruptPowerFault = 3,
    SlotInterruptMaximum = 7
};
