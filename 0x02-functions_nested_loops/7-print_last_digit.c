#include "main.h"

/**
 *print_last_digit - Entry point
 *@n: number to check
 *Return: last digit of n
 */

int print_last_digit(int n)
{
	char c = n % 10;
	_putchar(c);
	return (n % 10);
}
