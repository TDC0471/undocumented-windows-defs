#pragma once
/* ------------------ */

#include <_ACL.h>

//0x28 bytes (sizeof)
struct _SECURITY_DESCRIPTOR
{
    UCHAR Revision;                                                         //0x0
    UCHAR Sbz1;                                                             //0x1
    USHORT Control;                                                         //0x2
    VOID* Owner;                                                            //0x8
    VOID* Group;                                                            //0x10
    struct _ACL* Sacl;                                                      //0x18
    struct _ACL* Dacl;                                                      //0x20
};
/* Used in */
// _WNF_STATE_NAME_REGISTRATION

