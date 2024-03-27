#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _CC_LWS_PACKET_TYPE
{
    LWSPacket_Invalid = 0,
    LWSPacket_Partition = 1,
    LWSPacket_PrivateVCM = 2,
    LWSPacket_Max = 3
};
/* Used in */
// _CC_LWS_PACKET

