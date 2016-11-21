#include <linux/module.h>

/*
 * sudo insmod hello-parameter.ko whom="Jeff" how_many_times=5
 *
 * it will print 5 times Jeff.
 *
 */
static char *whom = "World";
static int how_many_times = 1;
module_param(whom, charp, S_IRUGO);
module_param(how_many_times, int, S_IRUGO);

/* module_param(name, type, perm);
 *
 * name: the name of your variable
 * type: bool, invbool, charp, int, long, short
 *       uint, ulong, ushort
 * perm: permission, defined in linux-source/include/stat.h
 * 		 S_IRUGO = (S_IRUSR|S_IRGRP|S_IROTH), User/Group/Other
 *
 *
 * module_param_array(name, type, num, perm);
 *
 */
static int __init hello_init(void)
{
	int i;

	/* it prints many times whom */
	for(i=0; i<how_many_times; i++)
		pr_info("(%d) Hello, %s\n", i, whom);
	
    return 0;
}

static void __exit hello_exit(void)
{
	pr_info("Goodbye\n");
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_DESCRIPTION("Hello demo with parameter");
MODULE_LICENSE("GPL");
