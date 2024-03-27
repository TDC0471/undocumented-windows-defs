#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct wil_details_StagingConfigHeaderProperties
{
    ULONG ignoreServiceState:1;                                             //0x0
    ULONG ignoreUserState:1;                                                //0x0
    ULONG ignoreTestState:1;                                                //0x0
    ULONG ignoreVariants:1;                                                 //0x0
    ULONG unused:28;                                                        //0x0
};
/* Used in */
// wil_details_StagingConfigHeader

