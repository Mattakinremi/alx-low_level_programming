#include <stdio.h>
/**
 * main -is the entry point for the program.
 *
 * Return:zero if no error, Non-zero if errors.
 */
int main(void)
{
	pritnf("size of char: %zu byte(s)\n", sizeof(char));
	printf("size of an int: %zu byte(s)\n", sizeof(int));
	printf("size of a long int: %zu bytes(s)\n", sizeof(long int));
	printf("size of a long long int: %zu byte(S)\n", sizeof(long long int));
	printf("size of a float: %zu byte(s)\n", sizeof(float));
	return (0);
}
