#pragma once
/* ------------------ */


//0x2 bytes (sizeof)
struct _MMPFNENTRY
{
    UCHAR PageLocation:3;                                                   //0x0
    UCHAR WriteInProgress:1;                                                //0x0
    UCHAR Modified:1;                                                       //0x0
    UCHAR ReadInProgress:1;                                                 //0x0
    UCHAR CacheAttribute:2;                                                 //0x0
    UCHAR Priority:3;                                                       //0x1
    UCHAR OnProtectedStandby:1;                                             //0x1
    UCHAR InPageError:1;                                                    //0x1
    UCHAR Spare:1;                                                          //0x1
    UCHAR RemovalRequested:1;                                               //0x1
    UCHAR ParityError:1;                                                    //0x1
};
/* Used in */
// _MMPFN

