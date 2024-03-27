#pragma once
/* ------------------ */

#include <INTERRUPT_CONNECTION_TYPE.h>
#include <_KINTERRUPT_POLARITY.h>
#include <_KINTERRUPT_MODE.h>
#include <_GROUP_AFFINITY.h>
#include <_INTERRUPT_REMAPPING_INFO.h>
#include <_LARGE_INTEGER.h>
#include <_INTERRUPT_HT_INTR_INFO.h>
#include <HAL_APIC_DESTINATION_MODE.h>

//0x40 bytes (sizeof)
struct _INTERRUPT_VECTOR_DATA
{
    enum INTERRUPT_CONNECTION_TYPE Type;                                    //0x0
    ULONG Vector;                                                           //0x4
    UCHAR Irql;                                                             //0x8
    enum _KINTERRUPT_POLARITY Polarity;                                     //0xc
    enum _KINTERRUPT_MODE Mode;                                             //0x10
    struct _GROUP_AFFINITY TargetProcessors;                                //0x14
    struct _INTERRUPT_REMAPPING_INFO IntRemapInfo;                          //0x20
    union
    {
        struct
        {
            ULONG Gsiv;                                                     //0x30
            ULONG WakeInterrupt:1;                                          //0x34
            ULONG ReservedFlags:31;                                         //0x34
        } ControllerInput;                                                  //0x30
        struct
        {
            union _LARGE_INTEGER Address;                                   //0x30
            ULONG DataPayload;                                              //0x38
        } XapicMessage;                                                     //0x30
        struct
        {
            struct _INTERRUPT_HT_INTR_INFO IntrInfo;                        //0x30
        } Hypertransport;                                                   //0x30
        struct
        {
            union _LARGE_INTEGER Address;                                   //0x30
            ULONG DataPayload;                                              //0x38
        } GenericMessage;                                                   //0x30
        struct
        {
            enum HAL_APIC_DESTINATION_MODE DestinationMode;                 //0x30
        } MessageRequest;                                                   //0x30
    };
};
/* Used in */
// _INTERRUPT_CONNECTION_DATA

