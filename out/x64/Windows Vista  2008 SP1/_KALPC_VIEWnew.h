#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_KALPC_REGION.h>
#include <_ALPC_PORT.h>
#include <_EPROCESS.h>

//0x68 bytes (sizeof)
struct _KALPC_VIEW
{
    struct _LIST_ENTRY ViewListEntry;                                       //0x0
    union
    {
        struct
        {
            ULONG WriteAccess:1;                                            //0x10
            ULONG AutoRelease:1;                                            //0x10
            ULONG ForceUnlink:1;                                            //0x10
        } s1;                                                               //0x10
    } u1;                                                                   //0x10
    struct _KALPC_REGION* Region;                                           //0x18
    struct _ALPC_PORT* OwnerPort;                                           //0x20
    struct _EPROCESS* OwnerProcess;                                         //0x28
    VOID* Address;                                                          //0x30
    ULONGLONG Size;                                                         //0x38
    VOID* SecureViewHandle;                                                 //0x40
    VOID* WriteAccessHandle;                                                //0x48
    ULONG NumberOfOwnerMessages;                                            //0x50
    struct _LIST_ENTRY ProcessViewListEntry;                                //0x58
};
/* Used in */
// _KALPC_MESSAGE_ATTRIBUTES
// _KALPC_REGION

