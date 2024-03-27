#pragma once
/* ------------------ */


//0x18 bytes (sizeof)
struct _SEP_TOKEN_PRIVILEGES
{
    ULONGLONG Present;                                                      //0x0
    ULONGLONG Enabled;                                                      //0x8
    ULONGLONG EnabledByDefault;                                             //0x10
};
/* Used in */
// _TOKEN

