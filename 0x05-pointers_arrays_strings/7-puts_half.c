#include "holberton.h"

/**
 * puts_half - main entry
 * @str: character pointer
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0, half, n = 0;

	while (str[len] != '\0')
		len++;

	if (!(len % 2 == 0))
	{
		half = (len - 1) / 2;
		n = len - half;

		for (; str[n] != '\0'; n++)
			_putchar(str[n]);
	}
	else
	{
		for (half = len / 2; str[half] != '\0'; half++)
			_putchar(str[half]);
	}
	_putchar('\n');
}
