 #include <linux/module.h>
 #include <linux/kernel.h>
 #include <linux/init.h>
 extern int a;
 static int fun(void)
 {
         printk("i2c dependency starting...\n");
         printk("%d\n",a);
         return 0;
 }
 
 static void clean_up_fun(void)
 {
	a=20;
         printk("i2c depenedeny exiting....\n");
 }
 
 module_init(fun);
 module_exit(clean_up_fun);
 
 MODULE_LICENSE("GPL");
 MODULE_AUTHOR("MIRAFRA");
 MODULE_DESCRIPTION("simple drive");
 

