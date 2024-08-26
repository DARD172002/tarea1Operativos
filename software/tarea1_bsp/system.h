/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'nios2_gen2_0' in SOPC Builder design 'tarea1'
 * SOPC Builder design path: ../../tarea1.sopcinfo
 *
 * Generated: Sun Aug 25 20:10:09 CST 2024
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * Buzzer configuration
 *
 */

#define ALT_MODULE_CLASS_Buzzer altera_avalon_pio
#define BUZZER_BASE 0x30a0
#define BUZZER_BIT_CLEARING_EDGE_REGISTER 0
#define BUZZER_BIT_MODIFYING_OUTPUT_REGISTER 0
#define BUZZER_CAPTURE 0
#define BUZZER_DATA_WIDTH 1
#define BUZZER_DO_TEST_BENCH_WIRING 0
#define BUZZER_DRIVEN_SIM_VALUE 0
#define BUZZER_EDGE_TYPE "NONE"
#define BUZZER_FREQ 50000000
#define BUZZER_HAS_IN 0
#define BUZZER_HAS_OUT 1
#define BUZZER_HAS_TRI 0
#define BUZZER_IRQ -1
#define BUZZER_IRQ_INTERRUPT_CONTROLLER_ID -1
#define BUZZER_IRQ_TYPE "NONE"
#define BUZZER_NAME "/dev/Buzzer"
#define BUZZER_RESET_VALUE 0
#define BUZZER_SPAN 16
#define BUZZER_TYPE "altera_avalon_pio"


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_gen2"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x00002820
#define ALT_CPU_CPU_ARCH_NIOS2_R1
#define ALT_CPU_CPU_FREQ 50000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "fast"
#define ALT_CPU_DATA_ADDR_WIDTH 0xe
#define ALT_CPU_DCACHE_BYPASS_MASK 0x80000000
#define ALT_CPU_DCACHE_LINE_SIZE 32
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 5
#define ALT_CPU_DCACHE_SIZE 2048
#define ALT_CPU_EXCEPTION_ADDR 0x00001020
#define ALT_CPU_FLASH_ACCELERATOR_LINES 0
#define ALT_CPU_FLASH_ACCELERATOR_LINE_SIZE 0
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 50000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 1
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_EXTRA_EXCEPTION_INFO
#define ALT_CPU_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 32
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 5
#define ALT_CPU_ICACHE_SIZE 4096
#define ALT_CPU_INITDA_SUPPORTED
#define ALT_CPU_INST_ADDR_WIDTH 0xe
#define ALT_CPU_NAME "nios2_gen2_0"
#define ALT_CPU_NUM_OF_SHADOW_REG_SETS 0
#define ALT_CPU_OCI_VERSION 1
#define ALT_CPU_RESET_ADDR 0x00001000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x00002820
#define NIOS2_CPU_ARCH_NIOS2_R1
#define NIOS2_CPU_FREQ 50000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "fast"
#define NIOS2_DATA_ADDR_WIDTH 0xe
#define NIOS2_DCACHE_BYPASS_MASK 0x80000000
#define NIOS2_DCACHE_LINE_SIZE 32
#define NIOS2_DCACHE_LINE_SIZE_LOG2 5
#define NIOS2_DCACHE_SIZE 2048
#define NIOS2_EXCEPTION_ADDR 0x00001020
#define NIOS2_FLASH_ACCELERATOR_LINES 0
#define NIOS2_FLASH_ACCELERATOR_LINE_SIZE 0
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 1
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_EXTRA_EXCEPTION_INFO
#define NIOS2_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 32
#define NIOS2_ICACHE_LINE_SIZE_LOG2 5
#define NIOS2_ICACHE_SIZE 4096
#define NIOS2_INITDA_SUPPORTED
#define NIOS2_INST_ADDR_WIDTH 0xe
#define NIOS2_NUM_OF_SHADOW_REG_SETS 0
#define NIOS2_OCI_VERSION 1
#define NIOS2_RESET_ADDR 0x00001000


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_ONCHIP_MEMORY2
#define __ALTERA_AVALON_PIO
#define __ALTERA_AVALON_TIMER
#define __ALTERA_NIOS2_GEN2


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "Cyclone V"
#define ALT_ENHANCED_INTERRUPT_API_PRESENT
#define ALT_IRQ_BASE NULL
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/jtag_uart_0"
#define ALT_STDERR_BASE 0x30b0
#define ALT_STDERR_DEV jtag_uart_0
#define ALT_STDERR_IS_JTAG_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN "/dev/jtag_uart_0"
#define ALT_STDIN_BASE 0x30b0
#define ALT_STDIN_DEV jtag_uart_0
#define ALT_STDIN_IS_JTAG_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT "/dev/jtag_uart_0"
#define ALT_STDOUT_BASE 0x30b0
#define ALT_STDOUT_DEV jtag_uart_0
#define ALT_STDOUT_IS_JTAG_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_SYSTEM_NAME "tarea1"


/*
 * alarma configuration
 *
 */

#define ALARMA_ALWAYS_RUN 0
#define ALARMA_BASE 0x3000
#define ALARMA_COUNTER_SIZE 32
#define ALARMA_FIXED_PERIOD 0
#define ALARMA_FREQ 50000000
#define ALARMA_IRQ 0
#define ALARMA_IRQ_INTERRUPT_CONTROLLER_ID 0
#define ALARMA_LOAD_VALUE 49999999
#define ALARMA_MULT 1.0
#define ALARMA_NAME "/dev/alarma"
#define ALARMA_PERIOD 1
#define ALARMA_PERIOD_UNITS "s"
#define ALARMA_RESET_OUTPUT 0
#define ALARMA_SNAPSHOT 1
#define ALARMA_SPAN 32
#define ALARMA_TICKS_PER_SEC 1
#define ALARMA_TIMEOUT_PULSE_OUTPUT 0
#define ALARMA_TYPE "altera_avalon_timer"
#define ALT_MODULE_CLASS_alarma altera_avalon_timer


/*
 * botones configuration
 *
 */

#define ALT_MODULE_CLASS_botones altera_avalon_pio
#define BOTONES_BASE 0x3070
#define BOTONES_BIT_CLEARING_EDGE_REGISTER 0
#define BOTONES_BIT_MODIFYING_OUTPUT_REGISTER 0
#define BOTONES_CAPTURE 0
#define BOTONES_DATA_WIDTH 4
#define BOTONES_DO_TEST_BENCH_WIRING 0
#define BOTONES_DRIVEN_SIM_VALUE 0
#define BOTONES_EDGE_TYPE "NONE"
#define BOTONES_FREQ 50000000
#define BOTONES_HAS_IN 1
#define BOTONES_HAS_OUT 0
#define BOTONES_HAS_TRI 0
#define BOTONES_IRQ -1
#define BOTONES_IRQ_INTERRUPT_CONTROLLER_ID -1
#define BOTONES_IRQ_TYPE "NONE"
#define BOTONES_NAME "/dev/botones"
#define BOTONES_RESET_VALUE 0
#define BOTONES_SPAN 16
#define BOTONES_TYPE "altera_avalon_pio"


/*
 * hal configuration
 *
 */

#define ALT_INCLUDE_INSTRUCTION_RELATED_EXCEPTION_API
#define ALT_MAX_FD 4
#define ALT_SYS_CLK none
#define ALT_TIMESTAMP_CLK none


/*
 * jtag_uart_0 configuration
 *
 */

#define ALT_MODULE_CLASS_jtag_uart_0 altera_avalon_jtag_uart
#define JTAG_UART_0_BASE 0x30b0
#define JTAG_UART_0_IRQ 1
#define JTAG_UART_0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define JTAG_UART_0_NAME "/dev/jtag_uart_0"
#define JTAG_UART_0_READ_DEPTH 64
#define JTAG_UART_0_READ_THRESHOLD 8
#define JTAG_UART_0_SPAN 8
#define JTAG_UART_0_TYPE "altera_avalon_jtag_uart"
#define JTAG_UART_0_WRITE_DEPTH 64
#define JTAG_UART_0_WRITE_THRESHOLD 8


/*
 * led configuration
 *
 */

#define ALT_MODULE_CLASS_led altera_avalon_pio
#define LED_BASE 0x3080
#define LED_BIT_CLEARING_EDGE_REGISTER 0
#define LED_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LED_CAPTURE 0
#define LED_DATA_WIDTH 3
#define LED_DO_TEST_BENCH_WIRING 0
#define LED_DRIVEN_SIM_VALUE 0
#define LED_EDGE_TYPE "NONE"
#define LED_FREQ 50000000
#define LED_HAS_IN 0
#define LED_HAS_OUT 1
#define LED_HAS_TRI 0
#define LED_IRQ -1
#define LED_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LED_IRQ_TYPE "NONE"
#define LED_NAME "/dev/led"
#define LED_RESET_VALUE 0
#define LED_SPAN 16
#define LED_TYPE "altera_avalon_pio"


/*
 * onchip_memory2_0 configuration
 *
 */

#define ALT_MODULE_CLASS_onchip_memory2_0 altera_avalon_onchip_memory2
#define ONCHIP_MEMORY2_0_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define ONCHIP_MEMORY2_0_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define ONCHIP_MEMORY2_0_BASE 0x1000
#define ONCHIP_MEMORY2_0_CONTENTS_INFO ""
#define ONCHIP_MEMORY2_0_DUAL_PORT 0
#define ONCHIP_MEMORY2_0_GUI_RAM_BLOCK_TYPE "AUTO"
#define ONCHIP_MEMORY2_0_INIT_CONTENTS_FILE "tarea1_onchip_memory2_0"
#define ONCHIP_MEMORY2_0_INIT_MEM_CONTENT 1
#define ONCHIP_MEMORY2_0_INSTANCE_ID "NONE"
#define ONCHIP_MEMORY2_0_IRQ -1
#define ONCHIP_MEMORY2_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define ONCHIP_MEMORY2_0_NAME "/dev/onchip_memory2_0"
#define ONCHIP_MEMORY2_0_NON_DEFAULT_INIT_FILE_ENABLED 0
#define ONCHIP_MEMORY2_0_RAM_BLOCK_TYPE "AUTO"
#define ONCHIP_MEMORY2_0_READ_DURING_WRITE_MODE "DONT_CARE"
#define ONCHIP_MEMORY2_0_SINGLE_CLOCK_OP 0
#define ONCHIP_MEMORY2_0_SIZE_MULTIPLE 1
#define ONCHIP_MEMORY2_0_SIZE_VALUE 4096
#define ONCHIP_MEMORY2_0_SPAN 4096
#define ONCHIP_MEMORY2_0_TYPE "altera_avalon_onchip_memory2"
#define ONCHIP_MEMORY2_0_WRITABLE 1


/*
 * seg0 configuration
 *
 */

#define ALT_MODULE_CLASS_seg0 altera_avalon_pio
#define SEG0_BASE 0x3090
#define SEG0_BIT_CLEARING_EDGE_REGISTER 0
#define SEG0_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEG0_CAPTURE 0
#define SEG0_DATA_WIDTH 7
#define SEG0_DO_TEST_BENCH_WIRING 0
#define SEG0_DRIVEN_SIM_VALUE 0
#define SEG0_EDGE_TYPE "NONE"
#define SEG0_FREQ 50000000
#define SEG0_HAS_IN 0
#define SEG0_HAS_OUT 1
#define SEG0_HAS_TRI 0
#define SEG0_IRQ -1
#define SEG0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEG0_IRQ_TYPE "NONE"
#define SEG0_NAME "/dev/seg0"
#define SEG0_RESET_VALUE 0
#define SEG0_SPAN 16
#define SEG0_TYPE "altera_avalon_pio"


/*
 * seg1 configuration
 *
 */

#define ALT_MODULE_CLASS_seg1 altera_avalon_pio
#define SEG1_BASE 0x3040
#define SEG1_BIT_CLEARING_EDGE_REGISTER 0
#define SEG1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEG1_CAPTURE 0
#define SEG1_DATA_WIDTH 7
#define SEG1_DO_TEST_BENCH_WIRING 0
#define SEG1_DRIVEN_SIM_VALUE 0
#define SEG1_EDGE_TYPE "NONE"
#define SEG1_FREQ 50000000
#define SEG1_HAS_IN 0
#define SEG1_HAS_OUT 1
#define SEG1_HAS_TRI 0
#define SEG1_IRQ -1
#define SEG1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEG1_IRQ_TYPE "NONE"
#define SEG1_NAME "/dev/seg1"
#define SEG1_RESET_VALUE 0
#define SEG1_SPAN 16
#define SEG1_TYPE "altera_avalon_pio"


/*
 * seg2 configuration
 *
 */

#define ALT_MODULE_CLASS_seg2 altera_avalon_pio
#define SEG2_BASE 0x3050
#define SEG2_BIT_CLEARING_EDGE_REGISTER 0
#define SEG2_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEG2_CAPTURE 0
#define SEG2_DATA_WIDTH 7
#define SEG2_DO_TEST_BENCH_WIRING 0
#define SEG2_DRIVEN_SIM_VALUE 0
#define SEG2_EDGE_TYPE "NONE"
#define SEG2_FREQ 50000000
#define SEG2_HAS_IN 0
#define SEG2_HAS_OUT 1
#define SEG2_HAS_TRI 0
#define SEG2_IRQ -1
#define SEG2_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEG2_IRQ_TYPE "NONE"
#define SEG2_NAME "/dev/seg2"
#define SEG2_RESET_VALUE 0
#define SEG2_SPAN 16
#define SEG2_TYPE "altera_avalon_pio"


/*
 * seg3 configuration
 *
 */

#define ALT_MODULE_CLASS_seg3 altera_avalon_pio
#define SEG3_BASE 0x0
#define SEG3_BIT_CLEARING_EDGE_REGISTER 0
#define SEG3_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEG3_CAPTURE 0
#define SEG3_DATA_WIDTH 7
#define SEG3_DO_TEST_BENCH_WIRING 0
#define SEG3_DRIVEN_SIM_VALUE 0
#define SEG3_EDGE_TYPE "NONE"
#define SEG3_FREQ 50000000
#define SEG3_HAS_IN 0
#define SEG3_HAS_OUT 1
#define SEG3_HAS_TRI 0
#define SEG3_IRQ -1
#define SEG3_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEG3_IRQ_TYPE "NONE"
#define SEG3_NAME "/dev/seg3"
#define SEG3_RESET_VALUE 0
#define SEG3_SPAN 16
#define SEG3_TYPE "altera_avalon_pio"


/*
 * seg4 configuration
 *
 */

#define ALT_MODULE_CLASS_seg4 altera_avalon_pio
#define SEG4_BASE 0x3030
#define SEG4_BIT_CLEARING_EDGE_REGISTER 0
#define SEG4_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEG4_CAPTURE 0
#define SEG4_DATA_WIDTH 7
#define SEG4_DO_TEST_BENCH_WIRING 0
#define SEG4_DRIVEN_SIM_VALUE 0
#define SEG4_EDGE_TYPE "NONE"
#define SEG4_FREQ 50000000
#define SEG4_HAS_IN 0
#define SEG4_HAS_OUT 1
#define SEG4_HAS_TRI 0
#define SEG4_IRQ -1
#define SEG4_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEG4_IRQ_TYPE "NONE"
#define SEG4_NAME "/dev/seg4"
#define SEG4_RESET_VALUE 0
#define SEG4_SPAN 16
#define SEG4_TYPE "altera_avalon_pio"


/*
 * seg5 configuration
 *
 */

#define ALT_MODULE_CLASS_seg5 altera_avalon_pio
#define SEG5_BASE 0x3020
#define SEG5_BIT_CLEARING_EDGE_REGISTER 0
#define SEG5_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEG5_CAPTURE 0
#define SEG5_DATA_WIDTH 7
#define SEG5_DO_TEST_BENCH_WIRING 0
#define SEG5_DRIVEN_SIM_VALUE 0
#define SEG5_EDGE_TYPE "NONE"
#define SEG5_FREQ 50000000
#define SEG5_HAS_IN 0
#define SEG5_HAS_OUT 1
#define SEG5_HAS_TRI 0
#define SEG5_IRQ -1
#define SEG5_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEG5_IRQ_TYPE "NONE"
#define SEG5_NAME "/dev/seg5"
#define SEG5_RESET_VALUE 0
#define SEG5_SPAN 16
#define SEG5_TYPE "altera_avalon_pio"


/*
 * switch configuration
 *
 */

#define ALT_MODULE_CLASS_switch altera_avalon_pio
#define SWITCH_BASE 0x3060
#define SWITCH_BIT_CLEARING_EDGE_REGISTER 0
#define SWITCH_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SWITCH_CAPTURE 0
#define SWITCH_DATA_WIDTH 4
#define SWITCH_DO_TEST_BENCH_WIRING 0
#define SWITCH_DRIVEN_SIM_VALUE 0
#define SWITCH_EDGE_TYPE "NONE"
#define SWITCH_FREQ 50000000
#define SWITCH_HAS_IN 1
#define SWITCH_HAS_OUT 0
#define SWITCH_HAS_TRI 0
#define SWITCH_IRQ -1
#define SWITCH_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SWITCH_IRQ_TYPE "NONE"
#define SWITCH_NAME "/dev/switch"
#define SWITCH_RESET_VALUE 0
#define SWITCH_SPAN 16
#define SWITCH_TYPE "altera_avalon_pio"

#endif /* __SYSTEM_H_ */
