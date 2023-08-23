#include "main.h"

/**
* rot13 - encodes a string into rot13.
* @r: string to encode.
* Return: Address of r.
*/

char *rot13(char *r)
{
	int i, j;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(r + i); i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[j] == *(r + i))
			{
				*(r + i) = b[j];
				break;
			}
		}
	}
	return (r);
}
