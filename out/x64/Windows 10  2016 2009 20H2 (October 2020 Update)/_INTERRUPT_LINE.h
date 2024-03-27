#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _INTERRUPT_LINE
{
    ULONG UnitId;                                                           //0x0
    LONG Line;                                                              //0x4
};
/* Used in */
// _INTERRUPT_FUNCTION_TABLE
// _INTERRUPT_LINE_STATE

