#pragma once
/* ------------------ */


//0x2 bytes (sizeof)
union _WHEA_NOTIFICATION_FLAGS
{
    USHORT PollIntervalRW:1;                                                //0x0
    USHORT SwitchToPollingThresholdRW:1;                                    //0x0
    USHORT SwitchToPollingWindowRW:1;                                       //0x0
    USHORT ErrorThresholdRW:1;                                              //0x0
    USHORT ErrorThresholdWindowRW:1;                                        //0x0
    USHORT Reserved:11;                                                     //0x0
    USHORT AsUSHORT;                                                        //0x0
};
/* Used in */
// _WHEA_NOTIFICATION_DESCRIPTOR

