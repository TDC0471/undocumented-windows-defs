#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _KINTERRUPT_MODE
{
    LevelSensitive = 0,
    Latched = 1
};
/* Used in */
// HAL_PRIVATE_DISPATCH
// _HAL_UNMASKED_INTERRUPT_INFORMATION
// _INTERRUPT_VECTOR_DATA
// _KINTERRUPT
// _PEP_ACPI_GPIO_RESOURCE
// _PEP_ACPI_INTERRUPT_RESOURCE

