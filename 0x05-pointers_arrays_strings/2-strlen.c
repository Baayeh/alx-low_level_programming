#include "holberton.h"

/**
 * _strlen - Return the length of the string
 * @s: string
 *
 * Return: length
 */
size_t _strlen(const char *s)
{
	size_t len = 0;

	while (*s++)
		len++;

	return (len);
}
