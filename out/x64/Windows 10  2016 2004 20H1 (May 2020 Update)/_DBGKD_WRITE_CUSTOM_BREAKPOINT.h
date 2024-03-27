#pragma once
/* ------------------ */


//0x18 bytes (sizeof)
struct _DBGKD_WRITE_CUSTOM_BREAKPOINT
{
    ULONGLONG BreakPointAddress;                                            //0x0
    ULONGLONG BreakPointInstruction;                                        //0x8
    ULONG BreakPointHandle;                                                 //0x10
    UCHAR BreakPointInstructionSize;                                        //0x14
    UCHAR BreakPointInstructionAlignment;                                   //0x15
};
/* Used in */
// _DBGKD_MANIPULATE_STATE64

