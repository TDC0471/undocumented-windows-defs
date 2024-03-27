#pragma once
/* ------------------ */

#include <_WHEA_ERROR_SEVERITY.h>
#include <_LARGE_INTEGER.h>
#include <_GUID.h>
#include <_WHEA_PERSISTENCE_INFO.h>

//0x88 bytes (sizeof)
struct _WHEA_ERROR_RECORD_HEADER
{
    ULONG Signature;                                                        //0x0
    USHORT Revision;                                                        //0x4
    USHORT Reserved1;                                                       //0x6
    USHORT Reserved2;                                                       //0x8
    USHORT SectionCount;                                                    //0xa
    enum _WHEA_ERROR_SEVERITY Severity;                                     //0xc
    ULONG ValidationBits;                                                   //0x10
    ULONG Length;                                                           //0x14
    union _LARGE_INTEGER Timestamp;                                         //0x18
    struct _GUID PlatformId;                                                //0x20
    struct _GUID PartitionId;                                               //0x30
    struct _GUID CreatorId;                                                 //0x40
    struct _GUID NotifyType;                                                //0x50
    ULONGLONG RecordId;                                                     //0x60
    ULONG Flags;                                                            //0x68
    struct _WHEA_PERSISTENCE_INFO PersistenceInfo;                          //0x70
    UCHAR Reserved3[12];                                                    //0x78
};
/* Used in */
// _WHEA_ERROR_RECORD

