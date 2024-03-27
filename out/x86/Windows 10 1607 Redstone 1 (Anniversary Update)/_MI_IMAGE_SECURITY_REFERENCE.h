#pragma once
/* ------------------ */

#include <_IMAGE_SECURITY_CONTEXT.h>

//0xc bytes (sizeof)
struct _MI_IMAGE_SECURITY_REFERENCE
{
    VOID* DynamicRelocations;                                               //0x0
    struct _IMAGE_SECURITY_CONTEXT SecurityContext;                         //0x4
    ULONG StrongImageReference;                                             //0x8
};
/* Used in */
// _CONTROL_AREA

