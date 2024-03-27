#pragma once
/* ------------------ */

#include <_OBJECT_HEADER.h>

//0x110 bytes (sizeof)
struct _DUMMY_FILE_OBJECT
{
    struct _OBJECT_HEADER ObjectHeader;                                     //0x0
    CHAR FileObjectBody[216];                                               //0x38
};
/* Used in */
// _OPEN_PACKET

