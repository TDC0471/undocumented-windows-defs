#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _PCI_LOCK
{
    ULONGLONG Atom;                                                         //0x0
    UCHAR OldIrql;                                                          //0x8
};
/* Used in */
// _PCI_FDO_EXTENSION
// _PCI_PDO_EXTENSION

