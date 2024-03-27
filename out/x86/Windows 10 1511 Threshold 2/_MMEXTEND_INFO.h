#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _MMEXTEND_INFO
{
    ULONGLONG CommittedSize;                                                //0x0
    ULONG ReferenceCount;                                                   //0x8
};
/* Used in */
// _MAPPED_FILE_SEGMENT
// _MMVAD
// _SEGMENT

