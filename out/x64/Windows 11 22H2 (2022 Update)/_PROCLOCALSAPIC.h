#pragma once
/* ------------------ */


//0x11 bytes (sizeof)
struct _PROCLOCALSAPIC
{
    UCHAR Type;                                                             //0x0
    UCHAR Length;                                                           //0x1
    UCHAR ACPIProcessorID;                                                  //0x2
    UCHAR APICID;                                                           //0x3
    UCHAR APICEID;                                                          //0x4
    UCHAR Reserved[3];                                                      //0x5
    ULONG Flags;                                                            //0x8
    ULONG ACPIProcessorUIDInteger;                                          //0xc
    CHAR ACPIProcessorUIDString[1];                                         //0x10
};
