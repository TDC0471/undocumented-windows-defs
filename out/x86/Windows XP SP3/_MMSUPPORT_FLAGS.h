#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _MMSUPPORT_FLAGS
{
    ULONG SessionSpace:1;                                                   //0x0
    ULONG BeingTrimmed:1;                                                   //0x0
    ULONG SessionLeader:1;                                                  //0x0
    ULONG TrimHard:1;                                                       //0x0
    ULONG WorkingSetHard:1;                                                 //0x0
    ULONG AddressSpaceBeingDeleted:1;                                       //0x0
    ULONG Available:10;                                                     //0x0
    ULONG AllowWorkingSetAdjustment:8;                                      //0x0
    ULONG MemoryPriority:8;                                                 //0x0
};
/* Used in */
// _MMSUPPORT

