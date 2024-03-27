#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _ACPI_METHOD_ARGUMENT_V1
{
    USHORT Type;                                                            //0x0
    USHORT DataLength;                                                      //0x2
    union
    {
        ULONG Argument;                                                     //0x4
        UCHAR Data[1];                                                      //0x4
    };
};
/* Used in */
// _PEP_WORK_ACPI_EVALUATE_CONTROL_METHOD_COMPLETE

