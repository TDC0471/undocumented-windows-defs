#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
union _POP_FX_DEVICE_STATUS
{
    LONG Value;                                                             //0x0
    ULONG SystemTransition:1;                                               //0x0
    ULONG PepD0Notify:1;                                                    //0x0
    ULONG IdleTimerOn:1;                                                    //0x0
    ULONG IgnoreIdleTimeout:1;                                              //0x0
    ULONG IrpInUse:1;                                                       //0x0
    ULONG IrpPending:1;                                                     //0x0
    ULONG DPNRDeviceNotified:1;                                             //0x0
    ULONG DPNRReceivedFromPep:1;                                            //0x0
    ULONG Reserved:24;                                                      //0x0
};
/* Used in */
// _POP_FX_DEVICE

