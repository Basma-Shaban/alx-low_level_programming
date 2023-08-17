#include <stdio.h>

/**
 * main - causes an infinite loop
 *
 *      while (i < 10)
 *{
 *      putchar(i);
 *}
 *
 * Description: using printf function to print both "Infinite loop incoming :("
 *		and in the next line print "Infinite loop avoided! \o/"
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");
	i = 0;

	while (i < 10)
{
	putchar(i);
}

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
