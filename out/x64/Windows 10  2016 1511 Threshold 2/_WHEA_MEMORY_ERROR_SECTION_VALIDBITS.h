#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
union _WHEA_MEMORY_ERROR_SECTION_VALIDBITS
{
    ULONGLONG ErrorStatus:1;                                                //0x0
    ULONGLONG PhysicalAddress:1;                                            //0x0
    ULONGLONG PhysicalAddressMask:1;                                        //0x0
    ULONGLONG Node:1;                                                       //0x0
    ULONGLONG Card:1;                                                       //0x0
    ULONGLONG Module:1;                                                     //0x0
    ULONGLONG Bank:1;                                                       //0x0
    ULONGLONG Device:1;                                                     //0x0
    ULONGLONG Row:1;                                                        //0x0
    ULONGLONG Column:1;                                                     //0x0
    ULONGLONG BitPosition:1;                                                //0x0
    ULONGLONG RequesterId:1;                                                //0x0
    ULONGLONG ResponderId:1;                                                //0x0
    ULONGLONG TargetId:1;                                                   //0x0
    ULONGLONG ErrorType:1;                                                  //0x0
    ULONGLONG Reserved:49;                                                  //0x0
    ULONGLONG ValidBits;                                                    //0x0
};
/* Used in */
// _WHEA_MEMORY_ERROR_SECTION

