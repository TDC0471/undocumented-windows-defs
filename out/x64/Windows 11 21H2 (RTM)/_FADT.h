#pragma once
/* ------------------ */

#include <_DESCRIPTION_HEADER.h>
#include <_GEN_ADDR.h>
#include <_LARGE_INTEGER.h>

//0x114 bytes (sizeof)
struct _FADT
{
    struct _DESCRIPTION_HEADER Header;                                      //0x0
    ULONG facs;                                                             //0x24
    ULONG dsdt;                                                             //0x28
    UCHAR int_model;                                                        //0x2c
    UCHAR pm_profile;                                                       //0x2d
    USHORT sci_int_vector;                                                  //0x2e
    ULONG smi_cmd_io_port;                                                  //0x30
    UCHAR acpi_on_value;                                                    //0x34
    UCHAR acpi_off_value;                                                   //0x35
    UCHAR s4bios_req;                                                       //0x36
    UCHAR pstate_control;                                                   //0x37
    ULONG pm1a_evt_blk_io_port;                                             //0x38
    ULONG pm1b_evt_blk_io_port;                                             //0x3c
    ULONG pm1a_ctrl_blk_io_port;                                            //0x40
    ULONG pm1b_ctrl_blk_io_port;                                            //0x44
    ULONG pm2_ctrl_blk_io_port;                                             //0x48
    ULONG pm_tmr_blk_io_port;                                               //0x4c
    ULONG gp0_blk_io_port;                                                  //0x50
    ULONG gp1_blk_io_port;                                                  //0x54
    UCHAR pm1_evt_len;                                                      //0x58
    UCHAR pm1_ctrl_len;                                                     //0x59
    UCHAR pm2_ctrl_len;                                                     //0x5a
    UCHAR pm_tmr_len;                                                       //0x5b
    UCHAR gp0_blk_len;                                                      //0x5c
    UCHAR gp1_blk_len;                                                      //0x5d
    UCHAR gp1_base;                                                         //0x5e
    UCHAR cstate_control;                                                   //0x5f
    USHORT lvl2_latency;                                                    //0x60
    USHORT lvl3_latency;                                                    //0x62
    USHORT flush_size;                                                      //0x64
    USHORT flush_stride;                                                    //0x66
    UCHAR duty_offset;                                                      //0x68
    UCHAR duty_width;                                                       //0x69
    UCHAR day_alarm_index;                                                  //0x6a
    UCHAR month_alarm_index;                                                //0x6b
    UCHAR century_alarm_index;                                              //0x6c
    USHORT boot_arch;                                                       //0x6d
    UCHAR reserved3[1];                                                     //0x6f
    ULONG flags;                                                            //0x70
    struct _GEN_ADDR reset_reg;                                             //0x74
    UCHAR reset_val;                                                        //0x80
    USHORT arm_boot_arch;                                                   //0x81
    UCHAR minor_version_number;                                             //0x83
    union _LARGE_INTEGER x_firmware_ctrl;                                   //0x84
    union _LARGE_INTEGER x_dsdt;                                            //0x8c
    struct _GEN_ADDR x_pm1a_evt_blk;                                        //0x94
    struct _GEN_ADDR x_pm1b_evt_blk;                                        //0xa0
    struct _GEN_ADDR x_pm1a_ctrl_blk;                                       //0xac
    struct _GEN_ADDR x_pm1b_ctrl_blk;                                       //0xb8
    struct _GEN_ADDR x_pm2_ctrl_blk;                                        //0xc4
    struct _GEN_ADDR x_pm_tmr_blk;                                          //0xd0
    struct _GEN_ADDR x_gp0_blk;                                             //0xdc
    struct _GEN_ADDR x_gp1_blk;                                             //0xe8
    struct _GEN_ADDR sleep_control_reg;                                     //0xf4
    struct _GEN_ADDR sleep_status_reg;                                      //0x100
    ULONGLONG hypervisor_vendor_identity;                                   //0x10c
};
