#include <linux/module.h>
#include "md.h"

static int __init oneshot_init( void )
{
	extern int sys_close( int fd );
	void* Addr;
	Addr = (void*)sys_close;
	pr_info("OneShot: sys_close address: %p\n", Addr );
	pr_info("OneShot: %s\n", test_01() );
	pr_info("OneShot: %s\n", test_02() );
	return -1;
}

module_init(oneshot_init);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Dmitry");
