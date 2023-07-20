#include <stdio.h>
/**
 * main - prints alphabet in lowercase
 *
 * Return: Always o
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		putchar(alph);
	putchar('\n');

	return (0);
}
