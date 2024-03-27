#pragma once
/* ------------------ */

#include <_PM_SUPPORT.h>

//0x2 bytes (sizeof)
struct _PCI_PMC
{
    UCHAR Version:3;                                                        //0x0
    UCHAR PMEClock:1;                                                       //0x0
    UCHAR Rsvd1:1;                                                          //0x0
    UCHAR DeviceSpecificInitialization:1;                                   //0x0
    UCHAR Rsvd2:2;                                                          //0x0
    struct _PM_SUPPORT Support;                                             //0x1
};
/* Used in */
// _PCI_PDO_EXTENSION

