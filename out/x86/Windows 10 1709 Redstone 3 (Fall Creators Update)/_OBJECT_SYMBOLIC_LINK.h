#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>
#include <_UNICODE_STRING.h>
#include <_OBJECT_SYMBOLIC_LINK.h>

//0x20 bytes (sizeof)
struct _OBJECT_SYMBOLIC_LINK
{
    union _LARGE_INTEGER CreationTime;                                      //0x0
    union
    {
        struct _UNICODE_STRING LinkTarget;                                  //0x8
        struct
        {
            LONG (*Callback)(struct _OBJECT_SYMBOLIC_LINK* arg1, VOID* arg2, struct _UNICODE_STRING* arg3, VOID** arg4); //0x8
            VOID* CallbackContext;                                          //0xc
        };
    };
    ULONG DosDeviceDriveIndex;                                              //0x10
    ULONG Flags;                                                            //0x14
    ULONG AccessMask;                                                       //0x18
};
/* Used in */
// _OBJECT_SYMBOLIC_LINK

