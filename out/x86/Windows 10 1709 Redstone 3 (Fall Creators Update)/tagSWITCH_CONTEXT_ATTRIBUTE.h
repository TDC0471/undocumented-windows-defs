#pragma once
/* ------------------ */


//0x18 bytes (sizeof)
struct tagSWITCH_CONTEXT_ATTRIBUTE
{
    ULONGLONG ulContextUpdateCounter;                                       //0x0
    LONG fAllowContextUpdate;                                               //0x8
    LONG fEnableTrace;                                                      //0xc
    ULONGLONG EtwHandle;                                                    //0x10
};
/* Used in */
// tagSWITCH_CONTEXT

