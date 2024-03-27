#pragma once
/* ------------------ */


//0xc bytes (sizeof)
struct _COMPRESSED_DATA_INFO
{
    USHORT CompressionFormatAndEngine;                                      //0x0
    UCHAR CompressionUnitShift;                                             //0x2
    UCHAR ChunkShift;                                                       //0x3
    UCHAR ClusterShift;                                                     //0x4
    UCHAR Reserved;                                                         //0x5
    USHORT NumberOfChunks;                                                  //0x6
    ULONG CompressedChunkSizes[1];                                          //0x8
};
/* Used in */
// _FAST_IO_DISPATCH

