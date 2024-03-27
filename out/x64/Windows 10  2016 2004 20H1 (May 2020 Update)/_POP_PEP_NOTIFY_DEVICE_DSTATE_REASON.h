#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _POP_PEP_NOTIFY_DEVICE_DSTATE_REASON
{
    PepNotifyDeviceDStateReasonNone = 0,
    PepNotifyDeviceDStateReasonSystemTransition = 1,
    PepNotifyDeviceDStateReasonDfx = 2,
    PepNotifyDeviceDStateReasonMax = 3
};
/* Used in */
// _POP_IRP_DATA

