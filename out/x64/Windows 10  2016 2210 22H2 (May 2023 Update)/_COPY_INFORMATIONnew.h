#pragma once
/* ------------------ */

#include <_FILE_OBJECT.h>

//0x10 bytes (sizeof)
struct _COPY_INFORMATION
{
    struct _FILE_OBJECT* SourceFileObject;                                  //0x0
    LONGLONG SourceFileOffset;                                              //0x8
};
/* Used in */
// _IOP_IRP_EXTENSION

