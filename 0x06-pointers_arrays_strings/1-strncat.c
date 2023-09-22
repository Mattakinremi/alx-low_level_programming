#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: destination string
 * @src: source string
 * @n: no. of character to be concatnated.
 *
 * Return: concatnated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int count1 = 0, count2;

	while (*(dest + count1) != '\0')
		count1++;

	for (count2 = 0 ; count2 < n && src[count2] != '\0' ; count2++)
		dest[count1 + count2] = src[count2];

	dest[count1 + count2] = '\0';

	return (dest);
}
