#include "holberton.h"

/**
 * print_rev - Print a string in reverse
 * @s: string
 */
void print_rev(char *s)
{
	if (*s)
	{
		print_rev(s + 1);
		_putchar(s);
	}

	_putchar('\n');
}
