#include <stdio.h>
/**
 * main - print the name of a program
 * @argc: array size or count
 * @argv: array counting elements
 *
 * Return: zero if successful
 */
int main(int argc, char *argv[])
{
	puts(argv[argc - 1]);
	return (0);
}
