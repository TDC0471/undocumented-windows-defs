#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _WMI_LOGGER_MODE
{
    ULONG SequentialFile:1;                                                 //0x0
    ULONG CircularFile:1;                                                   //0x0
    ULONG AppendFile:1;                                                     //0x0
    ULONG Unused1:5;                                                        //0x0
    ULONG RealTime:1;                                                       //0x0
    ULONG DelayOpenFile:1;                                                  //0x0
    ULONG BufferOnly:1;                                                     //0x0
    ULONG PrivateLogger:1;                                                  //0x0
    ULONG AddHeader:1;                                                      //0x0
    ULONG UseExisting:1;                                                    //0x0
    ULONG UseGlobalSequence:1;                                              //0x0
    ULONG UseLocalSequence:1;                                               //0x0
    ULONG Unused2:16;                                                       //0x0
};
/* Used in */
// _WMI_LOGGER_CONTEXT

