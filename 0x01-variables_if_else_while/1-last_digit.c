#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	{
		int n;
		int last_digit;
		char *state;

		srand(time(0));
		n = rand() - RAND_MAX / 2;

		last_digit = n % 10;

		if (last_digit == 0)
		{
			state = "and is 0";
		}
		else
		{
			if (last_digit < 6)
			{
				state = "and is less than 6 and not 0";
			}
			else
			{
				state = "and is greater than 5";
			}
		}

		printf("Last digit of %i is %d %s\n", n, last_digit, state);

		return (0);
	}
}
