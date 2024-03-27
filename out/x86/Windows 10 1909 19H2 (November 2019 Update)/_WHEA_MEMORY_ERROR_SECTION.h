#pragma once
/* ------------------ */

#include <_WHEA_MEMORY_ERROR_SECTION_VALIDBITS.h>
#include <_WHEA_ERROR_STATUS.h>

//0x50 bytes (sizeof)
struct _WHEA_MEMORY_ERROR_SECTION
{
    union _WHEA_MEMORY_ERROR_SECTION_VALIDBITS ValidBits;                   //0x0
    union _WHEA_ERROR_STATUS ErrorStatus;                                   //0x8
    ULONGLONG PhysicalAddress;                                              //0x10
    ULONGLONG PhysicalAddressMask;                                          //0x18
    USHORT Node;                                                            //0x20
    USHORT Card;                                                            //0x22
    USHORT Module;                                                          //0x24
    USHORT Bank;                                                            //0x26
    USHORT Device;                                                          //0x28
    USHORT Row;                                                             //0x2a
    USHORT Column;                                                          //0x2c
    USHORT BitPosition;                                                     //0x2e
    ULONGLONG RequesterId;                                                  //0x30
    ULONGLONG ResponderId;                                                  //0x38
    ULONGLONG TargetId;                                                     //0x40
    UCHAR ErrorType;                                                        //0x48
    UCHAR Extended;                                                         //0x49
    USHORT RankNumber;                                                      //0x4a
    USHORT CardHandle;                                                      //0x4c
    USHORT ModuleHandle;                                                    //0x4e
};
