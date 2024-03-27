#pragma once
/* ------------------ */

#include <_MI_VAD_EVENT_BLOCK.h>
#include <_KGATE.h>
#include <_MMADDRESS_LIST.h>
#include <_RTL_BITMAP_EX.h>
#include <_MMINPAGE_SUPPORT.h>
#include <_MI_LARGEPAGE_IMAGE_INFO.h>
#include <_ETHREAD.h>
#include <_MI_SUB64K_FREE_RANGES.h>

//0x40 bytes (sizeof)
struct _MI_VAD_EVENT_BLOCK
{
    struct _MI_VAD_EVENT_BLOCK* Next;                                       //0x0
    ULONG WaitReason;                                                       //0x8
    union
    {
        struct _KGATE Gate;                                                 //0x10
        struct _MMADDRESS_LIST SecureInfo;                                  //0x10
        struct _RTL_BITMAP_EX BitMap;                                       //0x10
        struct _MMINPAGE_SUPPORT* InPageSupport;                            //0x10
        struct _MI_LARGEPAGE_IMAGE_INFO LargePage;                          //0x10
        struct _ETHREAD* CreatingThread;                                    //0x10
        struct _MI_SUB64K_FREE_RANGES PebTeb;                               //0x10
    };
};
/* Used in */
// _MI_VAD_EVENT_BLOCK
// _MMVAD_SHORT

