#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>



MODULE_LICENSE("GPL");
MODULE_AUTHOR("Sandeep");
MODULE_DESCRIPTION("Driver Module");



static int hello_init(void){
  printk("Hello Kernel World!\n");
  return 0;
}

static void hello_exit(void){
  printk("Exit Kernel!\n");
}


module_init(hello_init);
module_exit(hello_exit);


