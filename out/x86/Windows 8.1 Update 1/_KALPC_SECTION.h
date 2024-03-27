#pragma once
/* ------------------ */

#include <_ALPC_HANDLE_TABLE.h>
#include <_EPROCESS.h>
#include <_ALPC_PORT.h>
#include <_LIST_ENTRY.h>

//0x28 bytes (sizeof)
struct _KALPC_SECTION
{
    VOID* SectionObject;                                                    //0x0
    ULONG Size;                                                             //0x4
    struct _ALPC_HANDLE_TABLE* HandleTable;                                 //0x8
    VOID* SectionHandle;                                                    //0xc
    struct _EPROCESS* OwnerProcess;                                         //0x10
    struct _ALPC_PORT* OwnerPort;                                           //0x14
    union
    {
        struct
        {
            ULONG Internal:1;                                               //0x18
            ULONG Secure:1;                                                 //0x18
        } s1;                                                               //0x18
    } u1;                                                                   //0x18
    ULONG NumberOfRegions;                                                  //0x1c
    struct _LIST_ENTRY RegionListHead;                                      //0x20
};
/* Used in */
// _KALPC_REGION

