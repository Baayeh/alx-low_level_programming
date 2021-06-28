#include "holberton.h"

/**
 * puts2 - Print one character
 * @str: The whole string
 */
void puts2(char *str)
{
	int i, len = 0;

	while (str[i++])
		len++;

	for (i = 0; i < len; i +=2)
		_putchar(str[i]);

	_putchar('\n');
}
