#pragma once
/* ------------------ */

#include <_RTL_BALANCED_NODE.h>

//0x10 bytes (sizeof)
struct _MI_PROTOTYPE_PTES_NODE
{
    struct _RTL_BALANCED_NODE Node;                                         //0x0
    union
    {
        struct
        {
            ULONG AllocationType:3;                                         //0xc
            ULONG Inserted:1;                                               //0xc
        } e1;                                                               //0xc
        struct
        {
            ULONG PrototypePtesFlags;                                       //0xc
        } e2;                                                               //0xc
    } u1;                                                                   //0xc
};
/* Used in */
// _MI_IMAGE_SECURITY_REFERENCE
// _MI_PER_SESSION_PROTOS
// _MSUBSECTION

