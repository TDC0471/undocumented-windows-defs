#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _ETW_SYSTEMTIME
{
    USHORT Year;                                                            //0x0
    USHORT Month;                                                           //0x2
    USHORT DayOfWeek;                                                       //0x4
    USHORT Day;                                                             //0x6
    USHORT Hour;                                                            //0x8
    USHORT Minute;                                                          //0xa
    USHORT Second;                                                          //0xc
    USHORT Milliseconds;                                                    //0xe
};
