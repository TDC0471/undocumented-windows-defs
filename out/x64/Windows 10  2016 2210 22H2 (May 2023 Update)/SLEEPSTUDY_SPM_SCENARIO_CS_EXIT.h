#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum SLEEPSTUDY_SPM_SCENARIO_CS_EXIT
{
    SpmScenarioStopReasonUnspecified = 16,
    SpmScenarioStopReasonCsExit = 17,
    SpmScenarioStopReasonInternalSegmentTransition = 18,
    SpmScenarioStopReasonMax = 19
};
