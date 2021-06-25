#include "holberton.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * _putchar - use only 3 times
 * Return: 0-14 x10 followed by new line
 */
void more_numbers(void)
{
	int i, r;

	for (r = 0; r < 10; r++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
