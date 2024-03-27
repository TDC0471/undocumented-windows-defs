#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _STRING
{
    USHORT Length;                                                          //0x0
    USHORT MaximumLength;                                                   //0x2
    CHAR* Buffer;                                                           //0x8
};
/* Used in */
// _DUMP_STACK_CONTEXT
// _RTL_DRIVE_LETTER_CURDIR

