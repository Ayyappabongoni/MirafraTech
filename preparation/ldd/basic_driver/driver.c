#include<linux/kernel.h>
#include<linux/init.h>
#include<linux/module.h>

static int __init start(void)
{
	printk("this is init functio\n");
	return 0;
}

static void __exit end(void)
{
	printk("this is exit function\n");
}

module_init(start);
module_exit(end);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("abhi");
MODULE_DESCRIPTION("simple driver");
