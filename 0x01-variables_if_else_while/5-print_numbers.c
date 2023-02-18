#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints all single digit numbers of base 10 starting from 0
 *followed by a new line
 *Return:always 0
 */

int main(void)
{
	int p;

	p = '0';
	for (p = '0'; p <= 10; p++)
		putchar(p);
	putchar('\n');

	return (0);
}
