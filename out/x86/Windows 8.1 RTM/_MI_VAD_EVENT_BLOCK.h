#pragma once
/* ------------------ */

#include <_MI_VAD_EVENT_BLOCK.h>
#include <_KGATE.h>
#include <_MMADDRESS_LIST.h>
#include <_RTL_BITMAP.h>
#include <_MMINPAGE_SUPPORT.h>
#include <_MI_PHYSMEM_BLOCK.h>
#include <_MI_LARGEPAGE_MEMORY_INFO.h>

//0x18 bytes (sizeof)
struct _MI_VAD_EVENT_BLOCK
{
    struct _MI_VAD_EVENT_BLOCK* Next;                                       //0x0
    ULONG WaitReason;                                                       //0x4
    union
    {
        struct _KGATE Gate;                                                 //0x8
        struct _MMADDRESS_LIST SecureInfo;                                  //0x8
        struct _RTL_BITMAP BitMap;                                          //0x8
        struct _MMINPAGE_SUPPORT* InPageSupport;                            //0x8
        struct _MI_PHYSMEM_BLOCK PhysicalMemory;                            //0x8
        struct _MI_LARGEPAGE_MEMORY_INFO* LargePage;                        //0x8
    };
};
/* Used in */
// _MI_VAD_EVENT_BLOCK
// _MMVAD_SHORT

