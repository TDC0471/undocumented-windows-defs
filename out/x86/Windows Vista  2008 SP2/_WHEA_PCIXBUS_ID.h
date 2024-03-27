#pragma once
/* ------------------ */


//0x2 bytes (sizeof)
union _WHEA_PCIXBUS_ID
{
    struct
    {
        UCHAR BusNumber;                                                    //0x0
        UCHAR BusSegment;                                                   //0x1
    };
    USHORT AsUSHORT;                                                        //0x0
};
/* Used in */
// _WHEA_PCIXBUS_ERROR

