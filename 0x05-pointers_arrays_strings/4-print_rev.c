#include "holberton.h"

/**
 * print_rev - Print a string in reverse
 * @s: string
 */
void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	for (c--; s[c] != '\0'; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
