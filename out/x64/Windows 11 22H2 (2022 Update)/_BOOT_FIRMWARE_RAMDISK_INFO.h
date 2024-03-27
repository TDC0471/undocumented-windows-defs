#pragma once
/* ------------------ */


//0x18 bytes (sizeof)
struct _BOOT_FIRMWARE_RAMDISK_INFO
{
    ULONG Version;                                                          //0x0
    ULONG BlockSize;                                                        //0x4
    ULONGLONG BaseAddress;                                                  //0x8
    ULONGLONG Size;                                                         //0x10
};
/* Used in */
// _LOADER_PARAMETER_EXTENSION

