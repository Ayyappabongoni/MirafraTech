#include<linux/kernel.h>
#include<linux/device.h>
#include<linux/init.h>
#include<linux/fs.h>
#include<linux/cdev.h>
#include<linux/module.h>
#include<linux/uaccess.h>

static int my_open(struct inode *, struct file *);
static ssize_t my_read(struct file *, char __user *, size_t, loff_t *);
static ssize_t my_write(struct file *, const char __user *, size_t, loff_t *);
static int my_close(struct inode *, struct file *);

/*struct cdev var*/
struct cdev cdev_var;

//struct class ptr 
static struct class *k_class;


/*file operation structure*/
static struct file_operations fops =
{
	.owner=THIS_MODULE,
	.open =my_open,
	.read =my_read,
	.write =my_write,
	.release =my_close,
};


/*my open*/
static int my_open(struct inode *inode , struct file *file)
{
	printk("open function started..\n");
	return 0;
}

char s[3][20];//var to store receve data
/*my read*/
int j=-1;
int i=-1;
static ssize_t my_read(struct file *flip, char __user *buffer, size_t length, loff_t *off)
{
	printk("read function started...\n");
	copy_to_user(buffer,s[++j],length);//kernel to user
	printk("data send to usr file is %s\n",buffer);
	if(j==2)
	{
	i=-1;
	j=-1;
	}
	return length;
}

/*my write*/
static ssize_t my_write(struct file *flip, const char __user *buffer, size_t length, loff_t *off)
{
	printk("write function started...\n");
	printk("receved data is %s\n",buffer);
	copy_from_user(s[++i],buffer,length);//user to kernel
	printk("cpy data is %s\n",s[i]);
	return 0;
}

static int my_close(struct inode *inode, struct file *file)
{
	printk("release function started...\n");
	return 0;
}

dev_t dev_no;
static int __init start_fun(void)
{

	//step 1 creating major and minor number
	alloc_chrdev_region(&dev_no,0,1,"MY_D");

	printk("alloc sucessfull Major = %d Minor = %d \n",MAJOR(dev_no), MINOR(dev_no));

	//step 2 
	cdev_alloc();

	//step 3 cdev initalize
	cdev_init(&cdev_var,&fops);

	// step 4 regestration with vfs
	cdev_add(&cdev_var,dev_no,1);

	//class create
	k_class=class_create(THIS_MODULE,"my_class");

	//device create
	device_create(k_class,NULL,dev_no,NULL,"MY_D");
	return 0;
}



static void __exit end_fun(void)
{
	device_destroy(k_class,dev_no);
	class_destroy(k_class);
	cdev_del(&cdev_var);
	unregister_chrdev_region(dev_no,1);
	printk("sucessfully exiting\n");
}
module_init(start_fun);
module_exit(end_fun);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("ABHI");
MODULE_DESCRIPTION("a char driver sample");
