#pragma once
/* ------------------ */

#include <_CM_NAME_HASH.h>
#include <_CM_KEY_HASH.h>

//0x10 bytes (sizeof)
struct _CM_NAME_CONTROL_BLOCK
{
    UCHAR Compressed;                                                       //0x0
    USHORT RefCount;                                                        //0x2
    union
    {
        struct _CM_NAME_HASH NameHash;                                      //0x4
        struct
        {
            ULONG ConvKey;                                                  //0x4
            struct _CM_KEY_HASH* NextHash;                                  //0x8
            USHORT NameLength;                                              //0xc
            WCHAR Name[1];                                                  //0xe
        };
    };
};
/* Used in */
// _CM_KEY_CONTROL_BLOCK

