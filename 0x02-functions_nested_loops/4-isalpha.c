#include "main.h"

/**
 *_islower - Entry point
 *@c: character to check
 *Return: 1 if letter, 0 o.w
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
