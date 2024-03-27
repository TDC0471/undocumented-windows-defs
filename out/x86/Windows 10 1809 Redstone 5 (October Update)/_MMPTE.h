#pragma once
/* ------------------ */

#include <_MMPTE_HIGHLOW.h>
#include <_MMPTE_HARDWARE.h>
#include <_MMPTE_PROTOTYPE.h>
#include <_MMPTE_SOFTWARE.h>
#include <_MMPTE_TIMESTAMP.h>
#include <_MMPTE_TRANSITION.h>
#include <_MMPTE_SUBSECTION.h>
#include <_MMPTE_LIST.h>

//0x8 bytes (sizeof)
struct _MMPTE
{
    union
    {
        ULONGLONG Long;                                                     //0x0
        volatile ULONGLONG VolatileLong;                                    //0x0
        struct _MMPTE_HIGHLOW HighLow;                                      //0x0
        struct _MMPTE_HARDWARE Hard;                                        //0x0
        struct _MMPTE_PROTOTYPE Proto;                                      //0x0
        struct _MMPTE_SOFTWARE Soft;                                        //0x0
        struct _MMPTE_TIMESTAMP TimeStamp;                                  //0x0
        struct _MMPTE_TRANSITION Trans;                                     //0x0
        struct _MMPTE_SUBSECTION Subsect;                                   //0x0
        struct _MMPTE_LIST List;                                            //0x0
    } u;                                                                    //0x0
};
/* Used in */
// _MI_DEBUGGER_STATE
// _MI_DRIVER_VA
// _MI_PER_SESSION_PROTOS
// _MI_PROCESS_STATE
// _MI_PTE_CHAIN_HEAD
// _MI_SHUTDOWN_STATE
// _MI_SYSTEM_PTE_TYPE
// _MMCLONE_BLOCK
// _MMINPAGE_SUPPORT
// _MMPFN
// _MMVAD
// _MMWSL_INSTANCE
// _MM_PAGED_POOL_INFO
// _MM_SESSION_SPACE
// _PAE_ENTRY
// _SEGMENT
// _SUBSECTION

