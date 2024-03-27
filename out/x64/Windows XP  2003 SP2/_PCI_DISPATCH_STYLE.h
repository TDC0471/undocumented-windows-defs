#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _PCI_DISPATCH_STYLE
{
    IRP_COMPLETE = 0,
    IRP_DOWNWARD = 1,
    IRP_UPWARD = 2,
    IRP_DISPATCH = 3
};
/* Used in */
// _PCI_MJ_DISPATCH_TABLE
// _PCI_MN_DISPATCH_TABLE

