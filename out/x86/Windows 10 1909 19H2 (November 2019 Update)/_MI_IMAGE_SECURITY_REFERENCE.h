#pragma once
/* ------------------ */

#include <_MI_PROTOTYPE_PTES_NODE.h>
#include <_IMAGE_SECURITY_CONTEXT.h>

//0x1c bytes (sizeof)
struct _MI_IMAGE_SECURITY_REFERENCE
{
    struct _MI_PROTOTYPE_PTES_NODE ProtosNode;                              //0x0
    VOID* DynamicRelocations;                                               //0x10
    struct _IMAGE_SECURITY_CONTEXT SecurityContext;                         //0x14
    ULONG StrongImageReference;                                             //0x18
};
/* Used in */
// _CONTROL_AREA

