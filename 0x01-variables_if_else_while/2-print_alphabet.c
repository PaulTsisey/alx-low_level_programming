#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabet in lower case
 *followed by a new line
 *Return: always 0
 */

int main(void)
{
	char locase;

	for (locase = 'a'; locase <= 'z'; locase++)
	{
		putchar(locase);
	}
	putchar(\n);
	return (0);
}
