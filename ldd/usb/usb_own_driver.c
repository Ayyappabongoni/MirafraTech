#include<linux/kernel.h>
#include<linux/module.h>
#include<linux/usb.h>
#include<linux/init.h>

#define vender_id	0x0781
#define product_id	0x558A


static const struct usb_device_id my_id_table [] ={
	{ USB_DEVICE(vender_id,product_id) },////This USB_DEVICE is used to create a struct usb_device_id that matches a specific device
	{},
};
/*this MODULE_DEVICE_TABLE macro is necessary to allow user-space
  tools to figure out what devices this driver can control. But for USB drivers, the string
  usb must be the first value in the macro*/
MODULE_DEVICE_TABLE(USB,my_id_table);

static int my_probe (struct usb_interface *intf,const struct usb_device_id *id)
{
	printk("..prob function invoked..");
	return 0;
}

static void my_disconnect (struct usb_interface *intf)
{

	printk("..disconnect function invoked..");
}


static struct usb_driver my_driver ={
	.name="ABHI_USB_DRIVER",
	.probe=my_probe,
	.disconnect=my_disconnect,
	.id_table=my_id_table,
};

static int __init start_function(void)
{
	/*register our driver with usb subsystem*/
	printk("Enter to Start\n");
	usb_register(&my_driver);
	printk("exit of start \n");
	return 0;
}

static void __init exit_function(void)
{
	/*unregister our driver with usb subsystem*/
	printk("enter to exit\n");
	usb_deregister(&my_driver);
	printk("exit \n");
}

module_init(start_function);
module_exit(exit_function);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("ABHI");
MODULE_DESCRIPTION("own usb driver implementation");


