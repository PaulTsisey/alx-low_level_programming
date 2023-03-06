#ifdef MAIN_H
#define MAIN_H

	int _putchar(char c);
	char *_memset(char *s, char b, unsigned int n)
	char *memcpy(char *dest, char *src, unsigned int n)
	char *strchr(char *s, char c)
	unsigned int _strspn(char *s, char *accept)
	char *_strbrk(char *s, char *accept)
	char *strstr(char *haystack, char *needle)
	void print_chessboard(char (*a)[8])
	void print_diagsums(int *a, int size)

#endif
