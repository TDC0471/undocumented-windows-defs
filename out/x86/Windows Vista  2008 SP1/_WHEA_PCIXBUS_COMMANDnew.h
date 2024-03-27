#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
union _WHEA_PCIXBUS_COMMAND
{
    ULONGLONG Command:56;                                                   //0x0
    ULONGLONG PCIXCommand:1;                                                //0x0
    ULONGLONG Reserved:7;                                                   //0x0
    ULONGLONG AsULONGLONG;                                                  //0x0
};
/* Used in */
// _WHEA_PCIXBUS_ERROR

