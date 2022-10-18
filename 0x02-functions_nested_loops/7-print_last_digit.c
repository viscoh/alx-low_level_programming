#include "main.h"
/**
 * print_last_digit - print
 * @n: check the last digit
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int x;

	if (n < 0)
	{
		n = -n;
	}
	x = n % 10;
	_putchar("0" + x);

	return (x);
}
