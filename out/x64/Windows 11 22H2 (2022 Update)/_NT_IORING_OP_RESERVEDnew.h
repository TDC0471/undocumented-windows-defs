#pragma once
/* ------------------ */


//0x30 bytes (sizeof)
struct _NT_IORING_OP_RESERVED
{
    ULONGLONG Argument1;                                                    //0x0
    ULONGLONG Argument2;                                                    //0x8
    ULONGLONG Argument3;                                                    //0x10
    ULONGLONG Argument4;                                                    //0x18
    ULONGLONG Argument5;                                                    //0x20
    ULONGLONG Argument6;                                                    //0x28
};
/* Used in */
// _NT_IORING_SQE

