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
// HAL_PRIVATE_DISPATCH
// _HALP_DMA_CHANNEL
// _HALP_DMA_CONTROLLER
// _HAL_UNMASKED_INTERRUPT_INFORMATION
// _INTERRUPT_LINE_STATE
// _INTERRUPT_VECTOR_DATA
// _KINTERRUPT
// _PEP_ACPI_GPIO_RESOURCE
// _PEP_ACPI_INTERRUPT_RESOURCE
// _SECONDARY_INTERRUPT_LINE_STATE

