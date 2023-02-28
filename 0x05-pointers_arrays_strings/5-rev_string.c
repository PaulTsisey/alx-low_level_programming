#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 * Reurn: void
 */

void rev_string(char *s)
{
	int count = 0, i = 0;
	char x;

	while (*s)
	{
		s++;
		count++;
	}
	for (i =0; i < count; i++)
		s--;
	for (i = 0; i < (count / 2); i++)
	{
		int p = count - 1;
		x = s[last - i];
		s[last -i] = s[i];
		s[i] = x;
	}
}
