#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>

//0x50 bytes (sizeof)
struct _SEP_RM_LSA_CONNECTION_STATE
{
    VOID* LsaProcessHandle;                                                 //0x0
    VOID* LsaCommandPortHandle;                                             //0x8
    VOID* SepRmThreadHandle;                                                //0x10
    VOID* RmCommandPortHandle;                                              //0x18
    VOID* RmCommandServerPortHandle;                                        //0x20
    VOID* LsaCommandPortSectionHandle;                                      //0x28
    union _LARGE_INTEGER LsaCommandPortSectionSize;                         //0x30
    VOID* LsaViewPortMemory;                                                //0x38
    VOID* RmViewPortMemory;                                                 //0x40
    LONG LsaCommandPortMemoryDelta;                                         //0x48
    UCHAR LsaCommandPortActive;                                             //0x4c
};
/* Used in */
// _ESERVERSILO_GLOBALS

