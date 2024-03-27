#pragma once
/* ------------------ */

#include <_PEP_ACPI_SPB_RESOURCE.h>

//0x24 bytes (sizeof)
struct _PEP_ACPI_SPB_UART_RESOURCE
{
    struct _PEP_ACPI_SPB_RESOURCE SpbCommon;                                //0x0
    ULONG BaudRate;                                                         //0x18
    USHORT RxBufferSize;                                                    //0x1c
    USHORT TxBufferSize;                                                    //0x1e
    UCHAR Parity;                                                           //0x20
    UCHAR LinesInUse;                                                       //0x21
};
/* Used in */
// _PEP_ACPI_RESOURCE

