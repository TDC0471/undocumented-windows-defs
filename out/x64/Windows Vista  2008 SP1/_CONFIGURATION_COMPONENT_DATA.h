#pragma once
/* ------------------ */

#include <_CONFIGURATION_COMPONENT_DATA.h>
#include <_CONFIGURATION_COMPONENT.h>

//0x48 bytes (sizeof)
struct _CONFIGURATION_COMPONENT_DATA
{
    struct _CONFIGURATION_COMPONENT_DATA* Parent;                           //0x0
    struct _CONFIGURATION_COMPONENT_DATA* Child;                            //0x8
    struct _CONFIGURATION_COMPONENT_DATA* Sibling;                          //0x10
    struct _CONFIGURATION_COMPONENT ComponentEntry;                         //0x18
    VOID* ConfigurationData;                                                //0x40
};
/* Used in */
// _CONFIGURATION_COMPONENT_DATA
// _LOADER_PARAMETER_BLOCK

