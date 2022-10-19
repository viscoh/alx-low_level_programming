#include "main.h"

/**
 * print_times_table - starting with 0 ,print the n times table
 * @n: number of the time table
 */
void print_times_table(int n)
{
	long int num, mult, prod;

	for (num = 0; num <= n; num++)
	{
		_putchar('0');
		for (mult = 1; mult <= n; mult++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * mult;
			if (prod < 10 && mult != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(prod + '0');
			}
			else if (prod >= 10 && prod < 100)
			{
				_putchar(' ');
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
			else if (prod >= 100)
			{
				_putchar(prod + '0');
			}
		}
		_putchar('\n');
	}
}
