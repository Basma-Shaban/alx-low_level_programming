#include <stdio.h>

/**
 * File: 100-first.c
 *
 * Auther: Basma Shaban Ali
 */

/**
 * bmain - Function executed before main.
 *
 * This function is executed before the main() function.
 * It can be used to initialize the kernel or to perform other tasks
 * that need to be done before the main application starts running.
 *
 * Return:
 *   None.
 */
void __attribute__ ((constructor)) bmain(void)
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}

