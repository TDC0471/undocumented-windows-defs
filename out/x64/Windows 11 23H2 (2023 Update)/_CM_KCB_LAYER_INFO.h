#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_CM_KEY_CONTROL_BLOCK.h>
#include <_CM_KCB_LAYER_INFO.h>

//0x40 bytes (sizeof)
struct _CM_KCB_LAYER_INFO
{
    struct _LIST_ENTRY LayerListEntry;                                      //0x0
    struct _CM_KEY_CONTROL_BLOCK* Kcb;                                      //0x10
    struct _CM_KCB_LAYER_INFO* LowerLayer;                                  //0x18
    struct _LIST_ENTRY UpperLayerListHead;                                  //0x20
    struct _LIST_ENTRY DiscardedUpperLayerListHead;                         //0x30
};
/* Used in */
// _CM_KCB_LAYER_INFO
// _CM_KEY_CONTROL_BLOCK

