#pragma once
/* ------------------ */


//0x1 bytes (sizeof)
union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS
{
    UCHAR FRUId:1;                                                          //0x0
    UCHAR FRUText:1;                                                        //0x0
    UCHAR Reserved:6;                                                       //0x0
    UCHAR AsUCHAR;                                                          //0x0
};
/* Used in */
// _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR

