#pragma once
/* ------------------ */


//0x38 bytes (sizeof)
struct FEATURE_ERROR
{
    HRESULT hr;                                                             //0x0
    USHORT lineNumber;                                                      //0x4
    CHAR* file;                                                             //0x8
    CHAR* process;                                                          //0xc
    CHAR* modulePath;                                                       //0x10
    ULONG callerReturnAddressOffset;                                        //0x14
    CHAR* callerModule;                                                     //0x18
    CHAR* message;                                                          //0x1c
    USHORT originLineNumber;                                                //0x20
    CHAR* originFile;                                                       //0x24
    CHAR* originModule;                                                     //0x28
    ULONG originCallerReturnAddressOffset;                                  //0x2c
    CHAR* originCallerModule;                                               //0x30
    CHAR* originName;                                                       //0x34
};
