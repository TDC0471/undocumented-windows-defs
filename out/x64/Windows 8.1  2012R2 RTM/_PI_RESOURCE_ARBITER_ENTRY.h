#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_ARBITER_INTERFACE.h>
#include <_DEVICE_NODE.h>

//0x70 bytes (sizeof)
struct _PI_RESOURCE_ARBITER_ENTRY
{
    struct _LIST_ENTRY DeviceArbiterList;                                   //0x0
    UCHAR ResourceType;                                                     //0x10
    struct _ARBITER_INTERFACE* ArbiterInterface;                            //0x18
    struct _DEVICE_NODE* DeviceNode;                                        //0x20
    struct _LIST_ENTRY ResourceList;                                        //0x28
    struct _LIST_ENTRY BestResourceList;                                    //0x38
    struct _LIST_ENTRY BestConfig;                                          //0x48
    struct _LIST_ENTRY ActiveArbiterList;                                   //0x58
    UCHAR State;                                                            //0x68
    UCHAR ResourcesChanged;                                                 //0x69
};
