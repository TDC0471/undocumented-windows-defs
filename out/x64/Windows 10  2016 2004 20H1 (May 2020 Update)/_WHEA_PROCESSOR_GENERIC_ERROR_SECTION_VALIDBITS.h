#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
union _WHEA_PROCESSOR_GENERIC_ERROR_SECTION_VALIDBITS
{
    ULONGLONG ProcessorType:1;                                              //0x0
    ULONGLONG InstructionSet:1;                                             //0x0
    ULONGLONG ErrorType:1;                                                  //0x0
    ULONGLONG Operation:1;                                                  //0x0
    ULONGLONG Flags:1;                                                      //0x0
    ULONGLONG Level:1;                                                      //0x0
    ULONGLONG CPUVersion:1;                                                 //0x0
    ULONGLONG CPUBrandString:1;                                             //0x0
    ULONGLONG ProcessorId:1;                                                //0x0
    ULONGLONG TargetAddress:1;                                              //0x0
    ULONGLONG RequesterId:1;                                                //0x0
    ULONGLONG ResponderId:1;                                                //0x0
    ULONGLONG InstructionPointer:1;                                         //0x0
    ULONGLONG Reserved:51;                                                  //0x0
    ULONGLONG ValidBits;                                                    //0x0
};
/* Used in */
// _WHEA_PROCESSOR_GENERIC_ERROR_SECTION

