#include "main.h"
/**
 * string_toupper - change lowercase letters to uppercase.
 * @s: analized string.
 *
 * Return: String with all letters Uppercased.
 */
char *string_toupper(char *s)
{
	int z = 0;

	while (*(s + z) != '\0')
	{
		if (*(s + z) >= 'a' && *(s + z) <= 'z')
		{
			*(s + z) = *(s + z) - 32;
		}
		z++;
	}
	return (s);
}

