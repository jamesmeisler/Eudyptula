/*
 * Hello World 1
 * Exercise 1
 */

#include <linux/module.h>
#include <linux/kernel.h>

int init_module(void) {	
	printk(KERN_DEBUG "Hello world!\n");
	return 0;
}

void cleanup_module(void) {
	printk(KERN_DEBUG "Unloading Exercise 1 Kernel Module!\n");
}