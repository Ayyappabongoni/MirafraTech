#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
//#include<string.h>

extern char s[];

static int starting(void)
{
	printk("i2c dependency driver is starting...\n");
	printk("string:%s\n",s);
	return 0;
}

static void ending(void)
{
	int i=0;
	for(i=0;i<20;i++)
	{
		s[i]='X';
	}
	s[i]=0;

	printk("i2c dependency driver is exiting....\n");
}

module_init(starting);
module_exit(ending);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("MIRAFRA");
MODULE_DESCRIPTION("AAAA");

