#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
 void i2c_write_fun(int,int);
static int fun(void)
{
	printk("i2c dependency starting...\n");
	i2c_write_fun(2,3);
	return 0;
}

static void clean_up_fun(void)
{
	printk("i2c depenedeny exiting....\n");
}

module_init(fun);
module_exit(clean_up_fun);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("MIRAFRA");
MODULE_DESCRIPTION("simple drive");

