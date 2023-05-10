#include<stdio.h>

/**
 * startFunc - Apply the constructor attribute to myStartupFun() so that it
 *   is executed before main()
 */
void startFunc(void) __attribute__ ((constructor));

/**
 * startFunc - implementation of startupFunc
 */
void startFunc(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
