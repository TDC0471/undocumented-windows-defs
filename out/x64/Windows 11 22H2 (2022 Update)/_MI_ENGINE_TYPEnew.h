#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _MI_ENGINE_TYPE
{
    MiEngineAccelerator = 0,
    MiEngineFastProcessor = 1,
    MiEngineSlowProcessor = 2,
    MiEngineMaximumTypes = 3
};
