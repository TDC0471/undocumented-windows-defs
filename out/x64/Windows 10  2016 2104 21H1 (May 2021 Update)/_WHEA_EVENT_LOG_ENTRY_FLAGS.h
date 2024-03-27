#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
union _WHEA_EVENT_LOG_ENTRY_FLAGS
{
    ULONG Reserved1:1;                                                      //0x0
    ULONG LogInternalEtw:1;                                                 //0x0
    ULONG LogBlackbox:1;                                                    //0x0
    ULONG LogSel:1;                                                         //0x0
    ULONG RawSel:1;                                                         //0x0
    ULONG NoFormat:1;                                                       //0x0
    ULONG Driver:1;                                                         //0x0
    ULONG Reserved2:25;                                                     //0x0
    ULONG AsULONG;                                                          //0x0
};
/* Used in */
// _WHEA_EVENT_LOG_ENTRY_HEADER

