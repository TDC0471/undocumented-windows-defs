#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _PRIVATE_CACHE_MAP_FLAGS
{
    ULONG DontUse:16;                                                       //0x0
    ULONG ReadAheadActive:1;                                                //0x0
    ULONG ReadAheadEnabled:1;                                               //0x0
    ULONG Available:14;                                                     //0x0
};
/* Used in */
// _PRIVATE_CACHE_MAP

