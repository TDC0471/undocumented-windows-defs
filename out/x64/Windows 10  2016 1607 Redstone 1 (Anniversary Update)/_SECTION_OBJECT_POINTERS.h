#pragma once
/* ------------------ */


//0x18 bytes (sizeof)
struct _SECTION_OBJECT_POINTERS
{
    VOID* DataSectionObject;                                                //0x0
    VOID* SharedCacheMap;                                                   //0x8
    VOID* ImageSectionObject;                                               //0x10
};
/* Used in */
// _FILE_OBJECT

