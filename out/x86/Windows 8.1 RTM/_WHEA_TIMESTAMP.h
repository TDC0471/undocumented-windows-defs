#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>

//0x8 bytes (sizeof)
union _WHEA_TIMESTAMP
{
    ULONGLONG Seconds:8;                                                    //0x0
    ULONGLONG Minutes:8;                                                    //0x0
    ULONGLONG Hours:8;                                                      //0x0
    ULONGLONG Precise:1;                                                    //0x0
    ULONGLONG Reserved:7;                                                   //0x0
    ULONGLONG Day:8;                                                        //0x0
    ULONGLONG Month:8;                                                      //0x0
    ULONGLONG Year:8;                                                       //0x0
    ULONGLONG Century:8;                                                    //0x0
    union _LARGE_INTEGER AsLARGE_INTEGER;                                   //0x0
};
/* Used in */
// _WHEA_ERROR_RECORD_HEADER

