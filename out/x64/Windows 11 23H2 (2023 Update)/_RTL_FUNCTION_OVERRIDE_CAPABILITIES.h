#pragma once
/* ------------------ */


//0x50 bytes (sizeof)
struct _RTL_FUNCTION_OVERRIDE_CAPABILITIES
{
    UCHAR AMD64Capabilities[40];                                            //0x0
    UCHAR AMD64KernelCapabilities[40];                                      //0x28
};
/* Used in */
// _MI_SYSTEM_IMAGE_STATE

