#pragma once
/* ------------------ */

#include <_KDEVICE_QUEUE.h>
#include <_LARGE_INTEGER.h>

//0x48 bytes (sizeof)
struct _CONTROLLER_OBJECT
{
    SHORT Type;                                                             //0x0
    SHORT Size;                                                             //0x2
    VOID* ControllerExtension;                                              //0x8
    struct _KDEVICE_QUEUE DeviceWaitQueue;                                  //0x10
    ULONG Spare1;                                                           //0x38
    union _LARGE_INTEGER Spare2;                                            //0x40
};
