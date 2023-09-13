#include "main.h"

/**
  * print_alphabet - function to make the alphabet in lowercase
  *
  * Return: void
  */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
