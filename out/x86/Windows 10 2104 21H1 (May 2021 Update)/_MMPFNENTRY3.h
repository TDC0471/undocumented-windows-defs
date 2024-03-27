#pragma once
/* ------------------ */


//0x1 bytes (sizeof)
struct _MMPFNENTRY3
{
    UCHAR Priority:3;                                                       //0x0
    UCHAR OnProtectedStandby:1;                                             //0x0
    UCHAR InPageError:1;                                                    //0x0
    UCHAR SystemChargedPage:1;                                              //0x0
    UCHAR RemovalRequested:1;                                               //0x0
    UCHAR ParityError:1;                                                    //0x0
};
/* Used in */
// _MMPFN

