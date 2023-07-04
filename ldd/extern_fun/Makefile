obj-m := i2c_driver.o
obj-m += i2c_drive_dependency.o
all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD)
clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean

