#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest : src to be joined to
 * @src: appends to dest
 * @n: number of bytes
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
	{
		continue;
	}
	for (y = 0; src[0] != '\0' && y <= n; y++)
	{
		dest[x + y] = src[y];
	}
	dest[x + y] = '\0';
	return (dest);
}
