#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _INTERRUPT_HT_INTR_INFO
{
    union
    {
        struct
        {
            ULONG Mask:1;                                                   //0x0
            ULONG Polarity:1;                                               //0x0
            ULONG MessageType:3;                                            //0x0
            ULONG RequestEOI:1;                                             //0x0
            ULONG DestinationMode:1;                                        //0x0
            ULONG MessageType3:1;                                           //0x0
            ULONG Destination:8;                                            //0x0
            ULONG Vector:8;                                                 //0x0
            ULONG ExtendedAddress:8;                                        //0x0
        } bits;                                                             //0x0
        ULONG AsULONG;                                                      //0x0
    } LowPart;                                                              //0x0
    union
    {
        struct
        {
            ULONG ExtendedDestination:24;                                   //0x4
            ULONG Reserved:6;                                               //0x4
            ULONG PassPW:1;                                                 //0x4
            ULONG WaitingForEOI:1;                                          //0x4
        } bits;                                                             //0x4
        ULONG AsULONG;                                                      //0x4
    } HighPart;                                                             //0x4
};
/* Used in */
// _INTERRUPT_VECTOR_DATA

