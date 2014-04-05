obj-m += hello.o
	KERNEL_VER ?= $(shell uname -r)
	KERNEL_DIR ?= /lib/modules/$(KERNEL_VER)/build

all:
	make -C $(KERNEL_DIR) M=$(PWD) modules

clean:
	make -C $(KERNEL_DIR) M=$(PWD) clean
