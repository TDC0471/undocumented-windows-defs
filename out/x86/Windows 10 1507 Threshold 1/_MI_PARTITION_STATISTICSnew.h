#pragma once
/* ------------------ */


//0x50 bytes (sizeof)
struct _MI_PARTITION_STATISTICS
{
    ULONG DeleteYield;                                                      //0x0
    ULONG DeleteBad;                                                        //0x4
    ULONG DeleteTrulyBad;                                                   //0x8
    ULONG DeleteLargePage;                                                  //0xc
    ULONG DeleteLargePageRetry;                                             //0x10
    ULONG DeleteZeroFree;                                                   //0x14
    ULONG DeleteTransition;                                                 //0x18
    ULONG DeleteStandbyReferenced;                                          //0x1c
    ULONG DeleteStandbyRelinkFailed;                                        //0x20
    ULONG DeleteStandbySharedPagefile;                                      //0x24
    ULONG DeleteStandbySharedFile;                                          //0x28
    ULONG DeleteModifiedReferenced;                                         //0x2c
    ULONG DeleteModified;                                                   //0x30
    ULONG DeleteModifiedNoWrite;                                            //0x34
    ULONG DeleteModifiedSharedPagefile;                                     //0x38
    ULONG DeleteModifiedSharedFile;                                         //0x3c
    ULONG DeleteActiveSharedPagefile1;                                      //0x40
    ULONG DeleteActiveSharedPagefile2;                                      //0x44
    ULONG DeleteActiveSharedFile;                                           //0x48
    ULONG DeleteWriteDelay;                                                 //0x4c
};
/* Used in */
// _MI_PARTITION_CORE

