#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _NETWORK_LOADER_BLOCK
{
    UCHAR* DHCPServerACK;                                                   //0x0
    ULONG DHCPServerACKLength;                                              //0x4
    UCHAR* BootServerReplyPacket;                                           //0x8
    ULONG BootServerReplyPacketLength;                                      //0xc
};
/* Used in */
// _LOADER_PARAMETER_EXTENSION

