#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * @n - a variable assigned a random number each time the program is executed
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	for (n = 0; n > 0; n++)
		printf ("n,\n");

	return (0);
}
