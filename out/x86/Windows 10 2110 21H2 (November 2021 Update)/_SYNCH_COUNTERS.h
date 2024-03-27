#pragma once
/* ------------------ */


//0xb8 bytes (sizeof)
struct _SYNCH_COUNTERS
{
    ULONG SpinLockAcquireCount;                                             //0x0
    ULONG SpinLockContentionCount;                                          //0x4
    ULONG SpinLockSpinCount;                                                //0x8
    ULONG IpiSendRequestBroadcastCount;                                     //0xc
    ULONG IpiSendRequestRoutineCount;                                       //0x10
    ULONG IpiSendSoftwareInterruptCount;                                    //0x14
    ULONG ExInitializeResourceCount;                                        //0x18
    ULONG ExReInitializeResourceCount;                                      //0x1c
    ULONG ExDeleteResourceCount;                                            //0x20
    ULONG ExecutiveResourceAcquiresCount;                                   //0x24
    ULONG ExecutiveResourceContentionsCount;                                //0x28
    ULONG ExecutiveResourceReleaseExclusiveCount;                           //0x2c
    ULONG ExecutiveResourceReleaseSharedCount;                              //0x30
    ULONG ExecutiveResourceConvertsCount;                                   //0x34
    ULONG ExAcqResExclusiveAttempts;                                        //0x38
    ULONG ExAcqResExclusiveAcquiresExclusive;                               //0x3c
    ULONG ExAcqResExclusiveAcquiresExclusiveRecursive;                      //0x40
    ULONG ExAcqResExclusiveWaits;                                           //0x44
    ULONG ExAcqResExclusiveNotAcquires;                                     //0x48
    ULONG ExAcqResSharedAttempts;                                           //0x4c
    ULONG ExAcqResSharedAcquiresExclusive;                                  //0x50
    ULONG ExAcqResSharedAcquiresShared;                                     //0x54
    ULONG ExAcqResSharedAcquiresSharedRecursive;                            //0x58
    ULONG ExAcqResSharedWaits;                                              //0x5c
    ULONG ExAcqResSharedNotAcquires;                                        //0x60
    ULONG ExAcqResSharedStarveExclusiveAttempts;                            //0x64
    ULONG ExAcqResSharedStarveExclusiveAcquiresExclusive;                   //0x68
    ULONG ExAcqResSharedStarveExclusiveAcquiresShared;                      //0x6c
    ULONG ExAcqResSharedStarveExclusiveAcquiresSharedRecursive;             //0x70
    ULONG ExAcqResSharedStarveExclusiveWaits;                               //0x74
    ULONG ExAcqResSharedStarveExclusiveNotAcquires;                         //0x78
    ULONG ExAcqResSharedWaitForExclusiveAttempts;                           //0x7c
    ULONG ExAcqResSharedWaitForExclusiveAcquiresExclusive;                  //0x80
    ULONG ExAcqResSharedWaitForExclusiveAcquiresShared;                     //0x84
    ULONG ExAcqResSharedWaitForExclusiveAcquiresSharedRecursive;            //0x88
    ULONG ExAcqResSharedWaitForExclusiveWaits;                              //0x8c
    ULONG ExAcqResSharedWaitForExclusiveNotAcquires;                        //0x90
    ULONG ExSetResOwnerPointerExclusive;                                    //0x94
    ULONG ExSetResOwnerPointerSharedNew;                                    //0x98
    ULONG ExSetResOwnerPointerSharedOld;                                    //0x9c
    ULONG ExTryToAcqExclusiveAttempts;                                      //0xa0
    ULONG ExTryToAcqExclusiveAcquires;                                      //0xa4
    ULONG ExBoostExclusiveOwner;                                            //0xa8
    ULONG ExBoostSharedOwners;                                              //0xac
    ULONG ExEtwSynchTrackingNotificationsCount;                             //0xb0
    ULONG ExEtwSynchTrackingNotificationsAccountedCount;                    //0xb4
};
/* Used in */
// _KPRCB

