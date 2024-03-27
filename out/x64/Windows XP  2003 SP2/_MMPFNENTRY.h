#pragma once
/* ------------------ */


//0x2 bytes (sizeof)
struct _MMPFNENTRY
{
    USHORT Modified:1;                                                      //0x0
    USHORT ReadInProgress:1;                                                //0x0
    USHORT WriteInProgress:1;                                               //0x0
    USHORT PrototypePte:1;                                                  //0x0
    USHORT PageColor:4;                                                     //0x0
    USHORT PageLocation:3;                                                  //0x0
    USHORT RemovalRequested:1;                                              //0x0
    USHORT CacheAttribute:2;                                                //0x0
    USHORT Rom:1;                                                           //0x0
    USHORT ParityError:1;                                                   //0x0
};
/* Used in */
// _MMPFN

