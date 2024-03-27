#pragma once
/* ------------------ */


//0x40 bytes (sizeof)
struct _CPTABLEINFO
{
    USHORT CodePage;                                                        //0x0
    USHORT MaximumCharacterSize;                                            //0x2
    USHORT DefaultChar;                                                     //0x4
    USHORT UniDefaultChar;                                                  //0x6
    USHORT TransDefaultChar;                                                //0x8
    USHORT TransUniDefaultChar;                                             //0xa
    USHORT DBCSCodePage;                                                    //0xc
    UCHAR LeadByte[12];                                                     //0xe
    WCHAR* MultiByteTable;                                                  //0x20
    VOID* WideCharTable;                                                    //0x28
    WCHAR* DBCSRanges;                                                      //0x30
    WCHAR* DBCSOffsets;                                                     //0x38
};
/* Used in */
// _RTL_NLS_STATE

