#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _WHEA_PERSISTENCE_INFO
{
    ULONGLONG Identifier:16;                                                //0x0
    ULONGLONG Length:24;                                                    //0x0
    ULONGLONG Reserved:6;                                                   //0x0
    ULONGLONG Attributes:2;                                                 //0x0
    ULONGLONG Signature:16;                                                 //0x0
};
/* Used in */
// _WHEA_ERROR_RECORD_HEADER

