#include "main.h"
/**
 * _strncat - concatenate strings, defining the size of second string.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * @n: size of second string
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int lengthA, lengthS;

	lengthA = 0;
	lengthS = 0;

	while (*(dest + lengthA) != '\0')
		lengthA++;

	while (*(src + lengthS) != '\0' && lengthA < 97 && lengthS < n)
	{
		*(dest + lengthA) = *(src + lengthS);
		lengthA++;
		lengthS++;
	}
	*(dest + lengthA) = '\0';
	return (dest);
}
