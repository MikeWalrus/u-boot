#include <config.h>
#include <asm/global_data.h>

DECLARE_GLOBAL_DATA_PTR;

int dram_init(void)
{
	gd->ram_size = CONFIG_SYS_SDRAM_SIZE;
	return 0;
}
