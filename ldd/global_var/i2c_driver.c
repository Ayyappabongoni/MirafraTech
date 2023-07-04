#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

int a=10;
EXPORT_SYMBOL(a);

static int function(void)
{
        printk("hello this is i2c driver starting....\n");
        return 0;
}

static void cleanup(void)
{
        printk("i2c driver exyting......\n");
	printk("modified a val is %d\n",a);
}

module_init(function);
module_exit(cleanup);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("MIRAFRA");
MODULE_DESCRIPTION("AAAA");


