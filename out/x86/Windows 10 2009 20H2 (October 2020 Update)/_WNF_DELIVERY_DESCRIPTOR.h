#pragma once
/* ------------------ */

#include <_WNF_STATE_NAME.h>
#include <_WNF_TYPE_ID.h>

//0x30 bytes (sizeof)
struct _WNF_DELIVERY_DESCRIPTOR
{
    ULONGLONG SubscriptionId;                                               //0x0
    struct _WNF_STATE_NAME StateName;                                       //0x8
    ULONG ChangeStamp;                                                      //0x10
    ULONG StateDataSize;                                                    //0x14
    ULONG EventMask;                                                        //0x18
    struct _WNF_TYPE_ID TypeId;                                             //0x1c
    ULONG StateDataOffset;                                                  //0x2c
};
