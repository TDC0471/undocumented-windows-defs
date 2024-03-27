#pragma once
/* ------------------ */

#include <_DEVICE_OBJECT.h>
#include <_ARBITER_REQUEST_SOURCE.h>
#include <_IO_RESOURCE_REQUIREMENTS_LIST.h>
#include <_CM_RESOURCE_LIST.h>

//0x28 bytes (sizeof)
struct _PNP_RESOURCE_REQUEST
{
    struct _DEVICE_OBJECT* PhysicalDevice;                                  //0x0
    ULONG Flags;                                                            //0x4
    enum _ARBITER_REQUEST_SOURCE AllocationType;                            //0x8
    ULONG Priority;                                                         //0xc
    ULONG Position;                                                         //0x10
    struct _IO_RESOURCE_REQUIREMENTS_LIST* ResourceRequirements;            //0x14
    VOID* ReqList;                                                          //0x18
    struct _CM_RESOURCE_LIST* ResourceAssignment;                           //0x1c
    struct _CM_RESOURCE_LIST* TranslatedResourceAssignment;                 //0x20
    LONG Status;                                                            //0x24
};
