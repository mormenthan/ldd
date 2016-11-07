#include <linux/module.h>

static int __init hello_init(void)
{
    printk(KERN_INFO "Hello\n");
	//next line also can print "Hello"
    //pr_info("Hello\n");
    return 0;
}

static void __exit hello_exit(void)
{
    printk(KERN_INFO "Goodbye\n");
	//pr_info("Goodbye\n");
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_DESCRIPTION("Hello World !");
MODULE_LICENSE("GPL");
