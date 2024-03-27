#pragma once
/* ------------------ */

#include <_CONFIGURATION_COMPONENT_DATA.h>
#include <_CONFIGURATION_COMPONENT.h>

//0x34 bytes (sizeof)
struct _CONFIGURATION_COMPONENT_DATA
{
    struct _CONFIGURATION_COMPONENT_DATA* Parent;                           //0x0
    struct _CONFIGURATION_COMPONENT_DATA* Child;                            //0x4
    struct _CONFIGURATION_COMPONENT_DATA* Sibling;                          //0x8
    struct _CONFIGURATION_COMPONENT ComponentEntry;                         //0xc
    VOID* ConfigurationData;                                                //0x30
};
/* Used in */
// _CONFIGURATION_COMPONENT_DATA
// _LOADER_PARAMETER_BLOCK

