#pragma once
/* ------------------ */

#include <_CM_NAME_HASH.h>
#include <_CM_KEY_HASH.h>

//0x20 bytes (sizeof)
struct _CM_NAME_CONTROL_BLOCK
{
    ULONG Compressed:1;                                                     //0x0
    ULONG RefCount:31;                                                      //0x0
    union
    {
        struct _CM_NAME_HASH NameHash;                                      //0x8
        struct
        {
            ULONG ConvKey;                                                  //0x8
            struct _CM_KEY_HASH* NextHash;                                  //0x10
            USHORT NameLength;                                              //0x18
            WCHAR Name[1];                                                  //0x1a
        };
    };
};
/* Used in */
// _CM_KEY_CONTROL_BLOCK

