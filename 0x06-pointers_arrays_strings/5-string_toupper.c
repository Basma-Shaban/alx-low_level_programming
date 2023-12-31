#include "main.h"

/**
* string_toupper - Changes all lowercase letters of a string to uppercase.
* @c: string to changed.
* Return: String with all letters uppercase.
*/

char *string_toupper(char *c)
{
	int i = 0;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] = c[i] - 'a' + 'A';
	}
	return (c);
}
