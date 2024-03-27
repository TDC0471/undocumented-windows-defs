#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
union _WHEA_PERSISTENCE_INFO
{
    ULONGLONG Signature:16;                                                 //0x0
    ULONGLONG Length:24;                                                    //0x0
    ULONGLONG Identifier:16;                                                //0x0
    ULONGLONG Attributes:2;                                                 //0x0
    ULONGLONG DoNotLog:1;                                                   //0x0
    ULONGLONG Reserved:5;                                                   //0x0
    ULONGLONG AsULONGLONG;                                                  //0x0
};
/* Used in */
// _WHEA_ERROR_RECORD_HEADER

