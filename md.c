/*
 * md.c
 *
 *  Created on: Mar 11, 2019
 *      Author: dmitry
 */

#include "md.h"

static char retpref[] = "this string returned from ";

char* test_01( void )
{
	static char res[ 80 ];
	strcpy( res, retpref );
	strcat( res, __FUNCTION__ );
	return res;
};
EXPORT_SYMBOL( test_01 );

char* test_02( void )
{
	static char res[ 80 ];
	strcpy( res, retpref );
	strcat( res, __FUNCTION__ );
	return res;
};
EXPORT_SYMBOL( test_02 );

static int __init initmod( void )
{
	return 0;
}
module_init( initmod );

static void __exit exitmod( void )
{
}
module_exit( exitmod );

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Dmitry");
