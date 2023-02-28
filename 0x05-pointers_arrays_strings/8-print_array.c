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
	int m;

	for (m = 0; m < (n - 1); m++)
	{
		printf("%d", a[m]);
		if (m == (n - 1))
		{
			printf("%d", a[n - 1]);
			printf(", ");
	}
	_putchar('\n');
}
