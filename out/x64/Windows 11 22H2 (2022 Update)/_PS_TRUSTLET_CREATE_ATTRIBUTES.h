#pragma once
/* ------------------ */

#include <_PS_TRUSTLET_ATTRIBUTE_DATA.h>

//0x18 bytes (sizeof)
struct _PS_TRUSTLET_CREATE_ATTRIBUTES
{
    ULONGLONG TrustletIdentity;                                             //0x0
    struct _PS_TRUSTLET_ATTRIBUTE_DATA Attributes[1];                       //0x8
};
