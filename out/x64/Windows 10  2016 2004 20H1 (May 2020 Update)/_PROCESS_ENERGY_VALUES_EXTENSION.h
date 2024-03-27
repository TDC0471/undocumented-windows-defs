#pragma once
/* ------------------ */

#include <_TIMELINE_BITMAP.h>
#include <_ENERGY_STATE_DURATION.h>

//0xa0 bytes (sizeof)
struct _PROCESS_ENERGY_VALUES_EXTENSION
{
    union
    {
        union _TIMELINE_BITMAP Timelines[14];                               //0x0
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
            union _TIMELINE_BITMAP InputTimeline;                           //0x48
            union _TIMELINE_BITMAP AudioInTimeline;                         //0x50
            union _TIMELINE_BITMAP AudioOutTimeline;                        //0x58
            union _TIMELINE_BITMAP DisplayRequiredTimeline;                 //0x60
            union _TIMELINE_BITMAP KeyboardInputTimeline;                   //0x68
        };
    };
    union
    {
        union _ENERGY_STATE_DURATION Durations[5];                          //0x70
        struct
        {
            union _ENERGY_STATE_DURATION InputDuration;                     //0x70
            union _ENERGY_STATE_DURATION AudioInDuration;                   //0x78
            union _ENERGY_STATE_DURATION AudioOutDuration;                  //0x80
            union _ENERGY_STATE_DURATION DisplayRequiredDuration;           //0x88
            union _ENERGY_STATE_DURATION PSMBackgroundDuration;             //0x90
        };
    };
    ULONG KeyboardInput;                                                    //0x98
    ULONG MouseInput;                                                       //0x9c
};
/* Used in */
// _PROCESS_EXTENDED_ENERGY_VALUES

