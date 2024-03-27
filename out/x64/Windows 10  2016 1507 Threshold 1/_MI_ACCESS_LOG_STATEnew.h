#pragma once
/* ------------------ */

#include <_MM_PAGE_ACCESS_INFO_HEADER.h>
#include <_WORK_QUEUE_ITEM.h>

//0x80 bytes (sizeof)
struct _MI_ACCESS_LOG_STATE
{
    struct _MM_PAGE_ACCESS_INFO_HEADER* volatile CcAccessLog;               //0x0
    ULONG Enabled;                                                          //0x8
    struct _WORK_QUEUE_ITEM DisableAccessLogging;                           //0x10
    ULONG MinLoggingPriority;                                               //0x30
    ULONGLONG AccessLoggingLock;                                            //0x40
};
/* Used in */
// _MI_SYSTEM_INFORMATION

