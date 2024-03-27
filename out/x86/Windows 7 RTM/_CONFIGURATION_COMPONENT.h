#pragma once
/* ------------------ */

#include <_CONFIGURATION_CLASS.h>
#include <_CONFIGURATION_TYPE.h>
#include <_DEVICE_FLAGS.h>

//0x24 bytes (sizeof)
struct _CONFIGURATION_COMPONENT
{
    enum _CONFIGURATION_CLASS Class;                                        //0x0
    enum _CONFIGURATION_TYPE Type;                                          //0x4
    struct _DEVICE_FLAGS Flags;                                             //0x8
    USHORT Version;                                                         //0xc
    USHORT Revision;                                                        //0xe
    ULONG Key;                                                              //0x10
    union
    {
        ULONG AffinityMask;                                                 //0x14
        struct
        {
            USHORT Group;                                                   //0x14
            USHORT GroupIndex;                                              //0x16
        };
    };
    ULONG ConfigurationDataLength;                                          //0x18
    ULONG IdentifierLength;                                                 //0x1c
    CHAR* Identifier;                                                       //0x20
};
/* Used in */
// _CONFIGURATION_COMPONENT_DATA

