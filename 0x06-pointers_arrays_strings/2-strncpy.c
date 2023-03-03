#include "main.h"

/**
 * _strncopy - copues a string
 * @dest: were string is copied to
 * @dest: source string
 * @n: number of bytes to be copied
 * Return: pointer to the string destination.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (src[a++])
		b++;
	for (a = 0; src[a] && a < n; a++)
		dest[a] = src[a];
	for (a = b; a < n; a++)
		dest[a] = '\0';

	return (dest);
}
