#pragma once
/* ------------------ */


//0x20 bytes (sizeof)
struct _DBGKD_READ_WRITE_IO_EXTENDED64
{
    ULONG DataSize;                                                         //0x0
    ULONG InterfaceType;                                                    //0x4
    ULONG BusNumber;                                                        //0x8
    ULONG AddressSpace;                                                     //0xc
    ULONGLONG IoAddress;                                                    //0x10
    ULONG DataValue;                                                        //0x18
};
/* Used in */
// _DBGKD_MANIPULATE_STATE64

