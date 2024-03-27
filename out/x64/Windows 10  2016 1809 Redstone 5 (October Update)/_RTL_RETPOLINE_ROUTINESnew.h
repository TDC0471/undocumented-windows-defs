#pragma once
/* ------------------ */


//0x4c bytes (sizeof)
struct _RTL_RETPOLINE_ROUTINES
{
    ULONG SwitchtableJump[16];                                              //0x0
    ULONG CfgIndirectRax;                                                   //0x40
    ULONG NonCfgIndirectRax;                                                //0x44
    ULONG ImportR10;                                                        //0x48
};
/* Used in */
// _MI_SECTION_STATE

