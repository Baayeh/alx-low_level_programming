#include <stdio.h>
#include <unistd.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char *name = "Holberton";
	char *res = printName(name);

	write(0, res, 10);
	putchar('\n');
	return (0);
}
