#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char y;
	int i;

	i = 0;

	while (i < 10)
	{
		y = 'a';
		while (y <= 'z')
		{
			_putchar(y);
			y++;
		}
		_putchar('\n');
		i++;
	}
}
