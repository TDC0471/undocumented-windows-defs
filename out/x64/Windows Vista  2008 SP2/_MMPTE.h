#pragma once
/* ------------------ */

#include <_MMPTE_HARDWARE.h>
#include <_MMPTE_HARDWARE_LARGEPAGE.h>
#include <_HARDWARE_PTE.h>
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
        struct _MMPTE_HARDWARE Hard;                                        //0x0
        struct _MMPTE_HARDWARE_LARGEPAGE HardLarge;                         //0x0
        struct _HARDWARE_PTE Flush;                                         //0x0
        struct _MMPTE_PROTOTYPE Proto;                                      //0x0
        struct _MMPTE_SOFTWARE Soft;                                        //0x0
        struct _MMPTE_TIMESTAMP TimeStamp;                                  //0x0
        struct _MMPTE_TRANSITION Trans;                                     //0x0
        struct _MMPTE_SUBSECTION Subsect;                                   //0x0
        struct _MMPTE_LIST List;                                            //0x0
    } u;                                                                    //0x0
};
/* Used in */
// _MI_PER_SESSION_PROTOS
// _MI_SPECIAL_POOL
// _MI_SYSTEM_PTE_TYPE
// _MMBANKED_SECTION
// _MMPFN
// _MMVAD
// _MMVAD_LONG
// _MM_PAGED_POOL_INFO
// _MM_SESSION_SPACE
// _MSUBSECTION
// _SEGMENT
// _SUBSECTION
