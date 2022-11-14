/* 

Write a patch to panic the kernel. Capture panic message

*/

#include <linux/kernel.h>
#include <linux/module.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Drupad Joshi");
MODULE_DESCRIPTION("A Simple panic program");

static int test_panic_init(void)
{
    printk(KERN_INFO"%s: In init\n", __func__);
    panic("Hello Kernel I am causing the panic\n");
    return 0;
}

static void test_panic_exit(void)
{
    printk(KERN_INFO"%s: In exit\n", __func__);
}

module_init(test_panic_init);
module_exit(test_panic_exit);

