#pragma once
/* ------------------ */

#include <tagSWITCH_CONTEXT_ATTRIBUTE.h>
#include <tagSWITCH_CONTEXT_DATA.h>

//0x358 bytes (sizeof)
struct tagSWITCH_CONTEXT
{
    struct tagSWITCH_CONTEXT_ATTRIBUTE Attribute;                           //0x0
    struct tagSWITCH_CONTEXT_DATA Data;                                     //0x18
};
