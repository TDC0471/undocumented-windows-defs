#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _KNOWN_CONTROLLER_TYPE
{
    InterruptControllerInvalid = 0,
    InterruptControllerPic = 1,
    InterruptControllerApic = 2,
    InterruptControllerGic = 3,
    InterruptControllerGicV3 = 4,
    InterruptControllerGicV4 = 5,
    InterruptControllerBcm = 6,
    InterruptControllerUnknown = 4096
};
/* Used in */
// _REGISTERED_INTERRUPT_CONTROLLER

