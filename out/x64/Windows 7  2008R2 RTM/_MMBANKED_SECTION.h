#pragma once
/* ------------------ */

#include <_MMPTE.h>

//0x38 bytes (sizeof)
struct _MMBANKED_SECTION
{
    ULONGLONG BasePhysicalPage;                                             //0x0
    struct _MMPTE* BasedPte;                                                //0x8
    ULONG BankSize;                                                         //0x10
    ULONG BankShift;                                                        //0x14
    VOID (*BankedRoutine)(ULONG arg1, ULONG arg2, VOID* arg3);              //0x18
    VOID* Context;                                                          //0x20
    struct _MMPTE* CurrentMappedPte;                                        //0x28
    struct _MMPTE BankTemplate[1];                                          //0x30
};
/* Used in */
// _MMVAD_LONG

