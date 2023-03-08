#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string
 * Return: string length
 */

int _strlengh_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
