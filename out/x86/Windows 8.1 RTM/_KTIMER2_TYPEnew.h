#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _KTIMER2_TYPE
{
    KTimer2TypeMin = 0,
    KTimer2Plain = 0,
    KTimer2IdleResilient = 1,
    KTimer2HighResolution = 2,
    KTimer2NoWake = 3,
    KTimer2NoWakeFinite = 4,
    KTimer2TypeMax = 5
};
