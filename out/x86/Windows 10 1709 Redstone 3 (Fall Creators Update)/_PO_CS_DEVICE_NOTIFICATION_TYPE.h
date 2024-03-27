#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _PO_CS_DEVICE_NOTIFICATION_TYPE
{
    PoCsDeviceNotificationStorage = 0,
    PoCsDeviceNotificationWiFi = 1,
    PoCsDeviceNotificationMbn = 2,
    PoCsDeviceNotificationAudio = 3,
    PoCsDeviceNotificationEthernet = 4,
    PoCsDeviceNotificationMaximum = 5
};
