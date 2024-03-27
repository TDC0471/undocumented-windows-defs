#pragma once
/* ------------------ */

#include <_WHEA_REVISION.h>
#include <_WHEA_ERROR_SEVERITY.h>
#include <_WHEA_ERROR_RECORD_HEADER_VALIDBITS.h>
#include <_WHEA_TIMESTAMP.h>
#include <_GUID.h>
#include <_WHEA_ERROR_RECORD_HEADER_FLAGS.h>
#include <_WHEA_PERSISTENCE_INFO.h>

//0x80 bytes (sizeof)
struct _WHEA_ERROR_RECORD_HEADER
{
    ULONG Signature;                                                        //0x0
    union _WHEA_REVISION Revision;                                          //0x4
    ULONG SignatureEnd;                                                     //0x6
    USHORT SectionCount;                                                    //0xa
    enum _WHEA_ERROR_SEVERITY Severity;                                     //0xc
    union _WHEA_ERROR_RECORD_HEADER_VALIDBITS ValidBits;                    //0x10
    ULONG Length;                                                           //0x14
    union _WHEA_TIMESTAMP Timestamp;                                        //0x18
    struct _GUID PlatformId;                                                //0x20
    struct _GUID PartitionId;                                               //0x30
    struct _GUID CreatorId;                                                 //0x40
    struct _GUID NotifyType;                                                //0x50
    ULONGLONG RecordId;                                                     //0x60
    union _WHEA_ERROR_RECORD_HEADER_FLAGS Flags;                            //0x68
    union _WHEA_PERSISTENCE_INFO PersistenceInfo;                           //0x6c
    union
    {
        struct
        {
            ULONG OsBuildNumber;                                            //0x74
            UCHAR Reserved2[8];                                             //0x78
        };
        UCHAR Reserved[12];                                                 //0x74
    };
};
/* Used in */
// _WHEA_ERROR_RECORD

