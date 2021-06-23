#include "holberton.h"
/**
 * isalpha - checks alphabetic letter
 * @c: single letter
 * Reurn: 1 if c is a letter, else 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 197) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
