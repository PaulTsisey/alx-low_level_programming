#include "main.h"

/**
 * _isalpha - Checkes for alphabetic character
 * @c: The character to be checked
 * Returns: 1 for _isalpha or 0 for anything else
 */

int _isalpha(int c)

{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
	return (1);
	}
	return (0);
}
