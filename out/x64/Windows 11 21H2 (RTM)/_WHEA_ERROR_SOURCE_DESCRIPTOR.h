#pragma once
/* ------------------ */

#include <_WHEA_ERROR_SOURCE_TYPE.h>
#include <_WHEA_ERROR_SOURCE_STATE.h>
#include <_WHEA_XPF_MCE_DESCRIPTOR.h>
#include <_WHEA_XPF_CMC_DESCRIPTOR.h>
#include <_WHEA_XPF_NMI_DESCRIPTOR.h>
#include <_WHEA_IPF_MCA_DESCRIPTOR.h>
#include <_WHEA_IPF_CMC_DESCRIPTOR.h>
#include <_WHEA_IPF_CPE_DESCRIPTOR.h>
#include <_WHEA_AER_ROOTPORT_DESCRIPTOR.h>
#include <_WHEA_AER_ENDPOINT_DESCRIPTOR.h>
#include <_WHEA_AER_BRIDGE_DESCRIPTOR.h>
#include <_WHEA_GENERIC_ERROR_DESCRIPTOR.h>
#include <_WHEA_GENERIC_ERROR_DESCRIPTOR_V2.h>
#include <_WHEA_DEVICE_DRIVER_DESCRIPTOR.h>

//0x3cc bytes (sizeof)
struct _WHEA_ERROR_SOURCE_DESCRIPTOR
{
    ULONG Length;                                                           //0x0
    ULONG Version;                                                          //0x4
    enum _WHEA_ERROR_SOURCE_TYPE Type;                                      //0x8
    enum _WHEA_ERROR_SOURCE_STATE State;                                    //0xc
    ULONG MaxRawDataLength;                                                 //0x10
    ULONG NumRecordsToPreallocate;                                          //0x14
    ULONG MaxSectionsPerRecord;                                             //0x18
    ULONG ErrorSourceId;                                                    //0x1c
    ULONG PlatformErrorSourceId;                                            //0x20
    ULONG Flags;                                                            //0x24
    union
    {
        struct _WHEA_XPF_MCE_DESCRIPTOR XpfMceDescriptor;                   //0x28
        struct _WHEA_XPF_CMC_DESCRIPTOR XpfCmcDescriptor;                   //0x28
        struct _WHEA_XPF_NMI_DESCRIPTOR XpfNmiDescriptor;                   //0x28
        struct _WHEA_IPF_MCA_DESCRIPTOR IpfMcaDescriptor;                   //0x28
        struct _WHEA_IPF_CMC_DESCRIPTOR IpfCmcDescriptor;                   //0x28
        struct _WHEA_IPF_CPE_DESCRIPTOR IpfCpeDescriptor;                   //0x28
        struct _WHEA_AER_ROOTPORT_DESCRIPTOR AerRootportDescriptor;         //0x28
        struct _WHEA_AER_ENDPOINT_DESCRIPTOR AerEndpointDescriptor;         //0x28
        struct _WHEA_AER_BRIDGE_DESCRIPTOR AerBridgeDescriptor;             //0x28
        struct _WHEA_GENERIC_ERROR_DESCRIPTOR GenErrDescriptor;             //0x28
        struct _WHEA_GENERIC_ERROR_DESCRIPTOR_V2 GenErrDescriptorV2;        //0x28
        struct _WHEA_DEVICE_DRIVER_DESCRIPTOR DeviceDriverDescriptor;       //0x28
    } Info;                                                                 //0x28
};
/* Used in */
// _WHEAP_ERROR_SOURCE

