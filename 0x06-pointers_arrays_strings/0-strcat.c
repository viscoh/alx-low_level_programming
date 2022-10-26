#include "main.h"
/**
 * _strcat - concatenates 2 strings.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int lengthA, lengthS;

	lengthA = 0;
	lengthS = 0;

	while (*(dest + lengthA) != '\0')
		lengthA++;

	while (*(src + lengthS) != '\0' && lengthA < 97)
	{
		*(dest + lengthA) = *(src + lengthS);
		lengthA++;
		lengthS++;
	}
	*(dest + lengthA) = '\0';
	return (dest);
}
