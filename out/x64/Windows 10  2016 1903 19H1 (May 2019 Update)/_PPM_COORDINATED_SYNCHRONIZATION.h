#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
union _PPM_COORDINATED_SYNCHRONIZATION
{
    LONG AsLong;                                                            //0x0
    ULONG EnterProcessor:12;                                                //0x0
    ULONG ExitProcessor:12;                                                 //0x0
    ULONG Transition:2;                                                     //0x0
    ULONG Entered:1;                                                        //0x0
    ULONG EntryPriority:5;                                                  //0x0
};
/* Used in */
// _PPM_PLATFORM_STATE

