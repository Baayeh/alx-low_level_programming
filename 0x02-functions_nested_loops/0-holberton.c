#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char *name = "Holberton";

	while (*name)
	{
		_putchar(*name);
		name++;
	}
	_putchar('\n');
	return (0);
}
