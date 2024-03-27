#pragma once
/* ------------------ */


//0x50 bytes (sizeof)
struct _EPROCESS_VALUES
{
    ULONGLONG KernelTime;                                                   //0x0
    ULONGLONG UserTime;                                                     //0x8
    ULONGLONG CycleTime;                                                    //0x10
    ULONGLONG ContextSwitches;                                              //0x18
    LONGLONG ReadOperationCount;                                            //0x20
    LONGLONG WriteOperationCount;                                           //0x28
    LONGLONG OtherOperationCount;                                           //0x30
    LONGLONG ReadTransferCount;                                             //0x38
    LONGLONG WriteTransferCount;                                            //0x40
    LONGLONG OtherTransferCount;                                            //0x48
};
/* Used in */
// _EJOB

