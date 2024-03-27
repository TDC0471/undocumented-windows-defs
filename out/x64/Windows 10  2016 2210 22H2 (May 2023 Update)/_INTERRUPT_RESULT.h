#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _INTERRUPT_RESULT
{
    InterruptBeginFatalError = 0,
    InterruptBeginLine = 1,
    InterruptBeginSpurious = 2,
    InterruptBeginVector = 3,
    InterruptBeginNone = 4
};
/* Used in */
// _INTERRUPT_FUNCTION_TABLE

