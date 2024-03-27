#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
union _KALPC_DIRECT_EVENT
{
    ULONG Event;                                                            //0x0
    ULONG Referenced:1;                                                     //0x0
    ULONG Reserved:31;                                                      //0x0
};
/* Used in */
// _ALPC_DISPATCH_CONTEXT
// _KALPC_MESSAGE_ATTRIBUTES

