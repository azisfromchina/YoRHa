#pragma once

#define kprintf_offset                  0x000B79E0
#define critical_enter_offset           0x002C1600
#define critical_exit_offset            0x002C1620
#define xfast_syscall_offset            0x000001C0
#define sysent_offset                   0x010FC310
#define ksock_create_offset             0x00419C90
#define ksock_close_offset              0x00419D00
#define ksock_bind_offset               0x00419D10
#define ksock_recv_offset               0x0041A070
#define kproc_create_offset             0x000969E0
#define kmem_alloc_offset               0x0037A070
#define kmem_free_offset                0x0037A240
#define kkernel_map_offset              0x02264D48
#define kmalloc_offset                  0x003017B0
#define kfree_offset                    0x00301970
#define kcopyin_offset                  0x00271320
#define kpmap_extract_offset            0x0012D360
#define KMEM_TEMP_offset                0x0155E1E0
#define kmtx_destroy                    0x002EF650
#define kmtx_init_offset                0x002EF5E0
#define kmtx_lock_sleep                 0x002EEBD0
#define kmtx_lock_spin_flags_offset     0x002EEF50
#define kmtx_unlock_sleep_offset        0x002EEEF0
#define kgeneric_stop_cpus_offset       0x00430650
#define krestart_cpus_offset            0x00430760

// Kernel global variables
#define all_cpus_offset                 0x022DBD90
#define stopped_cpus_offset             0x022DBD38