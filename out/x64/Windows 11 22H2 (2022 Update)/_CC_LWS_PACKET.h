#pragma once
/* ------------------ */

#include <_CC_LWS_PACKET_TYPE.h>
#include <_CC_PARTITION.h>
#include <_PRIVATE_VOLUME_CACHEMAP.h>

//0x10 bytes (sizeof)
struct _CC_LWS_PACKET
{
    enum _CC_LWS_PACKET_TYPE Type;                                          //0x0
    UCHAR Active;                                                           //0x4
    union
    {
        struct _CC_PARTITION* Partition;                                    //0x8
        struct _PRIVATE_VOLUME_CACHEMAP* PrivateVolumeCacheMap;             //0x8
    } Overlay;                                                              //0x8
};
/* Used in */
// _CC_PARTITION
// _PRIVATE_VOLUME_CACHEMAP

