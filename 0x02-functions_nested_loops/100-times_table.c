#include "holberton.h"
/**
 * print_times_table - Entry point
 * @n: input
 * Return: Always 0
 */
void print_times_table(int n)
{
    int r, c, d;

	for (r = 0; r <= n; r++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (c = 1; c <= n; c++)
		{
			d = (r * c);
			if ((d / 10) > 0)
			{
				_putchar((d / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((d % 10) + '0');

			if (c < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
