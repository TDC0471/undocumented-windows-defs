#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>

//0x50 bytes (sizeof)
struct _LOADER_PARAMETER_CI_EXTENSION
{
    ULONG CodeIntegrityOptions;                                             //0x0
    ULONG UpgradeInProgress:1;                                              //0x4
    ULONG IsWinPE:1;                                                        //0x4
    ULONG CustomKernelSignersAllowed:1;                                     //0x4
    ULONG Reserved:29;                                                      //0x4
    union _LARGE_INTEGER WhqlEnforcementDate;                               //0x8
    ULONG RevocationListOffset;                                             //0x10
    ULONG RevocationListSize;                                               //0x14
    ULONG CodeIntegrityPolicyOffset;                                        //0x18
    ULONG CodeIntegrityPolicySize;                                          //0x1c
    ULONG CodeIntegrityPolicyHashOffset;                                    //0x20
    ULONG CodeIntegrityPolicyHashSize;                                      //0x24
    ULONG CodeIntegrityPolicyOriginalHashOffset;                            //0x28
    ULONG CodeIntegrityPolicyOriginalHashSize;                              //0x2c
    LONG WeakCryptoPolicyLoadStatus;                                        //0x30
    ULONG WeakCryptoPolicyOffset;                                           //0x34
    ULONG WeakCryptoPolicySize;                                             //0x38
    ULONG SecureBootPolicyOffset;                                           //0x3c
    ULONG SecureBootPolicySize;                                             //0x40
    ULONG Reserved2;                                                        //0x44
    UCHAR SerializedData[1];                                                //0x48
};
/* Used in */
// _LOADER_PARAMETER_EXTENSION

