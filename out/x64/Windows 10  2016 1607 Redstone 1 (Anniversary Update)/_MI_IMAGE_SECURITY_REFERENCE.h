#pragma once
/* ------------------ */

#include <_IMAGE_SECURITY_CONTEXT.h>

//0x18 bytes (sizeof)
struct _MI_IMAGE_SECURITY_REFERENCE
{
    VOID* DynamicRelocations;                                               //0x0
    struct _IMAGE_SECURITY_CONTEXT SecurityContext;                         //0x8
    ULONGLONG StrongImageReference;                                         //0x10
};
/* Used in */
// _CONTROL_AREA

