#pragma once
/* ------------------ */


//0x2 bytes (sizeof)
union _WHEA_REVISION
{
    struct
    {
        UCHAR MinorRevision;                                                //0x0
        UCHAR MajorRevision;                                                //0x1
    };
    USHORT AsUSHORT;                                                        //0x0
};
/* Used in */
// _WHEA_ERROR_RECORD_HEADER
// _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR

