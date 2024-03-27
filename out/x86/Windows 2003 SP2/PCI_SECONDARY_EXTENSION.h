#pragma once
/* ------------------ */

#include <_SINGLE_LIST_ENTRY.h>
#include <PCI_SIGNATURE.h>

//0xc bytes (sizeof)
struct PCI_SECONDARY_EXTENSION
{
    struct _SINGLE_LIST_ENTRY List;                                         //0x0
    enum PCI_SIGNATURE ExtensionType;                                       //0x4
    VOID (*Destructor)(VOID* arg1);                                         //0x8
};
/* Used in */
// _PCI_ARBITER_INSTANCE

