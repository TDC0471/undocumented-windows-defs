#pragma once
/* ------------------ */

#include <_DEVICE_OBJECT.h>
#include <_ARBITER_REQUEST_SOURCE.h>
#include <_IO_RESOURCE_REQUIREMENTS_LIST.h>
#include <_CM_RESOURCE_LIST.h>

//0x40 bytes (sizeof)
struct _PNP_RESOURCE_REQUEST
{
    struct _DEVICE_OBJECT* PhysicalDevice;                                  //0x0
    ULONG Flags;                                                            //0x8
    enum _ARBITER_REQUEST_SOURCE AllocationType;                            //0xc
    ULONG Priority;                                                         //0x10
    ULONG Position;                                                         //0x14
    struct _IO_RESOURCE_REQUIREMENTS_LIST* ResourceRequirements;            //0x18
    VOID* ReqList;                                                          //0x20
    struct _CM_RESOURCE_LIST* ResourceAssignment;                           //0x28
    struct _CM_RESOURCE_LIST* TranslatedResourceAssignment;                 //0x30
    LONG Status;                                                            //0x38
};
