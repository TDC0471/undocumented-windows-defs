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
    struct _KALPC_REGION* Region;                                           //0x8
    struct _ALPC_PORT* OwnerPort;                                           //0xc
    struct _EPROCESS* OwnerProcess;                                         //0x10
    VOID* Address;                                                          //0x14
    ULONG Size;                                                             //0x18
    VOID* SecureViewHandle;                                                 //0x1c
    VOID* WriteAccessHandle;                                                //0x20
    union
    {
        struct
        {
            ULONG WriteAccess:1;                                            //0x24
            ULONG AutoRelease:1;                                            //0x24
            ULONG ForceUnlink:1;                                            //0x24
        } s1;                                                               //0x24
    } u1;                                                                   //0x24
    ULONG NumberOfOwnerMessages;                                            //0x28
    struct _LIST_ENTRY ProcessViewListEntry;                                //0x2c
};
/* Used in */
// _KALPC_MESSAGE_ATTRIBUTES
// _KALPC_REGION

