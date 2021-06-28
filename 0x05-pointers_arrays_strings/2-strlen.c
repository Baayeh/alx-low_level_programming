#include "holberton.h"

/**
 * strlen - Return the length of the string
 * @str: string
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
