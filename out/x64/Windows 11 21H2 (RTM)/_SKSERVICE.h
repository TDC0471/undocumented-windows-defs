#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _SKSERVICE
{
    SECURESERVICE_NONE = 0,
    SECURESERVICE_PHASE4_INIT = 1,
    SECURESERVICE_START_PROCESSOR = 2,
    SECURESERVICE_FINISH_START_PROCESSOR = 3,
    SECURESERVICE_REGISTER_SYSTEM_DLLS = 4,
    SECURESERVICE_REGISTER_SYSTEM_PROCESS = 5,
    SECURESERVICE_CREATE_PROCESS = 6,
    SECURESERVICE_INITIALIZE_PROCESS = 7,
    SECURESERVICE_CREATE_THREAD = 8,
    SECURESERVICE_REQUEST_THREAD_EXIT = 9,
    SECURESERVICE_TERMINATE_THREAD = 10,
    SECURESERVICE_RUNDOWN_PROCESS = 11,
    SECURESERVICE_DEBUG_PROCESS = 12,
    SECURESERVICE_GET_TEB_ADDRESS = 13,
    SECURESERVICE_GET_CONTEXT = 14,
    SECURESERVICE_SET_CONTEXT = 15,
    SECURESERVICE_SEND_ATTACH_NOTIFICATIONS = 16,
    SECURESERVICE_GET_ETW_DEBUG_ID = 17,
    SECURESERVICE_GET_ON_DEMAND_DEBUG_CHALLENGE = 18,
    SECURESERVICE_ENABLE_ON_DEMAND_DEBUG_WITH_RESPONSE = 19,
    SECURESERVICE_RETRIEVE_MAILBOX = 20,
    SECURESERVICE_IS_TRUSTLET_RUNNING = 21,
    SECURESERVICE_CREATE_SECURE_ALLOCATION = 22,
    SECURESERVICE_FILL_SECURE_ALLOCATION = 23,
    SECURESERVICE_MAKE_CODE_CATALOG = 24,
    SECURESERVICE_CREATE_SECURE_IMAGE = 25,
    SECURESERVICE_FINALIZE_SECURE_IMAGE_HASH = 26,
    SECURESERVICE_FINISH_SECURE_IMAGE_VALIDATION = 27,
    SECURESERVICE_PREPARE_IMAGE_RELOCATIONS = 28,
    SECURESERVICE_RELOCATE_IMAGE = 29,
    SECURESERVICE_CLOSE_SECURE_HANDLE = 30,
    SECURESERVICE_VALIDATE_DYNAMIC_CODE = 31,
    SECURESERVICE_TRANSFER_IMAGE_VERSION_RESOURCE = 32,
    SECURESERVICE_SET_CODE_INTEGRITY_POLICY = 33,
    SECURESERVICE_EXCHANGE_ENTROPY = 34,
    SECURESERVICE_IS_ENCRYPTION_KEY_AVAILABLE = 35,
    SECURESERVICE_ALLOCATE_HIBERNATE_RESOURCES = 36,
    SECURESERVICE_FREE_HIBERNATE_RESOURCES = 37,
    SECURESERVICE_CONFIGURE_DYNAMIC_MEMORY = 38,
    SECURESERVICE_DEBUG_PROTECT_MEMORY = 39,
    SECURESERVICE_DEBUG_READ_WRITE_MEMORY = 40,
    SECURESERVICE_QUERY_VIRTUAL_MEMORY = 41,
    SECURESERVICE_CAPTURE_IMAGE_IAT = 42,
    SECURESERVICE_FREE_IMAGE_IAT = 43,
    SECURESERVICE_APPLY_FIXUPS = 44,
    SECURESERVICE_MARK_IMAGE_PROTECTED = 45,
    SECURESERVICE_CREATE_ENCLAVE = 46,
    SECURESERVICE_LOAD_ENCLAVE_DATA = 47,
    SECURESERVICE_LOAD_ENCLAVE_MODULE = 48,
    SECURESERVICE_INITIALIZE_ENCLAVE = 49,
    SECURESERVICE_TERMINATE_ENCLAVE = 50,
    SECURESERVICE_DELETE_ENCLAVE = 51,
    SECURESERVICE_CONNECT_SW_INTERRUPT = 52,
    SECURESERVICE_RELAX_HYPERGUARD_QUOTA = 53,
    SECURESERVICE_REGISTER_BOOT_DRIVERS = 54,
    SECURESERVICE_LIVEDUMP_QUERY_SECONDARYDATA_SIZE = 55,
    SECURESERVICE_LIVEDUMP_START = 56,
    SECURESERVICE_LIVEDUMP_ADD_BUFFER = 57,
    SECURESERVICE_LIVEDUMP_SETUP_BUFFER = 58,
    SECURESERVICE_LIVEDUMP_FINALIZE = 59,
    SECURESERVICE_LIVEDUMP_ABORT = 60,
    SECURESERVICE_LIVEDUMP_CAPTURE_PROCESS = 61,
    SECURESERVICE_NOTIFY_POWER_STATE = 62,
    SECURESERVICE_QUERY_PROFILE_INFORMATION = 63,
    SECURESERVICE_UPDATE_FREEZE_BIAS = 64,
    SECURESERVICE_CREATE_SECURE_SECTION = 65,
    SECURESERVICE_DELETE_SECURE_SECTION = 66,
    SECURESERVICE_QUERY_SECURE_DEVICE = 67,
    SECURESERVICE_UNPROTECT_SECURE_DEVICE = 68,
    SECURESERVICE_DETERMINE_HOT_PATCH_TYPE = 69,
    SECURESERVICE_OBTAIN_PATCH_UNDO_TABLE_SIZE = 70,
    SECURESERVICE_OBTAIN_PATCH_UNDO_TABLE = 71,
    SECURESERVICE_APPLY_HOT_PATCH = 72,
    SECURESERVICE_REVERT_HOT_PATCH = 73,
    SECURESERVICE_PREPARE_DRIVER_FOR_PATCH = 74,
    SECURESERVICE_PROVISION_DUMP_KEYS = 75,
    SECURESERVICE_CAPTURE_PGO_DATA = 76,
    SECURESERVICE_START_PROFILE = 77,
    SECURESERVICE_STOP_PROFILE = 78,
    SECURESERVICE_SECURE_POOL_CREATE = 79,
    SECURESERVICE_SECURE_POOL_DESTROY = 80,
    SECURESERVICE_SECURE_POOL_ALLOCATE = 81,
    SECURESERVICE_SECURE_POOL_FREE = 82,
    SECURESERVICE_SECURE_POOL_UPDATE = 83,
    SECURESERVICE_SET_TRACEPOINT = 84,
    SECURESERVICE_TRANSFORM_DUMP_KEY = 85,
    SECURESERVICE_NO_TRACING_FIRST = 191,
    SECURESERVICE_GET_PEB_ADDRESS = 192,
    SECURESERVICE_VALIDATE_SECURE_IMAGE_PAGES = 193,
    SECURESERVICE_PRE_INIT_FIRST = 207,
    SECURESERVICE_PHASE3_INIT = 208,
    SECURESERVICE_PERIODIC = 209,
    SECURESERVICE_WORK_QUEUE = 210,
    SECURESERVICE_RESERVE_PROTECTED_PAGES = 211,
    SECURESERVICE_APPLY_DYNAMIC_RELOCATIONS = 212,
    SECURESERVICE_ETW_ENABLE_CALLBACK = 213,
    SECURESERVICE_INITIALIZE_SECURE_POOL = 214,
    SECURESERVICE_INITIALIZE_KERNEL_CFG = 215,
    SECURESERVICE_LOAD_DRIVER = 216,
    SECURESERVICE_UNLOAD_DRIVER = 217,
    SECURESERVICE_ENABLE_CFG_TARGET = 218,
    SECURESERVICE_COMPLETE_SLAB_CONFIGURATION = 219,
    SECURESERVICE_INITIALIZE_RETPOLINE = 220,
    SECURESERVICE_PERFORM_RETPOLINE_RELOCATIONS = 221,
    SECURESERVICE_UPDATE_IMPORT_RELOCATIONS = 222,
    SECURESERVICE_REAPPLY_IMPORT_RELOCATIONS = 223,
    SECURESERVICE_ALLOCATE_SHADOW_STACK = 224,
    SECURESERVICE_FREE_SHADOW_STACK = 225,
    SECURESERVICE_RESET_SHADOW_STACK = 226,
    SECURESERVICE_DISPATCH_LEVEL_FIRST = 239,
    SECURESERVICE_FLUSH_ADDRESS_SPACE = 240,
    SECURESERVICE_FAST_FLUSH_RANGE_LIST = 241,
    SECURESERVICE_SLOW_FLUSH_RANGE_LIST = 242,
    SECURESERVICE_REMOVE_PROTECTED_PAGE = 243,
    SECURESERVICE_COPY_PROTECTED_PAGE = 244,
    SECURESERVICE_REGISTER_PROTECTED_PAGE = 245,
    SECURESERVICE_DISAMBIGUATE_PROTECTED_PAGE = 246,
    SECURESERVICE_MAKE_PROTECTED_PAGE_WRITABLE = 247,
    SECURESERVICE_MAKE_PROTECTED_PAGE_EXECUTABLE = 248,
    SECURESERVICE_QUERY_STRONG_CODE_FEATURES = 249,
    SECURESERVICE_INVOKE_EFI_RUNTIME_SERVICE = 250,
    SECURESERVICE_LIVEDUMP_COLLECT_LIVE_DUMP = 251,
    SECURESERVICE_REGISTER_LOG_PAGES = 252,
    SECURESERVICE_RECLAIM_PARTITION_PAGES = 253,
    SECURESERVICE_BIND_NT_KERNEL_IMPORTS = 254,
    SECURESERVICE_SET_PLACEHOLDER_PAGES = 255,
    SECURESERVICE_QUERY_SPECULATION_CONTROL_FEATURES = 256,
    SECURESERVICE_PROTECT_KERNEL_DATA_PAGE = 257,
    SECURESERVICE_VERIFY_PAGE = 258,
    SECURESERVICE_PREPARE_FOR_HIBERNATION = 259,
    SECURESERVICE_PREPARE_FOR_CRASHDUMP = 260,
    SECURESERVICE_REPORT_BUGCHECK_PROGRESS = 261,
    SECURESERVICE_SHUTDOWN = 262,
    SECURESERVICE_QUERY_SECURE_PCI_INFO = 263,
    SECURESERVICE_ACCESS_PCI_DEVICE = 264,
    SECURESERVICE_REINITIALIZE_DEBUGGER_TRANSPORT = 265,
    SECURESERVICE_KSR_CALL = 266,
    SECURESERVICE_SVC_CALL = 267,
    SECURESERVICE_SHADOW_STACK_ASSIST = 268,
    SECURESERVICE_BUGCHECK = 1792,
    SECURESERVICE_LIMITED_MODE_SERVICE_START = 2048
};
