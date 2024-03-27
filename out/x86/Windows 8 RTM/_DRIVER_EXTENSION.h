#pragma once
/* ------------------ */

#include <_DRIVER_OBJECT.h>
#include <_DEVICE_OBJECT.h>
#include <_UNICODE_STRING.h>
#include <_IO_CLIENT_EXTENSION.h>
#include <_FS_FILTER_CALLBACKS.h>

//0x24 bytes (sizeof)
struct _DRIVER_EXTENSION
{
    struct _DRIVER_OBJECT* DriverObject;                                    //0x0
    LONG (*AddDevice)(struct _DRIVER_OBJECT* arg1, struct _DEVICE_OBJECT* arg2); //0x4
    ULONG Count;                                                            //0x8
    struct _UNICODE_STRING ServiceKeyName;                                  //0xc
    struct _IO_CLIENT_EXTENSION* ClientDriverExtension;                     //0x14
    struct _FS_FILTER_CALLBACKS* FsFilterCallbacks;                         //0x18
    VOID* KseCallbacks;                                                     //0x1c
    VOID* DvCallbacks;                                                      //0x20
};
/* Used in */
// _DRIVER_OBJECT

