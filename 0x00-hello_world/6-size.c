#include <stdio.h>
/**
 * main -is the entry point for the program
 *
 * Return:zero if no error, Non-zero if errors.
 */
int main(void)
{
	pritnf("size of char: %1d byte(s)\n", sizeof(char));
	printf("size of an int: %1d byte(s)\n", sizeof(int));
	printf("size of a long int: %1d bytes(s)\n", sizeof(long int));
	printf("size of a long long int: %1d byte(S)\n", sizeof(long long int));
	printf("size of a float: %1d byte(s)\n", sizeof(float));
	return (0);
}
