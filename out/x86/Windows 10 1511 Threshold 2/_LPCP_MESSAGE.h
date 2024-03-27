#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_SINGLE_LIST_ENTRY.h>
#include <_ETHREAD.h>
#include <_PORT_MESSAGE.h>

//0x30 bytes (sizeof)
struct _LPCP_MESSAGE
{
    union
    {
        struct _LIST_ENTRY Entry;                                           //0x0
        struct
        {
            struct _SINGLE_LIST_ENTRY FreeEntry;                            //0x0
            ULONG Reserved0;                                                //0x4
        };
    };
    VOID* SenderPort;                                                       //0x8
    struct _ETHREAD* RepliedToThread;                                       //0xc
    VOID* PortContext;                                                      //0x10
    struct _PORT_MESSAGE Request;                                           //0x18
};
