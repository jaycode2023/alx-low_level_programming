#include "main.h"

/**
 * _strcmp - compares pointers to two strings.
 * @s1: A pointer to the first string to bve compared.
 * @s2: A pointer to the second string to be compared.
 * Return: If str1 < str2, the negative differemce of the first unmatched characters.
 * if str1 == str2, 0.
 * if str1 > str2, positive difference of the first unmatched characters. 
 *
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 -  *s2);

}
