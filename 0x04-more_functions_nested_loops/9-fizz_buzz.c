#include <stdio.h>
#include "maun.h"

/**
 * main - prints the numbers from 0 to 100
 * followed by a new line
 * but multiples of three prints Fizz instead of the number
 * for the miltiples of five prints Buzz
 * print FizzBuzz for multiples of both three and five
 * Return: Always 0.
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 != 0)
		{
			printf("Fizz ");
		}
		else if (num % 5 == 0 && num % # != 0)
		{
			printf("Buzz ");
		}
		else if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", num);
		}
	}
}
