#pragma once
/* ------------------ */

#include <_ALPC_PORT.h>
#include <_KALPC_MESSAGE.h>
#include <_ALPC_COMMUNICATION_INFO.h>
#include <_ETHREAD.h>

//0x38 bytes (sizeof)
struct _ALPC_DISPATCH_CONTEXT
{
    struct _ALPC_PORT* PortObject;                                          //0x0
    struct _KALPC_MESSAGE* Message;                                         //0x8
    struct _ALPC_COMMUNICATION_INFO* CommunicationInfo;                     //0x10
    ULONG Flags;                                                            //0x18
    struct _ETHREAD* TargetThread;                                          //0x20
    struct _ALPC_PORT* TargetPort;                                          //0x28
    USHORT TotalLength;                                                     //0x30
    USHORT Type;                                                            //0x32
    USHORT DataInfoOffset;                                                  //0x34
};