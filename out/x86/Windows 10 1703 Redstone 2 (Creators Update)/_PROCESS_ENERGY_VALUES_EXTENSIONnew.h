#pragma once
/* ------------------ */

#include <_TIMELINE_BITMAP.h>

//0x48 bytes (sizeof)
struct _PROCESS_ENERGY_VALUES_EXTENSION
{
    union
    {
        union _TIMELINE_BITMAP Timelines[9];                                //0x0
        struct
        {
            union _TIMELINE_BITMAP CpuTimeline;                             //0x0
            union _TIMELINE_BITMAP DiskTimeline;                            //0x8
            union _TIMELINE_BITMAP NetworkTimeline;                         //0x10
            union _TIMELINE_BITMAP MBBTimeline;                             //0x18
            union _TIMELINE_BITMAP ForegroundTimeline;                      //0x20
            union _TIMELINE_BITMAP DesktopVisibleTimeline;                  //0x28
            union _TIMELINE_BITMAP CompositionRenderedTimeline;             //0x30
            union _TIMELINE_BITMAP CompositionDirtyGeneratedTimeline;       //0x38
            union _TIMELINE_BITMAP CompositionDirtyPropagatedTimeline;      //0x40
        };
    };
};
/* Used in */
// _PROCESS_EXTENDED_ENERGY_VALUES

