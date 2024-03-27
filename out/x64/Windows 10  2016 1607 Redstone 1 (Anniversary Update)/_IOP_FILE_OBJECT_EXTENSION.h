#pragma once
/* ------------------ */

#include <_IOP_PRIORITY_HINT.h>

//0x50 bytes (sizeof)
struct _IOP_FILE_OBJECT_EXTENSION
{
    ULONG FoExtFlags;                                                       //0x0
    VOID* FoExtPerTypeExtension[8];                                         //0x8
    enum _IOP_PRIORITY_HINT FoIoPriorityHint;                               //0x48
};
