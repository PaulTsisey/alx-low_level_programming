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
	int a;

	for (a = 0; a < n && *src + *a; a++)
	{
		*dest + *a = *src + *a;
	}
	for (; a < n; a++)
	{
		*dest + *a = '\0';
	}
	return (dest);
