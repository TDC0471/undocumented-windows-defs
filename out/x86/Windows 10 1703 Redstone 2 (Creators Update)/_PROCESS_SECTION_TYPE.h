#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _PROCESS_SECTION_TYPE
{
    ProcessSectionData = 0,
    ProcessSectionImage = 1,
    ProcessSectionImageNx = 2,
    ProcessSectionPagefileBacked = 3,
    ProcessSectionMax = 4
};
