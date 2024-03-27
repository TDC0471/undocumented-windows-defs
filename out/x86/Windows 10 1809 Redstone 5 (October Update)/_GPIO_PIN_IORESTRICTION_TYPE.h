#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _GPIO_PIN_IORESTRICTION_TYPE
{
    IoRestrictionNone = 0,
    IoRestrictionInputOnly = 1,
    IoRestrictionOutputOnly = 2,
    IoRestrictionNoneAndPreserve = 3
};
/* Used in */
// _PEP_ACPI_GPIO_RESOURCE

