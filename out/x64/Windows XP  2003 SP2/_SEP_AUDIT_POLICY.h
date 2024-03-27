#pragma once
/* ------------------ */

#include <_SEP_AUDIT_POLICY_CATEGORIES.h>
#include <_SEP_AUDIT_POLICY_OVERLAY.h>

//0x8 bytes (sizeof)
struct _SEP_AUDIT_POLICY
{
    union
    {
        struct _SEP_AUDIT_POLICY_CATEGORIES PolicyElements;                 //0x0
        struct _SEP_AUDIT_POLICY_OVERLAY PolicyOverlay;                     //0x0
        ULONGLONG Overlay;                                                  //0x0
    };
};
/* Used in */
// _TOKEN

