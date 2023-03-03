#include "mai.h"

/**
 * _strcomp - compares two strings
 * @s1: string one to be compared 
 * @s2; string two to be compared
 * Return: value after subtracting the strings
 */

int _strcmp(char *s1, char *s2)
{
	while (((*s1 != '\0') && (*s2 != '\0')) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 - *s2);
}
