#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _MMSECTION_FLAGS
{
    ULONG BeingDeleted:1;                                                   //0x0
    ULONG BeingCreated:1;                                                   //0x0
    ULONG BeingPurged:1;                                                    //0x0
    ULONG NoModifiedWriting:1;                                              //0x0
    ULONG FailAllIo:1;                                                      //0x0
    ULONG Image:1;                                                          //0x0
    ULONG Based:1;                                                          //0x0
    ULONG File:1;                                                           //0x0
    ULONG Networked:1;                                                      //0x0
    ULONG NoCache:1;                                                        //0x0
    ULONG PhysicalMemory:1;                                                 //0x0
    ULONG CopyOnWrite:1;                                                    //0x0
    ULONG Reserve:1;                                                        //0x0
    ULONG Commit:1;                                                         //0x0
    ULONG FloppyMedia:1;                                                    //0x0
    ULONG WasPurged:1;                                                      //0x0
    ULONG UserReference:1;                                                  //0x0
    ULONG GlobalMemory:1;                                                   //0x0
    ULONG DeleteOnClose:1;                                                  //0x0
    ULONG FilePointerNull:1;                                                //0x0
    ULONG DebugSymbolsLoaded:1;                                             //0x0
    ULONG SetMappedFileIoComplete:1;                                        //0x0
    ULONG CollidedFlush:1;                                                  //0x0
    ULONG NoChange:1;                                                       //0x0
    ULONG filler0:1;                                                        //0x0
    ULONG ImageMappedInSystemSpace:1;                                       //0x0
    ULONG UserWritable:1;                                                   //0x0
    ULONG Accessed:1;                                                       //0x0
    ULONG GlobalOnlyPerSession:1;                                           //0x0
    ULONG Rom:1;                                                            //0x0
    ULONG WriteCombined:1;                                                  //0x0
    ULONG filler:1;                                                         //0x0
};
/* Used in */
// _CONTROL_AREA
// _LARGE_CONTROL_AREA
// _SEGMENT_OBJECT

