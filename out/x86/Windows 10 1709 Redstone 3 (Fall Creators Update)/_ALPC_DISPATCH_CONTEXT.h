#pragma once
/* ------------------ */

#include <_ALPC_PORT.h>
#include <_KALPC_MESSAGE.h>
#include <_ALPC_COMMUNICATION_INFO.h>
#include <_ETHREAD.h>
#include <_KALPC_DIRECT_EVENT.h>

//0x24 bytes (sizeof)
struct _ALPC_DISPATCH_CONTEXT
{
    struct _ALPC_PORT* PortObject;                                          //0x0
    struct _KALPC_MESSAGE* Message;                                         //0x4
    struct _ALPC_COMMUNICATION_INFO* CommunicationInfo;                     //0x8
    struct _ETHREAD* TargetThread;                                          //0xc
    struct _ALPC_PORT* TargetPort;                                          //0x10
    union _KALPC_DIRECT_EVENT DirectEvent;                                  //0x14
    ULONG Flags;                                                            //0x18
    USHORT TotalLength;                                                     //0x1c
    USHORT Type;                                                            //0x1e
    USHORT DataInfoOffset;                                                  //0x20
    UCHAR SignalCompletion;                                                 //0x22
    UCHAR PostedToCompletionList;                                           //0x23
};
