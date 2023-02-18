#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints all possible combinations of two digits
 *numbers must be separated by , and space
 *numbers must be printed in ascending order
 *Return: Always 0
 */

int main(void)
{
	int p;

	p = '0';
	for (p = 0; p < 100; p++)
	{
		putchar((p % 10) + '0');
	}
	if (p < 90)
	{
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
