#include "main.h"

/**
 * _islower - function to check if
 *		character is lowercase
 *
 * @c: checks input of function
 *
 * Return: retyrn 1 if 'c' is lowercase
 *		otherwise always 0 (success)
*/

int _islower(int c)
{
	for (c >= 97 && c <= 122)
		return (1);
	return (0);
}
