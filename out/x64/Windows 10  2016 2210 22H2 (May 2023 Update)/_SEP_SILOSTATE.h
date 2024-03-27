#pragma once
/* ------------------ */

#include <_SEP_LOGON_SESSION_REFERENCES.h>
#include <_UNICODE_STRING.h>
#include <_CI_NGEN_PATHS.h>

//0x30 bytes (sizeof)
struct _SEP_SILOSTATE
{
    struct _SEP_LOGON_SESSION_REFERENCES* SystemLogonSession;               //0x0
    struct _SEP_LOGON_SESSION_REFERENCES* AnonymousLogonSession;            //0x8
    VOID* AnonymousLogonToken;                                              //0x10
    VOID* AnonymousLogonTokenNoEveryone;                                    //0x18
    struct _UNICODE_STRING* UncSystemPaths;                                 //0x20
    struct _CI_NGEN_PATHS* NgenPaths;                                       //0x28
};
/* Used in */
// _ESERVERSILO_GLOBALS

