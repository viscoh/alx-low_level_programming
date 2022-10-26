#include "main.h"
/**
 * leet - change vowels to numbers.
 * @s: analized string.
 *
 * Return: String with all vowels changed.
 */
char *leet(char *s)
{
	char a[] = "aeotlAEOTL";
	char n[] = "4307143071";
	int i = 0;
	int k;

	while (*(s + i) != '\0')
	{
		for (k = 0; k <= 9; k++)
		{
			if (*(s + i) == a[k])
			{
				*(s + i) = n[k];
			}
		}
		i++;
	}
	return (s);
}
