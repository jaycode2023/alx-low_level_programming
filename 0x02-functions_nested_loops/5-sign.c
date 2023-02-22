#include "main.h"

/**
 * print _sign - prints the sign of a number
 * @n:The number of which the sign will be printed
 * Return: 1 for possitive num, -1 for negative num or zero for anything else
 */

int print_sign(int n)

{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
