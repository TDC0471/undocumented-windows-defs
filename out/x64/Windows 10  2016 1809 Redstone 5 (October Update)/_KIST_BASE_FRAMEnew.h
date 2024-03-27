#pragma once
/* ------------------ */

#include <_KPCR.h>
#include <_KIST_LINK_FRAME.h>

//0x20 bytes (sizeof)
struct _KIST_BASE_FRAME
{
    struct _KPCR* KernelGsBase;                                             //0x0
    struct _KIST_LINK_FRAME* IstStack;                                      //0x8
    ULONGLONG PreviousGsBase;                                               //0x10
    ULONGLONG PreviousCr3;                                                  //0x18
};
/* Used in */
// _KIST_LINK_FRAME

