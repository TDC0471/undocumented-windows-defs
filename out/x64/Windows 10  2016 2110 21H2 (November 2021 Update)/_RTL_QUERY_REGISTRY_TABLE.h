#pragma once
/* ------------------ */


//0x38 bytes (sizeof)
struct _RTL_QUERY_REGISTRY_TABLE
{
    LONG (*QueryRoutine)(WCHAR* arg1, ULONG arg2, VOID* arg3, ULONG arg4, VOID* arg5, VOID* arg6); //0x0
    ULONG Flags;                                                            //0x8
    WCHAR* Name;                                                            //0x10
    VOID* EntryContext;                                                     //0x18
    ULONG DefaultType;                                                      //0x20
    VOID* DefaultData;                                                      //0x28
    ULONG DefaultLength;                                                    //0x30
};
