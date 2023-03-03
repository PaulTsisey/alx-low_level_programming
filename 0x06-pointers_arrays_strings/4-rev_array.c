#include "main.h"

/**
 * reverse array - reverses the content of an array of integers
 * @a: pointer
 * @n: number of elements of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int b, index;

	for (index = n - 1; index >= n/2; index--)
	{
		b = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
