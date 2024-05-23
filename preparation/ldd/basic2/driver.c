#include<linux/kernel.h>
#include<linux/init.h>
#include<linux/module.h>


static int __init start(void)
{
printk("this is init fun starting....");
printk("this is init fun ending....");
return 0;
}

static void __exit end(void)
{
printk("this is exit fun starting....");
printk("this is exit fun ending....");
}

module_init(start);
module_exit(end);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("aBHI");
MODULE_DESCRIPTION("simple");
