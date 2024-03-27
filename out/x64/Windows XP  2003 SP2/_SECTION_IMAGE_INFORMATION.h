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
    ULONG GpValue;                                                          //0x28
    USHORT ImageCharacteristics;                                            //0x2c
    USHORT DllCharacteristics;                                              //0x2e
    USHORT Machine;                                                         //0x30
    UCHAR ImageContainsCode;                                                //0x32
    UCHAR Spare1;                                                           //0x33
    ULONG LoaderFlags;                                                      //0x34
    ULONG ImageFileSize;                                                    //0x38
    ULONG Reserved[1];                                                      //0x3c
};
/* Used in */
// _SEGMENT

