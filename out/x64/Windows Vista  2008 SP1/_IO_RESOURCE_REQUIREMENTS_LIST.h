#pragma once
/* ------------------ */

#include <_INTERFACE_TYPE.h>
#include <_IO_RESOURCE_LIST.h>

//0x48 bytes (sizeof)
struct _IO_RESOURCE_REQUIREMENTS_LIST
{
    ULONG ListSize;                                                         //0x0
    enum _INTERFACE_TYPE InterfaceType;                                     //0x4
    ULONG BusNumber;                                                        //0x8
    ULONG SlotNumber;                                                       //0xc
    ULONG Reserved[3];                                                      //0x10
    ULONG AlternativeLists;                                                 //0x1c
    struct _IO_RESOURCE_LIST List[1];                                       //0x20
};
/* Used in */
// _DEVICE_NODE
// _IO_STACK_LOCATION
// _PNP_RESOURCE_REQUEST

