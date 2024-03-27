#pragma once
/* ------------------ */

#include <_SEP_LOGON_SESSION_REFERENCES.h>
#include <_UNICODE_STRING.h>
#include <_CI_NGEN_PATHS.h>

//0x18 bytes (sizeof)
struct _SEP_SILOSTATE
{
    struct _SEP_LOGON_SESSION_REFERENCES* SystemLogonSession;               //0x0
    struct _SEP_LOGON_SESSION_REFERENCES* AnonymousLogonSession;            //0x4
    VOID* AnonymousLogonToken;                                              //0x8
    VOID* AnonymousLogonTokenNoEveryone;                                    //0xc
    struct _UNICODE_STRING* UncSystemPaths;                                 //0x10
    struct _CI_NGEN_PATHS* NgenPaths;                                       //0x14
};
/* Used in */
// _ESERVERSILO_GLOBALS

