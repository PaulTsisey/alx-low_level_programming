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

	o = '0';
	while
		(o <= 15)
		{
			putchar(o + '0');
			o++;
		}
	putchar('\n');
	return (0);
}
