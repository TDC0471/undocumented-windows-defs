#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _HEAP_FAILURE_TYPE
{
    heap_failure_internal = 0,
    heap_failure_unknown = 1,
    heap_failure_generic = 2,
    heap_failure_entry_corruption = 3,
    heap_failure_multiple_entries_corruption = 4,
    heap_failure_virtual_block_corruption = 5,
    heap_failure_buffer_overrun = 6,
    heap_failure_buffer_underrun = 7,
    heap_failure_block_not_busy = 8,
    heap_failure_invalid_argument = 9,
    heap_failure_usage_after_free = 10,
    heap_failure_cross_heap_operation = 11,
    heap_failure_freelists_corruption = 12,
    heap_failure_listentry_corruption = 13,
    heap_failure_lfh_bitmap_mismatch = 14,
    heap_failure_segment_lfh_bitmap_corruption = 15,
    heap_failure_segment_lfh_double_free = 16
};
