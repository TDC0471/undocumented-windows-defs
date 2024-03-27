#pragma once
/* ------------------ */

#include <_ACL.h>

//0x14 bytes (sizeof)
struct _SECURITY_DESCRIPTOR
{
    UCHAR Revision;                                                         //0x0
    UCHAR Sbz1;                                                             //0x1
    USHORT Control;                                                         //0x2
    VOID* Owner;                                                            //0x4
    VOID* Group;                                                            //0x8
    struct _ACL* Sacl;                                                      //0xc
    struct _ACL* Dacl;                                                      //0x10
};
/* Used in */
// _WNF_STATE_NAME_REGISTRATION

