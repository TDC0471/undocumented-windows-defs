#pragma once
/* ------------------ */


//0x30 bytes (sizeof)
struct _SECTION_IMAGE_INFORMATION
{
    VOID* TransferAddress;                                                  //0x0
    ULONG ZeroBits;                                                         //0x4
    ULONG MaximumStackSize;                                                 //0x8
    ULONG CommittedStackSize;                                               //0xc
    ULONG SubSystemType;                                                    //0x10
    union
    {
        struct
        {
            USHORT SubSystemMinorVersion;                                   //0x14
            USHORT SubSystemMajorVersion;                                   //0x16
        };
        ULONG SubSystemVersion;                                             //0x14
    };
    union
    {
        struct
        {
            USHORT MajorOperatingSystemVersion;                             //0x18
            USHORT MinorOperatingSystemVersion;                             //0x1a
        };
        ULONG OperatingSystemVersion;                                       //0x18
    };
    USHORT ImageCharacteristics;                                            //0x1c
    USHORT DllCharacteristics;                                              //0x1e
    USHORT Machine;                                                         //0x20
    UCHAR ImageContainsCode;                                                //0x22
    union
    {
        UCHAR ImageFlags;                                                   //0x23
        struct
        {
            UCHAR ComPlusNativeReady:1;                                     //0x23
            UCHAR ComPlusILOnly:1;                                          //0x23
            UCHAR ImageDynamicallyRelocated:1;                              //0x23
            UCHAR ImageMappedFlat:1;                                        //0x23
            UCHAR BaseBelow4gb:1;                                           //0x23
            UCHAR ComPlusPrefer32bit:1;                                     //0x23
            UCHAR Reserved:2;                                               //0x23
        };
    };
    ULONG LoaderFlags;                                                      //0x24
    ULONG ImageFileSize;                                                    //0x28
    ULONG CheckSum;                                                         //0x2c
};
/* Used in */
// _MI_SECTION_IMAGE_INFORMATION

