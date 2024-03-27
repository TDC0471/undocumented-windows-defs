#pragma once
/* ------------------ */

#include <_DEVICE_OBJECT.h>
#include <_FILE_OBJECT.h>
#include <_FS_FILTER_PARAMETERS.h>

//0x24 bytes (sizeof)
struct _FS_FILTER_CALLBACK_DATA
{
    ULONG SizeOfFsFilterCallbackData;                                       //0x0
    UCHAR Operation;                                                        //0x4
    UCHAR Reserved;                                                         //0x5
    struct _DEVICE_OBJECT* DeviceObject;                                    //0x8
    struct _FILE_OBJECT* FileObject;                                        //0xc
    union _FS_FILTER_PARAMETERS Parameters;                                 //0x10
};
/* Used in */
// _FS_FILTER_CALLBACKS

