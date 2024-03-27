#pragma once
/* ------------------ */

#include <_PS_TRUSTLET_ATTRIBUTE_ACCESSRIGHTS.h>

//0x4 bytes (sizeof)
struct _PS_TRUSTLET_ATTRIBUTE_TYPE
{
    union
    {
        struct
        {
            UCHAR Version;                                                  //0x0
            UCHAR DataCount;                                                //0x1
            UCHAR SemanticType;                                             //0x2
            union _PS_TRUSTLET_ATTRIBUTE_ACCESSRIGHTS AccessRights;         //0x3
        };
        ULONG AttributeType;                                                //0x0
    };
};
/* Used in */
// _PS_TRUSTLET_ATTRIBUTE_HEADER

