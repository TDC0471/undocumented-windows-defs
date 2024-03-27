#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_NON_PAGED_DEBUG_INFO.h>
#include <_UNICODE_STRING.h>

//0x5c bytes (sizeof)
struct _KLDR_DATA_TABLE_ENTRY
{
    struct _LIST_ENTRY InLoadOrderLinks;                                    //0x0
    VOID* ExceptionTable;                                                   //0x8
    ULONG ExceptionTableSize;                                               //0xc
    VOID* GpValue;                                                          //0x10
    struct _NON_PAGED_DEBUG_INFO* NonPagedDebugInfo;                        //0x14
    VOID* DllBase;                                                          //0x18
    VOID* EntryPoint;                                                       //0x1c
    ULONG SizeOfImage;                                                      //0x20
    struct _UNICODE_STRING FullDllName;                                     //0x24
    struct _UNICODE_STRING BaseDllName;                                     //0x2c
    ULONG Flags;                                                            //0x34
    USHORT LoadCount;                                                       //0x38
    union
    {
        USHORT SignatureLevel:4;                                            //0x3a
        USHORT SignatureType:3;                                             //0x3a
        USHORT Unused:9;                                                    //0x3a
        USHORT EntireField;                                                 //0x3a
    } u1;                                                                   //0x3a
    VOID* SectionPointer;                                                   //0x3c
    ULONG CheckSum;                                                         //0x40
    ULONG CoverageSectionSize;                                              //0x44
    VOID* CoverageSection;                                                  //0x48
    VOID* LoadedImports;                                                    //0x4c
    VOID* Spare;                                                            //0x50
    ULONG SizeOfImageNotRounded;                                            //0x54
    ULONG TimeDateStamp;                                                    //0x58
};
/* Used in */
// _MI_SYSTEM_IMAGE_STATE

