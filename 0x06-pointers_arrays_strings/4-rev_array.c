#include "main.h"
/**
 * reverse_array - prints reverse array.
 * @a: array to be compared.
 * @n: size of array.
 * Return: reversed array.
 */
void reverse_array(int *a, int n)
{
	int swap, bn, end;

	bn = 0;
	end = n - 1;
	while (bn < end)
	{
		swap = *(a + bn);
		*(a + bn) = *(a + end);
		*(a + end) = swap;
		bn++;
		end--;
	}
}
