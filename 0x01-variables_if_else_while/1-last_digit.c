#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assign random number
 * checks if the last digit of the number is greater than 5, 0 or less than 6.
 *
 * Return: Always 0
 */
int main(void)
{
	int LD;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	LD = n % 10;

	if (LD > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, LD);
	else if (LD == 0)
		printf("Last digit of %d id %d and is 0\n", n, LD);
	else
		printf("Last digit of %d is %d and is less than and not 0\n", n, LD);
	return (0);
}
