#pragma once
/* ------------------ */

#include <_EX_PUSH_LOCK.h>
#include <_DBGKP_ERROR_PORT.h>
#include <_EPROCESS.h>
#include <_KEVENT.h>

//0x10 bytes (sizeof)
struct _DBGK_SILOSTATE
{
    struct _EX_PUSH_LOCK ErrorPortLock;                                     //0x0
    struct _DBGKP_ERROR_PORT* ErrorPort;                                    //0x4
    struct _EPROCESS* ErrorProcess;                                         //0x8
    struct _KEVENT* ErrorPortRegisteredEvent;                               //0xc
};
/* Used in */
// _ESERVERSILO_GLOBALS

