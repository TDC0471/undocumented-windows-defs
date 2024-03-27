#pragma once
/* ------------------ */

#include <_MI_VAD_EVENT_BLOCK.h>
#include <_KGATE.h>
#include <_MMADDRESS_LIST.h>
#include <_RTL_BITMAP.h>
#include <_MMINPAGE_SUPPORT.h>
#include <_MI_LARGEPAGE_VAD_INFO.h>
#include <_MI_PHYSICAL_VIEW.h>
#include <_ETHREAD.h>
#include <_MI_SUB64K_FREE_RANGES.h>
#include <_MMVAD_SHORT.h>

//0x28 bytes (sizeof)
struct _MI_VAD_EVENT_BLOCK
{
    struct _MI_VAD_EVENT_BLOCK* Next;                                       //0x0
    union
    {
        struct _KGATE Gate;                                                 //0x4
        struct _MMADDRESS_LIST SecureInfo;                                  //0x4
        struct _RTL_BITMAP BitMap;                                          //0x4
        struct _MMINPAGE_SUPPORT* InPageSupport;                            //0x4
        struct _MI_LARGEPAGE_VAD_INFO LargePage;                            //0x4
        struct _MI_PHYSICAL_VIEW AweView;                                   //0x4
        struct _ETHREAD* CreatingThread;                                    //0x4
        struct _MI_SUB64K_FREE_RANGES PebTeb;                               //0x4
        struct _MMVAD_SHORT* PlaceholderVad;                                //0x4
    };
    ULONG WaitReason;                                                       //0x24
};
/* Used in */
// _MI_VAD_EVENT_BLOCK
// _MMVAD_SHORT

