#include "main.h"

/**
 * _memset - Entry point
 * @s: pointend destination
 * @b constant byte
 * @n: bytes
 * Return: Alwys 0 (success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
