#pragma once
/* ------------------ */

#include <PROCESSOR_IDLESTATE_INFO.h>

//0x20 bytes (sizeof)
struct PROCESSOR_IDLESTATE_POLICY
{
    USHORT Revision;                                                        //0x0
    union
    {
        USHORT AsUSHORT;                                                    //0x2
        USHORT AllowScaling:1;                                              //0x2
        USHORT Disabled:1;                                                  //0x2
        USHORT Reserved:14;                                                 //0x2
    } Flags;                                                                //0x2
    ULONG PolicyCount;                                                      //0x4
    struct PROCESSOR_IDLESTATE_INFO Policy[3];                              //0x8
};
