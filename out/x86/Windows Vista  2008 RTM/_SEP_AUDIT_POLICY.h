#pragma once
/* ------------------ */

#include <_TOKEN_AUDIT_POLICY.h>

//0x1b bytes (sizeof)
struct _SEP_AUDIT_POLICY
{
    struct _TOKEN_AUDIT_POLICY AdtTokenPolicy;                              //0x0
    UCHAR PolicySetStatus;                                                  //0x1a
};
/* Used in */
// _TOKEN

