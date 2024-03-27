#pragma once
/* ------------------ */

#include <_IOP_PRIORITY_HINT.h>

//0x2c bytes (sizeof)
struct _IOP_FILE_OBJECT_EXTENSION
{
    ULONG FoExtFlags;                                                       //0x0
    VOID* FoExtPerTypeExtension[9];                                         //0x4
    enum _IOP_PRIORITY_HINT FoIoPriorityHint;                               //0x28
};
