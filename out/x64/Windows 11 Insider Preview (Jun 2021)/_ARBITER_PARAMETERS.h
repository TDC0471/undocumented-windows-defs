#pragma once
/* ------------------ */

#include <_ARBITER_TEST_ALLOCATION_PARAMETERS.h>
#include <_ARBITER_RETEST_ALLOCATION_PARAMETERS.h>
#include <_ARBITER_BOOT_ALLOCATION_PARAMETERS.h>
#include <_ARBITER_QUERY_ALLOCATED_RESOURCES_PARAMETERS.h>
#include <_ARBITER_QUERY_CONFLICT_PARAMETERS.h>
#include <_ARBITER_QUERY_ARBITRATE_PARAMETERS.h>
#include <_ARBITER_ADD_RESERVED_PARAMETERS.h>

//0x20 bytes (sizeof)
struct _ARBITER_PARAMETERS
{
    union
    {
        struct _ARBITER_TEST_ALLOCATION_PARAMETERS TestAllocation;          //0x0
        struct _ARBITER_RETEST_ALLOCATION_PARAMETERS RetestAllocation;      //0x0
        struct _ARBITER_BOOT_ALLOCATION_PARAMETERS BootAllocation;          //0x0
        struct _ARBITER_QUERY_ALLOCATED_RESOURCES_PARAMETERS QueryAllocatedResources; //0x0
        struct _ARBITER_QUERY_CONFLICT_PARAMETERS QueryConflict;            //0x0
        struct _ARBITER_QUERY_ARBITRATE_PARAMETERS QueryArbitrate;          //0x0
        struct _ARBITER_ADD_RESERVED_PARAMETERS AddReserved;                //0x0
    } Parameters;                                                           //0x0
};
/* Used in */
// _ARBITER_INTERFACE

