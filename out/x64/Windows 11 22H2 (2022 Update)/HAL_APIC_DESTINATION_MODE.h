#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum HAL_APIC_DESTINATION_MODE
{
    ApicDestinationModePhysical = 1,
    ApicDestinationModeLogicalFlat = 2,
    ApicDestinationModeLogicalClustered = 3,
    ApicDestinationModeUnknown = 4
};
/* Used in */
// _INTERRUPT_VECTOR_DATA

