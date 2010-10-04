#ifndef _CONFIG_H
#define _CONFIG_H

#define VER		"0.0.1"
#define IN_AHBRAM    __attribute__ ((section(".ahbram")))

#define SDCARD_DETECT		(1)
#define SDCARD_WP		(0)
#define SD_SUPPLY_VOLTAGE	(1L<<21) /* 3.3V - 3.4V */
#define CONFIG_SD_BLOCKTRANSFER 1
#define CONFIG_SD_AUTO_RETRIES	10
// #define CONFIG_SD_DATACRC	1


#define CONFIG_UART_NUM			3
#define CONFIG_CPU_FREQUENCY		90315789
#define CONFIG_UART_PCLKDIV		1
#define CONFIG_UART_TX_BUF_SHIFT	5
#define CONFIG_UART_BAUDRATE		921600
#define CONFIG_UART_DEADLOCKABLE

#define SPI_SD				1
#define SPI_FPGA			0

#define SSP_CLK_DIVISOR_FAST 4
#define SSP_CLK_DIVISOR_SLOW 250
#define SSP_CLK_DIVISOR_FPGA_FAST 6
#define SSP_CLK_DIVISOR_FPGA_SLOW 16

#define SNES_RESET_REG      LPC_GPIO1
#define SNES_RESET_BIT      29
/* XXX Rev.B: 1.26 */
#define SNES_CIC_D0_REG     LPC_GPIO1
#define SNES_CIC_D0_BIT     26
/* XXX Rev.B: 0.1 */
#define SNES_CIC_D1_REG     LPC_GPIO1
#define SNES_CIC_D1_BIT     25
/* XXX Rev.B: 0.0 */
#define SNES_CIC_STATUS_REG LPC_GPIO0
#define SNES_CIC_STATUS_BIT 1
/* XXX Rev.B: 1.29 */
#define SNES_CIC_PAIR_REG   LPC_GPIO0
#define SNES_CIC_PAIR_BIT   0
/* XXX Rev.B: 1.25 */

#define QSORT_MAXELEM   1024

#endif