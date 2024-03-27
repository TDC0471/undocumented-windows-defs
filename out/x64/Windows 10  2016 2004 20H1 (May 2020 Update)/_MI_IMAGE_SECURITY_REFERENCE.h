#pragma once
/* ------------------ */

#include <_MI_PROTOTYPE_PTES_NODE.h>
#include <_IMAGE_SECURITY_CONTEXT.h>

//0x40 bytes (sizeof)
struct _MI_IMAGE_SECURITY_REFERENCE
{
    struct _MI_PROTOTYPE_PTES_NODE ProtosNode;                              //0x0
    VOID* DynamicRelocations;                                               //0x20
    struct _IMAGE_SECURITY_CONTEXT SecurityContext;                         //0x28
    union
    {
        VOID* ImageFileExtents;                                             //0x30
        ULONGLONG ImageFileExtentsUlongPtr;                                 //0x30
        ULONGLONG FilesystemWantsRva:1;                                     //0x30
        ULONGLONG Spare:3;                                                  //0x30
    } u1;                                                                   //0x30
    ULONGLONG StrongImageReference;                                         //0x38
};
/* Used in */
// _CONTROL_AREA

