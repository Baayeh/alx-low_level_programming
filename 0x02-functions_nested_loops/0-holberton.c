#include <stdio.h>
#include <unistd.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return 0
 */
int main(void)
{
	char* name = "Holberton", res;
	
	res = printName(name);

	write(2, res, 9);

	return (0);
}

