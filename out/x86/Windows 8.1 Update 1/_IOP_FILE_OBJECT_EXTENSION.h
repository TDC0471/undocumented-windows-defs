#pragma once
/* ------------------ */

#include <_IOP_PRIORITY_HINT.h>

//0x24 bytes (sizeof)
struct _IOP_FILE_OBJECT_EXTENSION
{
    ULONG FoExtFlags;                                                       //0x0
    VOID* FoExtPerTypeExtension[7];                                         //0x4
    enum _IOP_PRIORITY_HINT FoIoPriorityHint;                               //0x20
};