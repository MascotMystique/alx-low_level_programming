#include <stdio.h>

/**
 * main - Entry point
 * sizeof - function that prints sizes of data types
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char is: %lu.\n", (unsigned long)sizeof(a));
	printf("Size of an int is: %lu.\n", (unsigned long)sizeof(b));
	printf("Size of a long int is: %lu.\n", (unsigned long)sizeof(c));
	printf("Size of a long long int is: %lu.\n", (unsigned long)sizeof(d));
	printf("Size of a float is: %lu.\n", (unsigned long)sizeof(e));

	return (0);
}
