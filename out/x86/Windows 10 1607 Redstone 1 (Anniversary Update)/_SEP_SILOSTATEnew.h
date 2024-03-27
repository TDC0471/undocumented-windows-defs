#pragma once
/* ------------------ */

#include <_SEP_LOGON_SESSION_REFERENCES.h>

//0x10 bytes (sizeof)
struct _SEP_SILOSTATE
{
    struct _SEP_LOGON_SESSION_REFERENCES* SystemLogonSession;               //0x0
    struct _SEP_LOGON_SESSION_REFERENCES* AnonymousLogonSession;            //0x4
    VOID* AnonymousLogonToken;                                              //0x8
    VOID* AnonymousLogonTokenNoEveryone;                                    //0xc
};
/* Used in */
// _ESERVERSILO_GLOBALS

