#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char is %zu byte(s)\n", sizeof(char));
	printf("Size of an integer is %zu byte(s)\n", sizeof(int));
	printf("Size of a float is %zu byte(s)\n", sizeof(float));
	printf("Size of a double is %zu byte(s)\n", sizeof(double));
	printf("Size of a long integer is %zu byte(s)\n", sizeof(long int));
	return (0);
}

