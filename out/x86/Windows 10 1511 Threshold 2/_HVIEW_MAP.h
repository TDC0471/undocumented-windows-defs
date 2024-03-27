#pragma once
/* ------------------ */

#include <_EX_PUSH_LOCK.h>
#include <_FILE_OBJECT.h>
#include <_HVIEW_MAP_DIRECTORY.h>
#include <_HVIEW_MAP_PIN_LOG.h>

//0x320 bytes (sizeof)
struct _HVIEW_MAP
{
    ULONG MappedLength;                                                     //0x0
    struct _EX_PUSH_LOCK Lock;                                              //0x4
    struct _FILE_OBJECT* FileObject;                                        //0x8
    struct _HVIEW_MAP_DIRECTORY* Directory;                                 //0xc
    ULONG PagesCharged;                                                     //0x10
    struct _HVIEW_MAP_PIN_LOG PinLog;                                       //0x18
};
/* Used in */
// _HHIVE

