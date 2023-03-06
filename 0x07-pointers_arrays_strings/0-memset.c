#include "main.h"

/**
 * _meset - a function that fills memory with a constant byte
 * the function fills the first n bytes of the memory area pointed by s wuth
 * the constant b
 * @n: memory area pointed by s
 * @s: constant byte
 * @b: points memory area
 * Return: a pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned in n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
