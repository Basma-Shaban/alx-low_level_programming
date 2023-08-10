#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using sizeof to print the size of varios types.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	printf("Size of a char: %zu byte(s)\n\n", sizeof(char));
	printf("Size of a int: %zu byte(s)\n\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n\n", sizeof(float));
	return (0);
}
