#pragma once
/* ------------------ */

#include <_ALPC_HANDLE_TABLE.h>
#include <_EPROCESS.h>
#include <_ALPC_PORT.h>
#include <_LIST_ENTRY.h>

//0x48 bytes (sizeof)
struct _KALPC_SECTION
{
    VOID* SectionObject;                                                    //0x0
    ULONGLONG Size;                                                         //0x8
    struct _ALPC_HANDLE_TABLE* HandleTable;                                 //0x10
    VOID* SectionHandle;                                                    //0x18
    struct _EPROCESS* OwnerProcess;                                         //0x20
    struct _ALPC_PORT* OwnerPort;                                           //0x28
    union
    {
        struct
        {
            ULONG Internal:1;                                               //0x30
            ULONG Secure:1;                                                 //0x30
        } s1;                                                               //0x30
    } u1;                                                                   //0x30
    ULONG NumberOfRegions;                                                  //0x34
    struct _LIST_ENTRY RegionListHead;                                      //0x38
};
/* Used in */
// _KALPC_REGION

