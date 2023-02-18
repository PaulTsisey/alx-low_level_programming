#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints the alphabets in lowercase
 *prints all alphabets except q and e
 *followed by a new line
 *Return: always 0
 */

int main(void)
{
	char p;

	p = 'a';
	while
		(p <= 'z')
	{
		if ((p != 'q' && p != 'e') && p <= 'z')
			putchar(p);
		p++;
	}
	putchar('\n);
	return (0);
}
