#pragma once
/* ------------------ */


//0x1 bytes (sizeof)
struct _MMPFNENTRY1
{
    UCHAR PageLocation:3;                                                   //0x0
    UCHAR WriteInProgress:1;                                                //0x0
    UCHAR Modified:1;                                                       //0x0
    UCHAR ReadInProgress:1;                                                 //0x0
    UCHAR CacheAttribute:2;                                                 //0x0
};
/* Used in */
// _MMPFN

