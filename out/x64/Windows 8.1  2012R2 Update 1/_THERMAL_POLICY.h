#pragma once
/* ------------------ */


//0x14 bytes (sizeof)
struct _THERMAL_POLICY
{
    ULONG Version;                                                          //0x0
    UCHAR WaitForUpdate;                                                    //0x4
    UCHAR Hibernate;                                                        //0x5
    UCHAR Critical;                                                         //0x6
    ULONG ActivationReasons;                                                //0x8
    ULONG PassiveLimit;                                                     //0xc
    ULONG ActiveLevel;                                                      //0x10
};
/* Used in */
// _POP_THERMAL_ZONE

