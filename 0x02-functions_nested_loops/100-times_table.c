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

			if (prod <= n)
			{
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar((prod / 10) + '0');
			}
			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
