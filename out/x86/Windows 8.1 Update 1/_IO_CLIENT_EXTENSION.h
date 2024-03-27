#pragma once
/* ------------------ */

#include <_IO_CLIENT_EXTENSION.h>

//0x8 bytes (sizeof)
struct _IO_CLIENT_EXTENSION
{
    struct _IO_CLIENT_EXTENSION* NextExtension;                             //0x0
    VOID* ClientIdentificationAddress;                                      //0x4
};
/* Used in */
// _DRIVER_EXTENSION
// _IO_CLIENT_EXTENSION

