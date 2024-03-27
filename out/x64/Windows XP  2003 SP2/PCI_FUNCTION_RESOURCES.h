#pragma once
/* ------------------ */

#include <_IO_RESOURCE_DESCRIPTOR.h>
#include <_CM_PARTIAL_RESOURCE_DESCRIPTOR.h>

//0x170 bytes (sizeof)
struct PCI_FUNCTION_RESOURCES
{
    struct _IO_RESOURCE_DESCRIPTOR Limit[7];                                //0x0
    struct _CM_PARTIAL_RESOURCE_DESCRIPTOR Current[7];                      //0xe0
};
/* Used in */
// _PCI_PDO_EXTENSION

