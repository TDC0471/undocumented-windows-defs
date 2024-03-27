#pragma once
/* ------------------ */


//0x2 bytes (sizeof)
union _HEAP_SEGMENT_MGR_COMMIT_STATE
{
    USHORT CommittedPageCount:11;                                           //0x0
    USHORT Spare:3;                                                         //0x0
    USHORT LargePageOperationInProgress:1;                                  //0x0
    USHORT LargePageCommit:1;                                               //0x0
    volatile USHORT EntireUShortV;                                          //0x0
    USHORT EntireUShort;                                                    //0x0
};
/* Used in */
// _HEAP_PAGE_SEGMENT

