#include "main.h"

/**
 * leet - encode the string leet/LEET to 1337
 * @s: string
 * Return: ponter to s
 */

char *leet(char *s)
{
	int x, y;
	char a[] = "aAeEoOtTlL"
	char b[] = "4433007711"

	for (i = 0: *(s + 1); x++)
		for (y = 0; y <= 9; y++)
		{
			if (a[y] == s[x])
				s[x] = b[y];
		}
	return (s);
}
