#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

void i2c_write_fun(int,int);
EXPORT_SYMBOL(i2c_write_fun);

void i2c_write_fun(int a,int b)
{
	int c;
	printk("this is i2c write fun\n");
	c=a+b;
	printk("add:%d\n",c);
}
static int function(void)
{
	printk("hello this is i2c driver starting....\n");
	return 0;
}

static void cleanup(void)
{
	printk("i2c driver exyting......\n");
}

module_init(function);
module_exit(cleanup);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("MIRAFRA");
MODULE_DESCRIPTION("AAAA");


