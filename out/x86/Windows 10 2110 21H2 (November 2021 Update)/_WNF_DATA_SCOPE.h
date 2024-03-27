#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _WNF_DATA_SCOPE
{
    WnfDataScopeSystem = 0,
    WnfDataScopeSession = 1,
    WnfDataScopeUser = 2,
    WnfDataScopeProcess = 3,
    WnfDataScopeMachine = 4,
    WnfDataScopePhysicalMachine = 5
};
/* Used in */
// _WNF_SCOPE_INSTANCE

