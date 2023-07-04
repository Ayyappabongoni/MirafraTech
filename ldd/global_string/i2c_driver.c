#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

char s[20]="hello this is string";

EXPORT_SYMBOL(s);

static int starting(void)
{
	printk("i2c driver is starting...\n");
	return 0;
}

static void ending(void)
{
	printk("i2c driver is ending....\n");
	printk("modified string is: %s\n",s);
}

module_init(starting);
module_exit(ending);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("AYAPPA");
MODULE_DESCRIPTION("12345");
