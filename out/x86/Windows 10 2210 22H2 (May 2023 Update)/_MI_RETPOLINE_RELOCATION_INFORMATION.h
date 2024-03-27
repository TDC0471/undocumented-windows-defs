#pragma once
/* ------------------ */

#include <_RTL_RETPOLINE_BINARY_INFO.h>
#include <_RTL_RETPOLINE_RELOCATION_INDEX.h>

//0x24 bytes (sizeof)
struct _MI_RETPOLINE_RELOCATION_INFORMATION
{
    struct _RTL_RETPOLINE_BINARY_INFO BinaryInfo;                           //0x0
    VOID* RelocationBuffer;                                                 //0x1c
    struct _RTL_RETPOLINE_RELOCATION_INDEX* Index[1];                       //0x20
};
/* Used in */
// _MI_IMAGE_LOAD_CONFIG

