#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _MMSUPPORT_FLAGS
{
    UCHAR WorkingSetType:3;                                                 //0x0
    UCHAR ModwriterAttached:1;                                              //0x0
    UCHAR TrimHard:1;                                                       //0x0
    UCHAR MaximumWorkingSetHard:1;                                          //0x0
    UCHAR ForceTrim:1;                                                      //0x0
    UCHAR MinimumWorkingSetHard:1;                                          //0x0
    UCHAR SessionMaster:1;                                                  //0x1
    UCHAR TrimmerState:2;                                                   //0x1
    UCHAR Reserved:1;                                                       //0x1
    UCHAR PageStealers:4;                                                   //0x1
    UCHAR MemoryPriority:8;                                                 //0x2
    UCHAR WsleDeleted:1;                                                    //0x3
    UCHAR VmExiting:1;                                                      //0x3
    UCHAR ExpansionFailed:1;                                                //0x3
    UCHAR Available:5;                                                      //0x3
};
/* Used in */
// _MMSUPPORT

