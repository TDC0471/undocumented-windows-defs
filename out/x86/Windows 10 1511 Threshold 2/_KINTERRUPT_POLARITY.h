#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _KINTERRUPT_POLARITY
{
    InterruptPolarityUnknown = 0,
    InterruptActiveHigh = 1,
    InterruptRisingEdge = 1,
    InterruptActiveLow = 2,
    InterruptFallingEdge = 2,
    InterruptActiveBoth = 3,
    InterruptActiveBothTriggerLow = 3,
    InterruptActiveBothTriggerHigh = 4
};
/* Used in */
// _INTERRUPT_VECTOR_DATA
// _KINTERRUPT
// _PEP_ACPI_GPIO_RESOURCE
// _PEP_ACPI_INTERRUPT_RESOURCE

