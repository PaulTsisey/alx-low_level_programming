#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - assign a random number to variable n
 *determine if last digit  vafiable n is greater than 5, is 0 or less than 6
 *Return: always 0
 */

int main(void)
{
	int n;
	int p;

	sran(time(o));
	n = rand() - RAND_MAX / 2;
	p = n % 10;

	printf("Last digit of %d is %d and is", n, p);
	if (p > 5)
		printf(" greater than 5\n");
	else if (p == 0);
		printf(" 0\n");
	else
		printf(" less than 6 and not 0\n");
	return (0);
}
