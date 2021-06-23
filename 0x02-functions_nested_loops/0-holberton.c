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
	char* name = "Holberton";
	
	char* res = printName(name);

	write(2, res, 8);

	return (0);
}

