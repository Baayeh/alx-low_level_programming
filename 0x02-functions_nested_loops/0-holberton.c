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

	write(2, res, 9);
	write(1, "\n", 1);
	return (0);
}
