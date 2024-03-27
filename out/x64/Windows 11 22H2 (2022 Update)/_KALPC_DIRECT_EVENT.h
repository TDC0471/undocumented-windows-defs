#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
union _KALPC_DIRECT_EVENT
{
    ULONGLONG Value;                                                        //0x0
    ULONGLONG DirectType:1;                                                 //0x0
    ULONGLONG EventReferenced:1;                                            //0x0
    ULONGLONG EventObjectBits:62;                                           //0x0
};
/* Used in */
// _ALPC_DISPATCH_CONTEXT
// _KALPC_MESSAGE_ATTRIBUTES

