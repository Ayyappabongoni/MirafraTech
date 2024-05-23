#include<linux/kernel.h>
#include<linux/init.h>
#include <linux/module.h>

static int __init start(void)
{
	printk("driver insertde...\n");
	return 0;
}

static void __exit end(void)
{
	printk("driver removed.....");
}
module_init(start);
module_exit(end);


MODULE_LICENSE("GPL");
MODULE_AUTHOR("ME");
MODULE_DESCRIPTION("simple");
