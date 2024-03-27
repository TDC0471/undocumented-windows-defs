#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _TIME_FIELDS
{
    SHORT Year;                                                             //0x0
    SHORT Month;                                                            //0x2
    SHORT Day;                                                              //0x4
    SHORT Hour;                                                             //0x6
    SHORT Minute;                                                           //0x8
    SHORT Second;                                                           //0xa
    SHORT Milliseconds;                                                     //0xc
    SHORT Weekday;                                                          //0xe
};
