#pragma once
/* ------------------ */

#include <_RTL_AVL_TABLE.h>
#include <_KMUTANT.h>

//0x60 bytes (sizeof)
struct _KTMOBJECT_NAMESPACE
{
    struct _RTL_AVL_TABLE Table;                                            //0x0
    struct _KMUTANT Mutex;                                                  //0x38
    USHORT LinksOffset;                                                     //0x58
    USHORT GuidOffset;                                                      //0x5a
    UCHAR Expired;                                                          //0x5c
};
/* Used in */
// _KRESOURCEMANAGER
// _KTM

