#pragma once
/* ------------------ */

#include <_LUID.h>
#include <_TOKEN_SOURCE.h>

//0x28 bytes (sizeof)
struct _TOKEN_CONTROL
{
    struct _LUID TokenId;                                                   //0x0
    struct _LUID AuthenticationId;                                          //0x8
    struct _LUID ModifiedId;                                                //0x10
    struct _TOKEN_SOURCE TokenSource;                                       //0x18
};
/* Used in */
// _SECURITY_CLIENT_CONTEXT

