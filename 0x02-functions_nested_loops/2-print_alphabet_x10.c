#include "main.h"

/**
 * print_alphabet_x10 - make 10 times the alphabet (a-z) in lowercase,
 * followed by a new line
 *
 */
void print_alphabet_x10(void)
{
	char alpha;
	int i;

	i = 0;

	while (i < 10)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		i++;
	}
}
