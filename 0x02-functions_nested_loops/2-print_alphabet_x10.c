#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - prints all alphabets in lowercase ten times
 */
void print_alphabet_x10(void)
{
	int i = 0;
	int j;
	while(i < 10)
	{
		j = 'a';
		while(j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
