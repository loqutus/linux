/* 
 * Hello World kernel module
 *
 * Copyright (C) 2014 Ruslan Gustomyasov <rusik@4ege.ru>
 *
 * Released under the GPL version 2 only.
 *
 */

#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

MODULE_LICENSE ("GPL");
MODULE_AUTHOR ("Ruslan Gustomyasov");
MODULE_DESCRIPTION ("A Hello World module");

static int __init hello_world_init(void)
{
        printk(KERN_DEBUG "Hello World!\n");
        return 0;
}

static void __exit hello_world_exit(void)
{
	printk(KERN_DEBUG "Goodbye World!\n");
}

module_init(hello_world_init);
module_exit(hello_world_exit);
