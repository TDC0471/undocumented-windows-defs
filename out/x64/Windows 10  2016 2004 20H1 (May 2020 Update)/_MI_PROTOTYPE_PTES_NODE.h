#pragma once
/* ------------------ */

#include <_RTL_BALANCED_NODE.h>

//0x20 bytes (sizeof)
struct _MI_PROTOTYPE_PTES_NODE
{
    struct _RTL_BALANCED_NODE Node;                                         //0x0
    union
    {
        struct
        {
            ULONGLONG AllocationType:3;                                     //0x18
            ULONGLONG Inserted:1;                                           //0x18
        } e1;                                                               //0x18
        struct
        {
            ULONGLONG PrototypePtesFlags;                                   //0x18
        } e2;                                                               //0x18
    } u1;                                                                   //0x18
};
/* Used in */
// _MI_IMAGE_SECURITY_REFERENCE
// _MI_PER_SESSION_PROTOS
// _MSUBSECTION

