#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _SEGMENT_FLAGS
{
    union
    {
        struct
        {
            USHORT TotalNumberOfPtes4132:10;                                //0x0
            USHORT Spare0:1;                                                //0x0
            USHORT LargePages:1;                                            //0x0
            USHORT LockedPages:1;                                           //0x0
            USHORT DebugSymbolsLoaded:1;                                    //0x0
            USHORT WriteCombined:1;                                         //0x0
            USHORT NoCache:1;                                               //0x0
        };
        USHORT Short0;                                                      //0x0
    };
    union
    {
        struct
        {
            UCHAR FloppyMedia:1;                                            //0x2
            UCHAR DefaultProtectionMask:5;                                  //0x2
            UCHAR Binary32:1;                                               //0x2
            UCHAR ContainsDebug:1;                                          //0x2
        };
        UCHAR UChar1;                                                       //0x2
    };
    union
    {
        struct
        {
            UCHAR ILOnly:1;                                                 //0x3
            UCHAR ImageSigningType:3;                                       //0x3
            UCHAR ImageSigningLevel:4;                                      //0x3
        };
        UCHAR UChar2;                                                       //0x3
    };
};
/* Used in */
// _MAPPED_FILE_SEGMENT
// _SEGMENT

