#pragma once
/* ------------------ */

#include <_SID_IDENTIFIER_AUTHORITY.h>

//0xc bytes (sizeof)
struct _SID
{
    UCHAR Revision;                                                         //0x0
    UCHAR SubAuthorityCount;                                                //0x1
    struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority;                   //0x2
    ULONG SubAuthority[1];                                                  //0x8
};
/* Used in */
// _FILE_GET_QUOTA_INFORMATION

