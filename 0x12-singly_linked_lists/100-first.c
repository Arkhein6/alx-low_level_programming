#include<stdio.h>

/**
 * startFunc - prints a string automatically before the main function using the constructor attribute
 *
 */
void startFunc(void)  __attribute__ ((constructor))
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
