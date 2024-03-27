#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _MMSUPPORT_FLAGS
{
    UCHAR SessionSpace:1;                                                   //0x0
    UCHAR BeingTrimmed:1;                                                   //0x0
    UCHAR SessionLeader:1;                                                  //0x0
    UCHAR TrimHard:1;                                                       //0x0
    UCHAR MaximumWorkingSetHard:1;                                          //0x0
    UCHAR ForceTrim:1;                                                      //0x0
    UCHAR MinimumWorkingSetHard:1;                                          //0x0
    UCHAR Available0:1;                                                     //0x0
    UCHAR MemoryPriority:8;                                                 //0x1
    USHORT GrowWsleHash:1;                                                  //0x2
    USHORT AcquiredUnsafe:1;                                                //0x2
    USHORT Available:14;                                                    //0x2
};
/* Used in */
// _MMSUPPORT

