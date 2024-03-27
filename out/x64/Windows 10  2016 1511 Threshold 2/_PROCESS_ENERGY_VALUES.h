#pragma once
/* ------------------ */


//0x90 bytes (sizeof)
struct _PROCESS_ENERGY_VALUES
{
    ULONGLONG Cycles[4][2];                                                 //0x0
    ULONGLONG DiskEnergy;                                                   //0x40
    ULONGLONG NetworkTailEnergy;                                            //0x48
    ULONGLONG MBBTailEnergy;                                                //0x50
    ULONGLONG NetworkTxRxBytes;                                             //0x58
    ULONGLONG MBBTxRxBytes;                                                 //0x60
    union
    {
        ULONG Foreground:1;                                                 //0x68
        ULONG WindowInformation;                                            //0x68
    };
    ULONG PixelArea;                                                        //0x6c
    LONGLONG PixelReportTimestamp;                                          //0x70
    ULONGLONG PixelTime;                                                    //0x78
    LONGLONG ForegroundReportTimestamp;                                     //0x80
    ULONGLONG ForegroundTime;                                               //0x88
};
/* Used in */
// _EJOB
// _EPROCESS

