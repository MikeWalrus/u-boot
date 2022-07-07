#ifndef __SOC_UP_CONFIG_H
#define __SOC_UP_CONFIG_H

/*--------------------------------------------
 * CPU configuration
 */
/* CPU Timer rate */
#define CONFIG_SYS_MIPS_TIMER_FREQ 10000000

/*----------------------------------------------------------------------
 * Memory Layout
 */

/* SDRAM Configuration (for final code, data, stack, heap) */
#define CONFIG_SYS_SDRAM_BASE 0x80000000
#define CONFIG_SYS_SDRAM_SIZE 0x8000000 /* 128 Mbytes */
#define CONFIG_SYS_INIT_SP_ADDR                                                \
  (CONFIG_SYS_SDRAM_BASE + CONFIG_SYS_SDRAM_SIZE - 0x1000)

/*----------------------------------------------------------------------
 * Commands
 */
//#define CONFIG_SYS_LONGHELP		/* undef to save memory */

/*------------------------------------------------------------
 * Console Configuration
 */
#define CONFIG_SYS_CBSIZE 1024 /* Console I/O Buffer Size   */
#define CONFIG_SYS_MAXARGS 16  /* max number of command args*/

/* -------------------------------------------------
 * Environment
 */
/* ---------------------------------------------------------------------
 * Board boot configuration
 */
#define CONFIG_TIMESTAMP /* Print image info with timestamp */

// #define DEBUG

#endif /* __SOC_UP_CONFIG_H */
