#pragma once
/* ------------------ */


//0x200 bytes (sizeof)
struct _MI_RESAVAIL_TRACKER
{
    ULONG AllocateKernelStack;                                              //0x0
    ULONG AllocateGrowKernelStack;                                          //0x4
    ULONG FreeKernelStack;                                                  //0x8
    ULONG FreeKernelStackError;                                             //0xc
    ULONG FreeGrowKernelStackError;                                         //0x10
    ULONG AllocateCreateProcess;                                            //0x14
    ULONG FreeCreateProcessError;                                           //0x18
    ULONG FreeDeleteProcess;                                                //0x1c
    ULONG FreeCleanProcess;                                                 //0x20
    ULONG FreeCleanProcessError;                                            //0x24
    ULONG AllocateWsIncrease;                                               //0x28
    ULONG FreeWsIncreaseError;                                              //0x2c
    ULONG FreeWsIncreaseErrorMax;                                           //0x30
    ULONG FreeWsDecrease;                                                   //0x34
    ULONG AllocateWorkingSetPage;                                           //0x38
    ULONG FreeWorkingSetPageError;                                          //0x3c
    ULONG FreeDeletePteRange;                                               //0x40
    ULONG AllocatePageTablesForProcessMetadata;                             //0x44
    ULONG AllocatePageTablesForSystem;                                      //0x48
    ULONG FreePageTablesExcess;                                             //0x4c
    ULONG FreeSystemVaPageTables;                                           //0x50
    ULONG FreeSessionVaPageTables;                                          //0x54
    ULONG AllocateCreateSession;                                            //0x58
    ULONG FreeSessionWsDereference;                                         //0x5c
    ULONG FreeSessionDereference;                                           //0x60
    ULONG AllocateLockedSessionImage;                                       //0x64
    ULONG FreeLockedSessionImage;                                           //0x68
    ULONG FreeSessionImageConversion;                                       //0x6c
    ULONG AllocateWsAdjustPageTable;                                        //0x70
    ULONG FreeWsAdjustPageTable;                                            //0x74
    ULONG FreeWsAdjustPageTableError;                                       //0x78
    ULONG AllocateNoLowMemory;                                              //0x7c
    ULONG AllocatePagedPoolLockedDown;                                      //0x80
    ULONG FreePagedPoolLockedDown;                                          //0x84
    ULONG AllocateSystemBitmaps;                                            //0x88
    ULONG FreeSystemBitmapsError;                                           //0x8c
    ULONG AllocateForMdl;                                                   //0x90
    ULONG FreeFromMdl;                                                      //0x94
    ULONG AllocateForMdlPartition;                                          //0x98
    ULONG FreeFromMdlPartition;                                             //0x9c
    ULONG FreeMdlExcess;                                                    //0xa0
    ULONG AllocateExpansionNonPagedPool;                                    //0xa4
    ULONG FreeExpansionNonPagedPool;                                        //0xa8
    ULONG AllocateVad;                                                      //0xac
    ULONG RemoveVad;                                                        //0xb0
    ULONG FreeVad;                                                          //0xb4
    ULONG AllocateContiguous;                                               //0xb8
    ULONG FreeContiguousPages;                                              //0xbc
    ULONG FreeContiguousError;                                              //0xc0
    ULONG FreeLargePageMemory;                                              //0xc4
    ULONG AllocateSystemWsles;                                              //0xc8
    ULONG FreeSystemWsles;                                                  //0xcc
    ULONG AllocateSystemInitWs;                                             //0xd0
    ULONG AllocateSessionInitWs;                                            //0xd4
    ULONG FreeSessionInitWsError;                                           //0xd8
    ULONG AllocateSystemImage;                                              //0xdc
    ULONG AllocateSystemImageLoad;                                          //0xe0
    ULONG AllocateSessionSharedImage;                                       //0xe4
    ULONG FreeSystemImageInitCode;                                          //0xe8
    ULONG FreeSystemImageLargePageConversion;                               //0xec
    ULONG FreeSystemImageError;                                             //0xf0
    ULONG FreeSystemImageLoadExcess;                                        //0xf4
    ULONG FreeUnloadSystemImage;                                            //0xf8
    ULONG FreeReloadBootImageLarge;                                         //0xfc
    ULONG FreeIndependent;                                                  //0x100
    ULONG AllocateHotRemove;                                                //0x104
    ULONG FreeHotAdd;                                                       //0x108
    ULONG AllocateBoot;                                                     //0x10c
    ULONG FreeLoaderBlock;                                                  //0x110
    ULONG AllocateNonPagedSpecialPool;                                      //0x114
    ULONG FreeNonPagedSpecialPoolError;                                     //0x118
    ULONG FreeNonPagedSpecialPool;                                          //0x11c
    ULONG AllocateSharedSegmentPage;                                        //0x120
    ULONG FreeSharedSegmentPage;                                            //0x124
    ULONG AllocateZeroPage;                                                 //0x128
    ULONG FreeZeroPage;                                                     //0x12c
    ULONG AllocateForPo;                                                    //0x130
    ULONG AllocateForPoForce;                                               //0x134
    ULONG FreeForPo;                                                        //0x138
    ULONG AllocateThreadHardFaultBehavior;                                  //0x13c
    ULONG FreeThreadHardFaultBehavior;                                      //0x140
    ULONG ObtainFaultCharges;                                               //0x144
    ULONG FreeFaultCharges;                                                 //0x148
    ULONG AllocateStoreCharges;                                             //0x14c
    ULONG FreeStoreCharges;                                                 //0x150
    ULONG ObtainLockedPageCharge;                                           //0x180
    ULONG FreeLockedPageCharge;                                             //0x1c0
    ULONG AllocateStore;                                                    //0x1c4
    ULONG FreeStore;                                                        //0x1c8
    ULONG AllocateSystemImageProtos;                                        //0x1cc
    ULONG FreeSystemImageProtos;                                            //0x1d0
    ULONG AllocateModWriterCharge;                                          //0x1d4
    ULONG FreeModWriterCharge;                                              //0x1d8
    ULONG AllocateMappedWriterCharge;                                       //0x1dc
    ULONG FreeMappedWriterCharge;                                           //0x1e0
    ULONG AllocateRegistryCharges;                                          //0x1e4
    ULONG FreeRegistryCharges;                                              //0x1e8
};
/* Used in */
// _MI_SYSTEM_INFORMATION
