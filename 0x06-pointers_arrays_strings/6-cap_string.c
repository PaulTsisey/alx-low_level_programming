/**
 * cap_string - capitalizes all words of a string.
 * @str: string to be capitalized
 * Return: s pointer
 */
char *cap_string(char *s)
{
	int p = 0;

	while (s[p])
	{
		while (!(s[p] >= 'a' && s[p] <= 'z'))
			p++;

		if (s[p - 1] == ' ' ||
			s[p - 1] == '\t' ||
			s[p - 1] == '\n' ||
			s[p - 1] == ',' ||
			s[p - 1] == ';' ||
			s[p - 1] == '.' ||
			s[p - 1] == '!' ||
			s[p - 1] == '?' ||
			s[p - 1] == '"' ||
			s[p - 1] == '(' ||
			s[p - 1] == ')' ||
			s[p - 1] == '{' ||
			s[p - 1] == '}' ||
			p == 0)
			s[p] -= 32;

		p++;
	}

	return (s);
}
