#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Main - Entry point
 *
 * assigns a random number to the variable n
 * variable n store a different value everytime the programe is run
 *
 * Retuern: Always 0
 */

int main(void)
{
	int n;
	int p;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	p = n % 10;

	if (p > 5)
	{
		printf("Last digit of %d is %d and greater than 5\n", n, p);
	}
	else if (p == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, p);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, p);
	}

	return (0);
}
