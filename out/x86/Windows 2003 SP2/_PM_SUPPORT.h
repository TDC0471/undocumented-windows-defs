#pragma once
/* ------------------ */


//0x1 bytes (sizeof)
struct _PM_SUPPORT
{
    UCHAR Rsvd2:1;                                                          //0x0
    UCHAR D1:1;                                                             //0x0
    UCHAR D2:1;                                                             //0x0
    UCHAR PMED0:1;                                                          //0x0
    UCHAR PMED1:1;                                                          //0x0
    UCHAR PMED2:1;                                                          //0x0
    UCHAR PMED3Hot:1;                                                       //0x0
    UCHAR PMED3Cold:1;                                                      //0x0
};
/* Used in */
// _PCI_PMC

