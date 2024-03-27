#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_FILE_OBJECT.h>

//0xc bytes (sizeof)
struct _DELAY_ACK_FO
{
    struct _LIST_ENTRY Links;                                               //0x0
    struct _FILE_OBJECT* OriginalFileObject;                                //0x8
};
