#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _ETW_NOTIFICATION_TYPE
{
    EtwNotificationTypeNoReply = 1,
    EtwNotificationTypeLegacyEnable = 2,
    EtwNotificationTypeEnable = 3,
    EtwNotificationTypePrivateLogger = 4,
    EtwNotificationTypePerflib = 5,
    EtwNotificationTypeAudio = 6,
    EtwNotificationTypeSession = 7,
    EtwNotificationTypeReserved = 8,
    EtwNotificationTypeCredentialUI = 9,
    EtwNotificationTypeMax = 10
};
/* Used in */
// _ETWP_NOTIFICATION_HEADER

