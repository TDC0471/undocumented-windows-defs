#pragma once
/* ------------------ */

#include <PROFILE_DEPARTURE_STYLE.h>

//0x18 bytes (sizeof)
struct DOCK_INTERFACE
{
    USHORT Size;                                                            //0x0
    USHORT Version;                                                         //0x2
    VOID* Context;                                                          //0x4
    VOID (*InterfaceReference)(VOID* arg1);                                 //0x8
    VOID (*InterfaceDereference)(VOID* arg1);                               //0xc
    ULONG (*ProfileDepartureSetMode)(VOID* arg1, enum PROFILE_DEPARTURE_STYLE arg2); //0x10
    ULONG (*ProfileDepartureUpdate)(VOID* arg1);                            //0x14
};
/* Used in */
// _PENDING_RELATIONS_LIST_ENTRY

