#pragma once
/* ------------------ */

#include <_RTL_AVL_TABLE.h>
#include <_KMUTANT.h>

//0xa8 bytes (sizeof)
struct _KTMOBJECT_NAMESPACE
{
    struct _RTL_AVL_TABLE Table;                                            //0x0
    struct _KMUTANT Mutex;                                                  //0x68
    USHORT LinksOffset;                                                     //0xa0
    USHORT GuidOffset;                                                      //0xa2
    UCHAR Expired;                                                          //0xa4
};
/* Used in */
// _KRESOURCEMANAGER
// _KTM

