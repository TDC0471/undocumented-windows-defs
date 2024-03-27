#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
union _KALPC_DIRECT_EVENT
{
    ULONGLONG Event;                                                        //0x0
    ULONGLONG Referenced:1;                                                 //0x0
    ULONGLONG Reserved:63;                                                  //0x0
};
/* Used in */
// _ALPC_DISPATCH_CONTEXT
// _KALPC_MESSAGE_ATTRIBUTES

