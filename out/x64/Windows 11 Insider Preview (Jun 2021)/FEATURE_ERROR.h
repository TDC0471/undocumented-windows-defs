#pragma once
/* ------------------ */


//0x68 bytes (sizeof)
struct FEATURE_ERROR
{
    HRESULT hr;                                                             //0x0
    USHORT lineNumber;                                                      //0x4
    CHAR* file;                                                             //0x8
    CHAR* process;                                                          //0x10
    CHAR* modulePath;                                                       //0x18
    ULONG callerReturnAddressOffset;                                        //0x20
    CHAR* callerModule;                                                     //0x28
    CHAR* message;                                                          //0x30
    USHORT originLineNumber;                                                //0x38
    CHAR* originFile;                                                       //0x40
    CHAR* originModule;                                                     //0x48
    ULONG originCallerReturnAddressOffset;                                  //0x50
    CHAR* originCallerModule;                                               //0x58
    CHAR* originName;                                                       //0x60
};
