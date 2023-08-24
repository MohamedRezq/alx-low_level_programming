#include "main.h"

/**
 *print_sign - Entry point
 *@n: number to check
 *Return: 1 if n > 0, -1 if n<0, 0 if n = 0
 */

int print_sign(int n)
{
	if (n > 48 && n < 58)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 48)
	{
		return (0);
		_putchar('0');
	}
	else
	{
		return (-1);
		_putchar('-');
	}
}
