#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _MI_EXTRA_IMAGE_INFORMATION
{
    ULONG SizeOfHeaders;                                                    //0x0
    ULONG SizeOfImage;                                                      //0x4
    ULONG TimeDateStamp;                                                    //0x8
    ULONG ImageCetShadowStacksReady:1;                                      //0xc
    ULONG ImageCetShadowStacksStrictMode:1;                                 //0xc
    ULONG ImageCetSetContextIpValidationRelaxedMode:1;                      //0xc
    ULONG ImageCetDynamicApisAllowInProc:1;                                 //0xc
    ULONG ImageCetDowngradeReserved1:1;                                     //0xc
    ULONG ImageCetDowngradeReserved2:1;                                     //0xc
    ULONG Spare:26;                                                         //0xc
};
/* Used in */
// _MI_SECTION_IMAGE_INFORMATION

