#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * followed by a new line
 * @a: array to be printed
 * @n: elements in array
 * Return: void
 */

void print_array(int *a, int n)
{
	int m = 0;

	while (m < n)
	{
		printf("%d", a[m]);
		if (m != (n - 1))
			printf(", ");
			m++;
	}
	_putchar('\n');
}
