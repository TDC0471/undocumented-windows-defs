#pragma once
/* ------------------ */

#include <_OBJECT_NAME_INFORMATION.h>

//0x4 bytes (sizeof)
struct _SE_AUDIT_PROCESS_CREATION_INFO
{
    struct _OBJECT_NAME_INFORMATION* ImageFileName;                         //0x0
};
/* Used in */
// _EPROCESS
