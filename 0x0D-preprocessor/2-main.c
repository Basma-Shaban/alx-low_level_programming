#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the name of the file of the program
 *        was compiled from, followed by a new line.
 * Return: Alaways 0.
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
