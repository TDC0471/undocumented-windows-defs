#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>

//0x30 bytes (sizeof)
struct _SEP_RM_LSA_CONNECTION_STATE
{
    VOID* LsaProcessHandle;                                                 //0x0
    VOID* LsaCommandPortHandle;                                             //0x4
    VOID* SepRmThreadHandle;                                                //0x8
    VOID* RmCommandPortHandle;                                              //0xc
    VOID* RmCommandServerPortHandle;                                        //0x10
    VOID* LsaCommandPortSectionHandle;                                      //0x14
    union _LARGE_INTEGER LsaCommandPortSectionSize;                         //0x18
    VOID* LsaViewPortMemory;                                                //0x20
    VOID* RmViewPortMemory;                                                 //0x24
    LONG LsaCommandPortMemoryDelta;                                         //0x28
    UCHAR LsaCommandPortActive;                                             //0x2c
};
/* Used in */
// _ESERVERSILO_GLOBALS

