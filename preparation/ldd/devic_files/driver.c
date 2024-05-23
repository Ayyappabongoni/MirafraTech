#include<linux/kernel.h>
#include<linux/device.h>
#include<linux/init.h>
#include<linux/fs.h>
#include<linux/cdev.h>
#include<linux/module.h>
#include<linux/uaccess.h>

//struct cdev var
struct cdev cdev_var;

//major minor
dev_t dev_no;

static struct class *k_class;//class create

char s[100];//global var
static ssize_t my_read (struct file *, char __user *, size_t, loff_t *);
static ssize_t my_write (struct file *, const char __user *, size_t, loff_t *);
static int my_open (struct inode *, struct file *);
static int my_close (struct inode *, struct file *);

static struct file_operations fops =
{

	.owner=THIS_MODULE,
	.open=my_open,
	.write=my_write,
	.read=my_read,
	.release=my_close,
};

static ssize_t my_read(struct file *file, char __user *buffer, size_t l, loff_t *off_set)
{
	int x;
	printk("thsi is read function....\n");
	x=copy_to_user(buffer,s,l);
	return x;
}
static ssize_t my_write(struct file *file, const char __user *buffer, size_t l, loff_t *off_set)
{
int x;
printk("kamal\n");
	printk("thsi is write function.....\n");
	x=copy_from_user(s,buffer,l);
	return x;
}
static int my_open(struct inode *inode, struct file *file)
{
	printk("thsi is open abhi function....\n");
	return 0;
}
static int my_close(struct inode *inode, struct file *file)
{
	printk("thsi is close function.....\n");
	return 0;
}

static int __init start(void)
{
	printk("init fun started....\n");
	//step1 create major and minior
	alloc_chrdev_region(&dev_no,0,1,"ABHI");
	printk("major = %d minir = %d\n",MAJOR(dev_no),MINOR(dev_no));

	cdev_alloc();
	cdev_init(&cdev_var,&fops);
	cdev_add(&cdev_var,dev_no,1);
	
	k_class=class_create(THIS_MODULE,"string");
	device_create(k_class,NULL,dev_no,NULL,"ABHI");
	return 0;
}

static void __exit end(void)
{
	printk("exit fun started....\n");
	device_destroy(k_class,dev_no);
	class_destroy(k_class);
	cdev_del(&cdev_var);
	unregister_chrdev_region(dev_no,1);
	printk("sucessfull exiting...\n");
}

module_init(start);
module_exit(end);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("abhi");
MODULE_DESCRIPTION("device files");

