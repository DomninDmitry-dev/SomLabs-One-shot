#include <linux/module.h>

static int __init oneshot_init( void )
{
	extern int sys_close( int fd );
	void* Addr;
	Addr = (void*)sys_close;
	pr_info("OneShot: sys_close address: %p\n", Addr );
	return -1;
}

module_init(oneshot_init);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Dmitry");
