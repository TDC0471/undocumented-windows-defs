#pragma once
/* ------------------ */

#include <_DRIVER_OBJECT.h>
#include <_DEVICE_OBJECT.h>
#include <_UNICODE_STRING.h>
#include <_IO_CLIENT_EXTENSION.h>
#include <_FS_FILTER_CALLBACKS.h>

//0x48 bytes (sizeof)
struct _DRIVER_EXTENSION
{
    struct _DRIVER_OBJECT* DriverObject;                                    //0x0
    LONG (*AddDevice)(struct _DRIVER_OBJECT* arg1, struct _DEVICE_OBJECT* arg2); //0x8
    ULONG Count;                                                            //0x10
    struct _UNICODE_STRING ServiceKeyName;                                  //0x18
    struct _IO_CLIENT_EXTENSION* ClientDriverExtension;                     //0x28
    struct _FS_FILTER_CALLBACKS* FsFilterCallbacks;                         //0x30
    VOID* KseCallbacks;                                                     //0x38
    VOID* DvCallbacks;                                                      //0x40
};
/* Used in */
// _DRIVER_OBJECT

