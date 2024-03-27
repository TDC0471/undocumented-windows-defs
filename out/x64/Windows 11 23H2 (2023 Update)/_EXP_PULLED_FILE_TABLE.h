#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _EXP_PULLED_FILE_TABLE
{
    LONG NumberOfFiles;                                                     //0x0
    LONG TableSize;                                                         //0x4
    ULONGLONG Hashes[1];                                                    //0x8
};
