#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: string destination
 * @src: copied string
 *Return: value to the poiter dest
 */

char *_strcpy(char *dest, char *src)
{
	int m = 0, r;

	while (*src)
	{
		src++;
		m++;
	}
	for (r = 0; r < m; r++)
		src--;
	for (r = 0; r < m; r++)
	{
		dest[r] = *src;
		src++;
	}
	dest[r] = *src;

	return (dest);
}
