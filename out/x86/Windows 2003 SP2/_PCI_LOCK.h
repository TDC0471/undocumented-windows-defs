#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _PCI_LOCK
{
    ULONG Atom;                                                             //0x0
    UCHAR OldIrql;                                                          //0x4
};
/* Used in */
// _PCI_FDO_EXTENSION
// _PCI_PDO_EXTENSION

