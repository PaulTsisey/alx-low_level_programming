#include "main.h"

/**
 * *_strcat - xoncatenates two strings
 * @dest: to be joined by src
 * @src: appends to dest
 * Return: A pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (p);
}
