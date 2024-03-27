#pragma once
/* ------------------ */

#include <_OBJECT_HEADER.h>

//0xa0 bytes (sizeof)
struct _DUMMY_FILE_OBJECT
{
    struct _OBJECT_HEADER ObjectHeader;                                     //0x0
    CHAR FileObjectBody[128];                                               //0x20
};
/* Used in */
// _OPEN_PACKET

