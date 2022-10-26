#include "main.h"

/**
* rot13 -  encodes a string using rot13
* @str:the string targeted
*Return: returns the encoded string
*/

char *rot13(char *str)
{
	int index1, index2;

	index1 = 0;
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"

	char rot13key[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"

	while (*(str + index1) != '\0')
	{
		for (index2 = 0; index2 < 52; index2++)
		{
			if (*(str + index1)  == alphabet[index2])
			{
				*(str + index1) = rot13key[index2];
				break;
			}
		}
		index1++;
	}
	return (str);
}
