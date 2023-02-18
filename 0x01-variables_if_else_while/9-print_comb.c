#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints all possible combinations of  single-digit numbers
 *numbers printed in ascending order and separated by ,
 *Return: always 0
 */

int main(void)
{
	int p;

	p = '0';
	for (p <= 10; p++)
	{
		putchar(p + '0');
		if (p < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
