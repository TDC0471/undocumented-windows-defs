#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
union _PEP_ACPI_RESOURCE_FLAGS
{
    ULONG AsULong;                                                          //0x0
    ULONG Shared:1;                                                         //0x0
    ULONG Wake:1;                                                           //0x0
    ULONG ResourceUsage:1;                                                  //0x0
    ULONG SlaveMode:1;                                                      //0x0
    ULONG AddressingMode:1;                                                 //0x0
    ULONG SharedMode:1;                                                     //0x0
    ULONG Reserved:26;                                                      //0x0
};
/* Used in */
// _PEP_ACPI_EXTENDED_ADDRESS
// _PEP_ACPI_GPIO_RESOURCE
// _PEP_ACPI_INTERRUPT_RESOURCE
// _PEP_ACPI_SPB_RESOURCE

