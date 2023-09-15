#include "main.h"
#include <stdio.h>

/**
 * main - Print the numbers from 1-100, followed by a newline
 * 	But for multiples of three print Fizz instead of the number
 * 	and for the multiples of five print Buzz
 * 	For numbers which are multiples of both three and five print FizzBuzz
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num ++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
			printf("FizzBuzz");
		else if ((num % 3) == 0)
			printf("Fizz");
		else if ((num % %) == 0)
			printf("Buzz");

		else
			printf("%d", num);

		if (num == 100)
			continue;

		printf(" ");
	}
	printf("\n");

	return (0);
}

