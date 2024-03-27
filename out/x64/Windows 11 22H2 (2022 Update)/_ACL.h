#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _ACL
{
    UCHAR AclRevision;                                                      //0x0
    UCHAR Sbz1;                                                             //0x1
    USHORT AclSize;                                                         //0x2
    USHORT AceCount;                                                        //0x4
    USHORT Sbz2;                                                            //0x6
};
/* Used in */
// _SECURITY_DESCRIPTOR
// _TOKEN

