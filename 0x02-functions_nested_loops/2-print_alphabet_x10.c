#include "holberton.h"
/**
 * print_alphabet_x10 - Printing the alphabets 10 times
 *
 * Return: 10 times
 */
void print_alphabet_x10(void)
{
	int i, counter;

	counter = 0;

	while (counter < 10)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		counter++;
		_putchar('\n');
	}
}
