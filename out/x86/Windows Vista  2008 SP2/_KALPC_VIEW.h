#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_KALPC_REGION.h>
#include <_ALPC_PORT.h>
#include <_EPROCESS.h>

//0x34 bytes (sizeof)
struct _KALPC_VIEW
{
    struct _LIST_ENTRY ViewListEntry;                                       //0x0
    union
    {
        struct
        {
            ULONG WriteAccess:1;                                            //0x8
            ULONG AutoRelease:1;                                            //0x8
            ULONG ForceUnlink:1;                                            //0x8
        } s1;                                                               //0x8
    } u1;                                                                   //0x8
    struct _KALPC_REGION* Region;                                           //0xc
    struct _ALPC_PORT* OwnerPort;                                           //0x10
    struct _EPROCESS* OwnerProcess;                                         //0x14
    VOID* Address;                                                          //0x18
    ULONG Size;                                                             //0x1c
    VOID* SecureViewHandle;                                                 //0x20
    VOID* WriteAccessHandle;                                                //0x24
    ULONG NumberOfOwnerMessages;                                            //0x28
    struct _LIST_ENTRY ProcessViewListEntry;                                //0x2c
};
/* Used in */
// _KALPC_MESSAGE_ATTRIBUTES
// _KALPC_REGION

