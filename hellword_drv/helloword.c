#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

#define AUTHOR  "100ASK"
#define DESC    "Hello World driver"

static int __init init(void)
{
    printk(KERN_DEBUG "Hello World\n");
    return 0;
}

static void __exit deinit(void)
{
    printk(KERN_DEBUG "Goodbye World\n");
}

module_init(init);
module_exit(deinit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR(100askTeam);
MODULE_DESCRIPTION(HelloWord);
