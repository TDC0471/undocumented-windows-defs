#pragma once
/* ------------------ */

#include <_IMAGE_SECURITY_CONTEXT.h>

//0x8 bytes (sizeof)
struct _MI_IMAGE_SECURITY_REFERENCE
{
    struct _IMAGE_SECURITY_CONTEXT SecurityContext;                         //0x0
    VOID* DynamicRelocations;                                               //0x4
};
/* Used in */
// _CONTROL_AREA

