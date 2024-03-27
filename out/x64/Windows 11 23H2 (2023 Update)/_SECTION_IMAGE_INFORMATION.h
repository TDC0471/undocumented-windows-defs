#pragma once
/* ------------------ */


//0x40 bytes (sizeof)
struct _SECTION_IMAGE_INFORMATION
{
    VOID* TransferAddress;                                                  //0x0
    ULONG ZeroBits;                                                         //0x8
    ULONGLONG MaximumStackSize;                                             //0x10
    ULONGLONG CommittedStackSize;                                           //0x18
    ULONG SubSystemType;                                                    //0x20
    union
    {
        struct
        {
            USHORT SubSystemMinorVersion;                                   //0x24
            USHORT SubSystemMajorVersion;                                   //0x26
        };
        ULONG SubSystemVersion;                                             //0x24
    };
    union
    {
        struct
        {
            USHORT MajorOperatingSystemVersion;                             //0x28
            USHORT MinorOperatingSystemVersion;                             //0x2a
        };
        ULONG OperatingSystemVersion;                                       //0x28
    };
    USHORT ImageCharacteristics;                                            //0x2c
    USHORT DllCharacteristics;                                              //0x2e
    USHORT Machine;                                                         //0x30
    UCHAR ImageContainsCode;                                                //0x32
    union
    {
        UCHAR ImageFlags;                                                   //0x33
        struct
        {
            UCHAR ComPlusNativeReady:1;                                     //0x33
            UCHAR ComPlusILOnly:1;                                          //0x33
            UCHAR ImageDynamicallyRelocated:1;                              //0x33
            UCHAR ImageMappedFlat:1;                                        //0x33
            UCHAR BaseBelow4gb:1;                                           //0x33
            UCHAR ComPlusPrefer32bit:1;                                     //0x33
            UCHAR Reserved:2;                                               //0x33
        };
    };
    ULONG LoaderFlags;                                                      //0x34
    ULONG ImageFileSize;                                                    //0x38
    ULONG CheckSum;                                                         //0x3c
};
/* Used in */
// _MI_SECTION_IMAGE_INFORMATION

