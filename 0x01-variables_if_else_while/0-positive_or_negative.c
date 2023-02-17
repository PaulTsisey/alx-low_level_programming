#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 *main - assigns random number to the variable n
 *print whether the number stored in variable n is positive, negative or 0
 *Return: Always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
