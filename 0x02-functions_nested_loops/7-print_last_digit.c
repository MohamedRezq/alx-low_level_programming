#include "main.h"

/**
 *print_last_digit - Entry point
 *@n: number to check
 *Return: last digit of n
 */

int print_last_digit(int n)
{
	_putchar(n % 10);
	return (n % 10);
}
