#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int a;
	char hexa;

	for (a = '0'; a <= '9'; a++)
		putchar(a);
	for (hexa = 'a'; hexa <= 'f'; hexa++)
		putchar(hexa);
	putchar('\n');

	return (0);
}
