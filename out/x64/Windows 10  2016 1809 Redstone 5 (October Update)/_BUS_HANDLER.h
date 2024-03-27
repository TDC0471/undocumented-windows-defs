#pragma once
/* ------------------ */

#include <_INTERFACE_TYPE.h>
#include <_BUS_DATA_TYPE.h>
#include <_DEVICE_OBJECT.h>
#include <_BUS_HANDLER.h>
#include <_SUPPORTED_RANGES.h>
#include <_IO_RESOURCE_REQUIREMENTS_LIST.h>
#include <_UNICODE_STRING.h>
#include <_DRIVER_OBJECT.h>
#include <_CM_RESOURCE_LIST.h>
#include <_LARGE_INTEGER.h>

//0xb0 bytes (sizeof)
struct _BUS_HANDLER
{
    ULONG Version;                                                          //0x0
    enum _INTERFACE_TYPE InterfaceType;                                     //0x4
    enum _BUS_DATA_TYPE ConfigurationType;                                  //0x8
    ULONG BusNumber;                                                        //0xc
    struct _DEVICE_OBJECT* DeviceObject;                                    //0x10
    struct _BUS_HANDLER* ParentHandler;                                     //0x18
    VOID* BusData;                                                          //0x20
    ULONG DeviceControlExtensionSize;                                       //0x28
    struct _SUPPORTED_RANGES* BusAddresses;                                 //0x30
    ULONG Reserved[4];                                                      //0x38
    ULONG (*GetBusData)(struct _BUS_HANDLER* arg1, struct _BUS_HANDLER* arg2, ULONG arg3, VOID* arg4, ULONG arg5, ULONG arg6); //0x48
    ULONG (*SetBusData)(struct _BUS_HANDLER* arg1, struct _BUS_HANDLER* arg2, ULONG arg3, VOID* arg4, ULONG arg5, ULONG arg6); //0x50
    LONG (*AdjustResourceList)(struct _BUS_HANDLER* arg1, struct _BUS_HANDLER* arg2, struct _IO_RESOURCE_REQUIREMENTS_LIST** arg3); //0x58
    LONG (*AssignSlotResources)(struct _BUS_HANDLER* arg1, struct _BUS_HANDLER* arg2, struct _UNICODE_STRING* arg3, struct _UNICODE_STRING* arg4, struct _DRIVER_OBJECT* arg5, struct _DEVICE_OBJECT* arg6, ULONG arg7, struct _CM_RESOURCE_LIST** arg8); //0x60
    UCHAR (*TranslateBusAddress)(struct _BUS_HANDLER* arg1, struct _BUS_HANDLER* arg2, union _LARGE_INTEGER arg3, ULONG* arg4, union _LARGE_INTEGER* arg5); //0x68
    VOID* Spare1;                                                           //0x70
    VOID* Spare2;                                                           //0x78
    VOID* Spare3;                                                           //0x80
    VOID* Spare4;                                                           //0x88
    VOID* Spare5;                                                           //0x90
    VOID* Spare6;                                                           //0x98
    VOID* Spare7;                                                           //0xa0
    VOID* Spare8;                                                           //0xa8
};
/* Used in */
// HAL_PRIVATE_DISPATCH
// _BUS_HANDLER

