#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _MMPFNENTRY
{
    ULONG Modified:1;                                                       //0x0
    ULONG ReadInProgress:1;                                                 //0x0
    ULONG WriteInProgress:1;                                                //0x0
    ULONG PrototypePte:1;                                                   //0x0
    ULONG PageColor:3;                                                      //0x0
    ULONG ParityError:1;                                                    //0x0
    ULONG PageLocation:3;                                                   //0x0
    ULONG RemovalRequested:1;                                               //0x0
    ULONG CacheAttribute:2;                                                 //0x0
    ULONG Rom:1;                                                            //0x0
    ULONG LockCharged:1;                                                    //0x0
    ULONG DontUse:16;                                                       //0x0
};
/* Used in */
// _MMPFN

