#pragma once
/* ------------------ */

#include <_ALPC_PORT.h>
#include <_KALPC_MESSAGE.h>
#include <_ALPC_COMMUNICATION_INFO.h>
#include <_ETHREAD.h>
#include <_KALPC_DIRECT_EVENT.h>

//0x40 bytes (sizeof)
struct _ALPC_DISPATCH_CONTEXT
{
    struct _ALPC_PORT* PortObject;                                          //0x0
    struct _KALPC_MESSAGE* Message;                                         //0x8
    struct _ALPC_COMMUNICATION_INFO* CommunicationInfo;                     //0x10
    struct _ETHREAD* TargetThread;                                          //0x18
    struct _ALPC_PORT* TargetPort;                                          //0x20
    union _KALPC_DIRECT_EVENT DirectEvent;                                  //0x28
    ULONG Flags;                                                            //0x30
    USHORT TotalLength;                                                     //0x34
    USHORT Type;                                                            //0x36
    USHORT DataInfoOffset;                                                  //0x38
    UCHAR SignalCompletion;                                                 //0x3a
    UCHAR PostedToCompletionList;                                           //0x3b
};
