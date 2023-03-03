#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: string to be changed
 * @Return: string
 */

char *string_toupper(char *s)
{
	int p;

	for (p = 0; s[p] !='\0'; p++)
	{
		if (s[p] >= 'a'; s[p] <= 'z')
				s[p] = s[p] - 32;
	}
	return (s);
}
