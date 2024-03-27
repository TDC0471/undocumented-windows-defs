#pragma once
/* ------------------ */

#include <_HANDLE_REVOCATION_INFO.h>
#include <_OB_EXTENDED_USER_INFO.h>

//0x18 bytes (sizeof)
struct _OBJECT_FOOTER
{
    struct _HANDLE_REVOCATION_INFO HandleRevocationInfo;                    //0x0
    struct _OB_EXTENDED_USER_INFO ExtendedUserInfo;                         //0x10
};
/* Used in */
// _OBJECT_HEADER_EXTENDED_INFO

