#pragma once
/* ------------------ */

#include <_MMPTE.h>

//0x20 bytes (sizeof)
struct _MMBANKED_SECTION
{
    ULONG BasePhysicalPage;                                                 //0x0
    struct _MMPTE* BasedPte;                                                //0x4
    ULONG BankSize;                                                         //0x8
    ULONG BankShift;                                                        //0xc
    VOID (*BankedRoutine)(ULONG arg1, ULONG arg2, VOID* arg3);              //0x10
    VOID* Context;                                                          //0x14
    struct _MMPTE* CurrentMappedPte;                                        //0x18
    struct _MMPTE BankTemplate[1];                                          //0x1c
};
/* Used in */
// _MMVAD_LONG

