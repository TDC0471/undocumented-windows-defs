#pragma once
/* ------------------ */

#include <_PEP_ACPI_SPB_RESOURCE.h>

//0x38 bytes (sizeof)
struct _PEP_ACPI_SPB_UART_RESOURCE
{
    struct _PEP_ACPI_SPB_RESOURCE SpbCommon;                                //0x0
    ULONG BaudRate;                                                         //0x28
    USHORT RxBufferSize;                                                    //0x2c
    USHORT TxBufferSize;                                                    //0x2e
    UCHAR Parity;                                                           //0x30
    UCHAR LinesInUse;                                                       //0x31
};
/* Used in */
// _PEP_ACPI_RESOURCE

