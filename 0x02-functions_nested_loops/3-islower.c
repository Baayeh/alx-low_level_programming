#include "holberton.h"
/**
 * _islower - check for lowercase
 * @c: single letter input
 * Return: 1 if c is lowercase, else 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 197)
		return (1);
	else
		return (0);
	
}
