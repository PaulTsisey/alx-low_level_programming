#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all the number of base 16 in lowercase
 * followed by a new line
 * Return: always 0
 *
 */

int main(void)
{
	int o;
	char p;

	o = '0';
	p = 'a';
	while
		(o < 9)
		{
			putchar(o + '0');
			o++;
		}
	while
		(p <= 'f')
		{
			putchar(p);
			p++;
		}
	putchar('\n');
	return (0);
}
