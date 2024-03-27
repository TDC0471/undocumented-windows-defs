#pragma once
/* ------------------ */

#include <_WHEA_NOTIFICATION_FLAGS.h>

//0x1c bytes (sizeof)
struct _WHEA_NOTIFICATION_DESCRIPTOR
{
    UCHAR Type;                                                             //0x0
    UCHAR Length;                                                           //0x1
    union _WHEA_NOTIFICATION_FLAGS Flags;                                   //0x2
    union
    {
        struct
        {
            ULONG PollInterval;                                             //0x4
        } Polled;                                                           //0x4
        struct
        {
            ULONG PollInterval;                                             //0x4
            ULONG Vector;                                                   //0x8
            ULONG SwitchToPollingThreshold;                                 //0xc
            ULONG SwitchToPollingWindow;                                    //0x10
            ULONG ErrorThreshold;                                           //0x14
            ULONG ErrorThresholdWindow;                                     //0x18
        } Interrupt;                                                        //0x4
        struct
        {
            ULONG PollInterval;                                             //0x4
            ULONG Vector;                                                   //0x8
            ULONG SwitchToPollingThreshold;                                 //0xc
            ULONG SwitchToPollingWindow;                                    //0x10
            ULONG ErrorThreshold;                                           //0x14
            ULONG ErrorThresholdWindow;                                     //0x18
        } LocalInterrupt;                                                   //0x4
        struct
        {
            ULONG PollInterval;                                             //0x4
            ULONG Vector;                                                   //0x8
            ULONG SwitchToPollingThreshold;                                 //0xc
            ULONG SwitchToPollingWindow;                                    //0x10
            ULONG ErrorThreshold;                                           //0x14
            ULONG ErrorThresholdWindow;                                     //0x18
        } Sci;                                                              //0x4
        struct
        {
            ULONG PollInterval;                                             //0x4
            ULONG Vector;                                                   //0x8
            ULONG SwitchToPollingThreshold;                                 //0xc
            ULONG SwitchToPollingWindow;                                    //0x10
            ULONG ErrorThreshold;                                           //0x14
            ULONG ErrorThresholdWindow;                                     //0x18
        } Nmi;                                                              //0x4
    } u;                                                                    //0x4
};
/* Used in */
// _WHEA_GENERIC_ERROR_DESCRIPTOR
// _WHEA_XPF_CMC_DESCRIPTOR

