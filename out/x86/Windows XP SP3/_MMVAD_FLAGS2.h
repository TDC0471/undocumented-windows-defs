#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _MMVAD_FLAGS2
{
    ULONG FileOffset:24;                                                    //0x0
    ULONG SecNoChange:1;                                                    //0x0
    ULONG OneSecured:1;                                                     //0x0
    ULONG MultipleSecured:1;                                                //0x0
    ULONG ReadOnly:1;                                                       //0x0
    ULONG LongVad:1;                                                        //0x0
    ULONG ExtendableFile:1;                                                 //0x0
    ULONG Inherit:1;                                                        //0x0
    ULONG CopyOnWrite:1;                                                    //0x0
};
/* Used in */
// _MMVAD
// _MMVAD_LONG

