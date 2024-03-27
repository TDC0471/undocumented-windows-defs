#pragma once
/* ------------------ */


//0x1 bytes (sizeof)
union _PS_TRUSTLET_ATTRIBUTE_ACCESSRIGHTS
{
    UCHAR Trustlet:1;                                                       //0x0
    UCHAR Ntos:1;                                                           //0x0
    UCHAR WriteHandle:1;                                                    //0x0
    UCHAR ReadHandle:1;                                                     //0x0
    UCHAR Reserved:4;                                                       //0x0
    UCHAR AccessRights;                                                     //0x0
};
/* Used in */
// _PS_TRUSTLET_ATTRIBUTE_TYPE

