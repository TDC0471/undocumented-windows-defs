#pragma once
/* ------------------ */


//0x20 bytes (sizeof)
struct _NETWORK_LOADER_BLOCK
{
    UCHAR* DHCPServerACK;                                                   //0x0
    ULONG DHCPServerACKLength;                                              //0x8
    UCHAR* BootServerReplyPacket;                                           //0x10
    ULONG BootServerReplyPacketLength;                                      //0x18
};
/* Used in */
// _LOADER_PARAMETER_EXTENSION

