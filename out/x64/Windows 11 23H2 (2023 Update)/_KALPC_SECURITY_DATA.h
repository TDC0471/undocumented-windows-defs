#pragma once
/* ------------------ */

#include <_ALPC_HANDLE_TABLE.h>
#include <_EPROCESS.h>
#include <_ALPC_PORT.h>
#include <_SECURITY_CLIENT_CONTEXT.h>

//0x70 bytes (sizeof)
struct _KALPC_SECURITY_DATA
{
    struct _ALPC_HANDLE_TABLE* HandleTable;                                 //0x0
    VOID* ContextHandle;                                                    //0x8
    struct _EPROCESS* OwningProcess;                                        //0x10
    struct _ALPC_PORT* OwnerPort;                                           //0x18
    struct _SECURITY_CLIENT_CONTEXT DynamicSecurity;                        //0x20
    union
    {
        struct
        {
            ULONG Revoked:1;                                                //0x68
            ULONG Impersonated:1;                                           //0x68
        } s1;                                                               //0x68
    } u1;                                                                   //0x68
};
/* Used in */
// _KALPC_MESSAGE_ATTRIBUTES

