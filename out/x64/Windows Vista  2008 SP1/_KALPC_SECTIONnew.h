#pragma once
/* ------------------ */

#include <_ALPC_HANDLE_TABLE.h>
#include <_EPROCESS.h>
#include <_ALPC_PORT.h>
#include <_LIST_ENTRY.h>

//0x50 bytes (sizeof)
struct _KALPC_SECTION
{
    union
    {
        struct
        {
            ULONG Internal:1;                                               //0x0
            ULONG Secure:1;                                                 //0x0
        } s1;                                                               //0x0
    } u1;                                                                   //0x0
    VOID* SectionObject;                                                    //0x8
    ULONGLONG Size;                                                         //0x10
    struct _ALPC_HANDLE_TABLE* HandleTable;                                 //0x18
    VOID* SectionHandle;                                                    //0x20
    struct _EPROCESS* OwnerProcess;                                         //0x28
    struct _ALPC_PORT* OwnerPort;                                           //0x30
    ULONG NumberOfRegions;                                                  //0x38
    struct _LIST_ENTRY RegionListHead;                                      //0x40
};
/* Used in */
// _KALPC_REGION

