#pragma once
/* ------------------ */

#include <POHANDLE__.h>
#include <_ACPI_METHOD_ARGUMENT_V1.h>

//0x18 bytes (sizeof)
struct _PEP_WORK_ACPI_EVALUATE_CONTROL_METHOD_COMPLETE
{
    struct POHANDLE__* DeviceHandle;                                        //0x0
    ULONG CompletionFlags;                                                  //0x4
    LONG MethodStatus;                                                      //0x8
    VOID* CompletionContext;                                                //0xc
    ULONG OutputArgumentSize;                                               //0x10
    struct _ACPI_METHOD_ARGUMENT_V1* OutputArguments;                       //0x14
};
/* Used in */
// _PEP_WORK_INFORMATION

