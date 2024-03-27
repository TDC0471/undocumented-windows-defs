#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum KD_CALLBACK_ACTION
{
    KdConfigureDeviceAndContinue = 0,
    KdSkipDeviceAndContinue = 1,
    KdConfigureDeviceAndStop = 2,
    KdSkipDeviceAndStop = 3
};
/* Used in */
// HAL_PRIVATE_DISPATCH

