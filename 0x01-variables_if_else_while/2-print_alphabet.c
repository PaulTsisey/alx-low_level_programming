#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints th alphabets in lower case
 *followed by a new line
 *Return: always 0
 */

int main(void)
{
	char alph = 'a';

	while
		(alph <= 'z')
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');

	return (0);
}
