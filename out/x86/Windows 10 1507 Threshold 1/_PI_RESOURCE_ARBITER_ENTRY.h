#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_ARBITER_INTERFACE.h>
#include <_DEVICE_NODE.h>

//0x38 bytes (sizeof)
struct _PI_RESOURCE_ARBITER_ENTRY
{
    struct _LIST_ENTRY DeviceArbiterList;                                   //0x0
    UCHAR ResourceType;                                                     //0x8
    struct _ARBITER_INTERFACE* ArbiterInterface;                            //0xc
    struct _DEVICE_NODE* DeviceNode;                                        //0x10
    struct _LIST_ENTRY ResourceList;                                        //0x14
    struct _LIST_ENTRY BestResourceList;                                    //0x1c
    struct _LIST_ENTRY BestConfig;                                          //0x24
    struct _LIST_ENTRY ActiveArbiterList;                                   //0x2c
    UCHAR State;                                                            //0x34
    UCHAR ResourcesChanged;                                                 //0x35
};
