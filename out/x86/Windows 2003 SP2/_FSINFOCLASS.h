#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _FSINFOCLASS
{
    FileFsVolumeInformation = 1,
    FileFsLabelInformation = 2,
    FileFsSizeInformation = 3,
    FileFsDeviceInformation = 4,
    FileFsAttributeInformation = 5,
    FileFsControlInformation = 6,
    FileFsFullSizeInformation = 7,
    FileFsObjectIdInformation = 8,
    FileFsDriverPathInformation = 9,
    FileFsMaximumInformation = 10
};
/* Used in */
// _IO_STACK_LOCATION

