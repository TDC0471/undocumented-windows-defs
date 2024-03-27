#pragma once
/* ------------------ */

#include <PROFILE_DEPARTURE_STYLE.h>

//0x30 bytes (sizeof)
struct DOCK_INTERFACE
{
    USHORT Size;                                                            //0x0
    USHORT Version;                                                         //0x2
    VOID* Context;                                                          //0x8
    VOID (*InterfaceReference)(VOID* arg1);                                 //0x10
    VOID (*InterfaceDereference)(VOID* arg1);                               //0x18
    ULONG (*ProfileDepartureSetMode)(VOID* arg1, enum PROFILE_DEPARTURE_STYLE arg2); //0x20
    ULONG (*ProfileDepartureUpdate)(VOID* arg1);                            //0x28
};
/* Used in */
// _PENDING_RELATIONS_LIST_ENTRY

