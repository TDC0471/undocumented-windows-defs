#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
union _KALPC_DIRECT_EVENT
{
    ULONG Value;                                                            //0x0
    ULONG DirectType:1;                                                     //0x0
    ULONG EventReferenced:1;                                                //0x0
    ULONG EventObjectBits:30;                                               //0x0
};
/* Used in */
// _ALPC_DISPATCH_CONTEXT
// _KALPC_MESSAGE_ATTRIBUTES

