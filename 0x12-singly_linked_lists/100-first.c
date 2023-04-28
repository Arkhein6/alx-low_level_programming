#include<stdio.h>

/**
 * startFunc - prints a string automatically before the main function using the constructor attribute
 *
 */
void __attribute__((constructor)) startFunc(void){
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n")
}
