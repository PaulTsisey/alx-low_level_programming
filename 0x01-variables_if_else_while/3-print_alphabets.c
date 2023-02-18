#include <stdio.h>

/**
 *main - prints in lower case then upper case
 * followed by a nwe line
 *Return: always 0
 */

int main(void)
{
	char a;
	char A;

	a = 'a';
	A = 'A';
	while
		(a <= 'z')
	{
		putchar(a);
		a++;
	}
	while
		(A <= 'Z')
	{
		putchar(A);
		A++;
	}
	putchar('\n');
	return (0);
}
